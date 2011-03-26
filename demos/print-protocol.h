#ifndef DEMOS_PRINT_PROTOCOL_H
#define DEMOS_PRINT_PROTOCOL_H

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

