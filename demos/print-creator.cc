#include "print-creator.h"
#include "print-protocol.h"

namespace demos {
  
  PrintCreator::PrintCreator() {
  }

  Protocol* PrintCreator::create(Transport* const transport) const {
    return new PrintProtocol(transport);
  }

}

