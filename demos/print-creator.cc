/**
 * @file
 *
 * This file contains the server creator implementation.
 */

#include "print-creator.h"
#include "print-protocol.h"

namespace reaktor {
  
  PrintCreator::PrintCreator() {
  }

  Protocol* PrintCreator::create(Transport* const transport) const {
    return new PrintProtocol(transport);
  }

}

