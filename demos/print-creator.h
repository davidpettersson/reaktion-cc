#ifndef DEMOS_PRINT_CREATOR_H
#define DEMOS_PRINT_CREATOR_H

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

