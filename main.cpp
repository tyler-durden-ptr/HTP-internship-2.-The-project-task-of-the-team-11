#include "src/Runner.h"

#include <rapidjson/document.h>

#include <format>
#include <iostream>

int main(int argc, char* argv[]) {
    if (argc != 3) {
      std::cout << std::format("Incorrect number of arguments ({}), help: app <input_file> <output_file>", argc - 1) << std::endl;
      return 1;
    }
    Runner::run(argv[1], argv[2], 2);
    return 0;
}
