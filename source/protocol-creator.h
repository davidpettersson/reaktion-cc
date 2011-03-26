#ifndef REAKTION_PROTOCOL_CREATOR_H
#define REAKTION_PROTOCOL_CREATOR_H

// Copyright David Pettersson 2005 - 2011.
// Copyright Ian Kumlien 2005.
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

/**
 * @file
 *
 * This file contains the protocol creator interface.
 */

#include <iostream>

#include "protocol.h"
#include "transport.h"

namespace reaktion {

  /**
   * Protocol creator interface. This interface is used to avoid
   * having the network reactor know anything about how to create
   * protocols other than that they require a transport.
   */
  class ProtocolCreator {

  public:

    /**
     * Creates instances of protocols.
     *
     * @param transport the transport to give the protocol
     */
    virtual Protocol* create(Transport* const transport) const = 0;
  };
}

#endif

