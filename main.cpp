#include "lexer.hpp"
#include <print>

int main() {
    std::println("{}", tokenize("12+3").size());
    return 0;
}
