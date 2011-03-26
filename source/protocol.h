#ifndef REAKTION_PROTOCOL_H
#define REAKTION_PROTOCOL_H

// Copyright David Pettersson 2005 - 2011.
// Copyright Ian Kumlien 2005.
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

/**
 * @file
 *
 * This file contains protocol interface.
 */

#include <iostream>

#include "transport.h"

namespace reaktion {

  /**
   * Base class for all protocols. Protocols are defined seperately
   * for both client and server. To create a new protocol, create a
   * new class that inherits from this one, and override the data
   * receiving method, and add data sending methods.
   */
  class Protocol {

  public:

    /**
     * Creates a protocol instance and gives it a transport to use for
     * future communication.
     *
     * @param transport the transport
     */
    Protocol(Transport* const transport);

    /**
     * Called on made connection.
     */
    virtual void onConnectionMade(void) = 0;

    /**
     * Called on data receival.
     *
     * @param data the data received
     */
    virtual void onDataReceived(uint8_t data) = 0;

    /**
     * Called on lost connection.
     */
    virtual void onConnectionLost(void) = 0;

    /**
     * Destroys an instance.
     */
    virtual ~Protocol(void);

  protected:

    /**
     * The transport. Stored by the constructor.
     */
    Transport* transport;
  };

}

#endif

