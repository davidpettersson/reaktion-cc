#include "protocol.h"

namespace reaktion {

  Protocol::Protocol(Transport* transport) {
    this->transport = transport;
  }

  Protocol::~Protocol(void) {
    // Does nothing
  }

}

