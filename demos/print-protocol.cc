// Copyright David Pettersson 2005 - 2011.
// Copyright Ian Kumlien 2005.
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

#include <cassert>

#include "print-protocol.h"

namespace demos {

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

