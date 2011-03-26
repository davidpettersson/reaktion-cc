/**
 * @file
 *
 * This file contains the protocol implementation.
 */

#include "protocol.h"

namespace reaktor {

  Protocol::Protocol(Transport* transport) {
    this->transport = transport;
  }

  Protocol::~Protocol(void) {
    // Does nothing
  }

}

