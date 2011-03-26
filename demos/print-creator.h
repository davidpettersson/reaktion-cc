#ifndef REAKTOR_PRINT_CREATOR_H
#define REAKTOR_PRINT_CREATOR_H

/**
 * @file
 *
 * This file contains the print creator interface.
 */

#include "protocol-creator.h"
#include "protocol.h"
#include "transport.h"

namespace reaktor {

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

