#ifndef DEMOS_PRINT_PROTOCOL_H
#define DEMOS_PRINT_PROTOCOL_H

// Copyright David Pettersson 2005 - 2011.
// Copyright Ian Kumlien 2005.
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

/**
 * @file
 *
 * This file contains the message protocol interface.
 */

#include <string>

#include "protocol.h"

namespace demos {

  using namespace reaktion;

  /**
   * Print protocol implementation.
   */
  class PrintProtocol : public Protocol {

  public:

    /**
     * Creates a print protocol instance.
     *
     * @param transport the transport
     */
    PrintProtocol(Transport* transport) : Protocol(transport) { }

    /**
     * Called on made connection.
     */
    virtual void onConnectionMade(void);

    /**
     * Called on received data.
     */
    virtual void onDataReceived(uint8_t data);

    /**
     * Called on lost connection.
     */
    virtual void onConnectionLost(void);
  };

}

#endif

