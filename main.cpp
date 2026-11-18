#include "lexer.hpp"
#include <print>
#include <vector>

int main() {
    std::vector<Token> tokens = tokenize("(12+3)*4");
    for (const auto& token : tokens) {
        std::println("token.text: {}", token.text);
    }
    return 0;
}
