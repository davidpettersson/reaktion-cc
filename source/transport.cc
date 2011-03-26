#include "transport.h"

namespace reaktion {

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
