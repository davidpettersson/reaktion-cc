/**
 * @file
 *
 * This file contains the message protocol implementation.
 */

#include <cassert>

#include "print-protocol.h"

namespace reaktor {

  void PrintProtocol::onConnectionMade(void) {
    std::cout << "connection made" << std::endl;
  }

  void PrintProtocol::onDataReceived(uint8_t data) {
    std::cout << "received data " << data << std::endl;
  }

  void PrintProtocol::onConnectionLost(void) {
    std::cout << "connection lost" << std::endl;
  }
}

