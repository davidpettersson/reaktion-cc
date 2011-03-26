/**
 * @file
 *
 * This file contains the transport implementation.
 */

#include "transport.h"

namespace reaktor {

  Transport::Transport(void) {
    transportName = "<unknown>";
  }

  Transport::Transport(std::string& name) {
    transportName = name;
  }

  std::string& Transport::getName(void) {
    return transportName;
  }

  Transport::~Transport(void) {
    // Does nothing
  }
}
