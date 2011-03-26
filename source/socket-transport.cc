/**
 * @file
 *
 * This file contains the socket transport implementation.
 */

#include <cassert>
#include <sys/socket.h>
#include <sys/types.h>

#include "socket-transport.h"

#define PREFIX "[SocketTransport] "

namespace reaktor {
  
  SocketTransport::SocketTransport(int d) {
    descriptor = d;
  }

  SocketTransport::SocketTransport(int d, std::string& name) : Transport(name) {
    descriptor = d;
  }

  void SocketTransport::send(uint8_t data) {
    if (isClosed()) {
      return;
    }

    int n = ::send(descriptor, &data, 1, 0);

    if (n == -1) {
      close();
    } else if (n == 0) {
      close();
    } else {
      // All is well
    }

#ifdef ENABLE_DEBUG
    std::cout << TRANSPORT_PREFIX(this) << "send " << static_cast<int>(data) << std::endl;
#endif
  }

  uint8_t SocketTransport::receive(void)  {
    if (isClosed()) {
      return 0;
    }

    uint8_t data;
    int n = recv(descriptor, &data, 1, 0);

    if (n == -1) {
      close();
    } else if (n == 0) {
      close();
    } else {
      // All is well
    }

#ifdef ENABLE_DEBUG
    std::cout << TRANSPORT_PREFIX(this) "receive " << static_cast<int>(data) << std::endl;
#endif

    return data;
  }

  int SocketTransport::getDescriptor(void) {
    return descriptor;
  }

  void SocketTransport::close(void) {
    if (descriptor != -1) {
      ::close(descriptor);
      descriptor = -1;
    }
  }

  bool SocketTransport::isClosed(void) const {
    return descriptor == -1;
  }

  SocketTransport::~SocketTransport(void) {
    if (descriptor != -1) {
      ::close(descriptor);
    }
  }
}


