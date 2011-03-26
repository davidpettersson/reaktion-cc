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

