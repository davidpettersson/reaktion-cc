// Copyright David Pettersson 2005 - 2011.
// Copyright Ian Kumlien 2005.
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

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
