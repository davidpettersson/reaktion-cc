#ifndef DEMOS_PRINT_CREATOR_H
#define DEMOS_PRINT_CREATOR_H

// Copyright David Pettersson 2005 - 2011.
// Copyright Ian Kumlien 2005.
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

#include "protocol-creator.h"
#include "protocol.h"
#include "transport.h"

namespace demos {

  using namespace reaktion;

  /**
   * Class for creating instances of the print protocol.
   */
  class PrintCreator : public ProtocolCreator {

  public:

    /**
     * Construct a protocol.
     */
    PrintCreator();

    /**
     * Creates instances of print protocols.
     *
     * @param transport the transport to give the protocol
     */
    Protocol* create(Transport* const transport) const;

  };
}

#endif

