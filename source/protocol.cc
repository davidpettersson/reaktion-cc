// Copyright David Pettersson 2005 - 2011.
// Copyright Ian Kumlien 2005.
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

#include "protocol.h"

namespace reaktion {

  Protocol::Protocol(Transport* transport) {
    this->transport = transport;
  }

  Protocol::~Protocol(void) {
    // Does nothing
  }

}

