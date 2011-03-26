// Copyright David Pettersson 2005 - 2011.
// Copyright Ian Kumlien 2005.
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

#include <cstdio>

#include "network-reactor.h"
#include "protocol.h"
#include "transport.h"
#include "print-creator.h"

int main(int argc, char* argv[]) {
  demos::NetworkReactor networkReactor;
  demos::PrintCreator creator;
  networkReactor.serve(1234, &creator);
  return 0;
}

