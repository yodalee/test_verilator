#include "Vtop.h"
#include "verilated_fst_c.h"
#include <memory>

int main(int argc, char **argv) {
  std::unique_ptr<Vtop> top{new Vtop("top")};
  return 0;
}
