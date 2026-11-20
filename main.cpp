#include "lexer.hpp"
#include <iostream>
#include <print>
#include <string>
#include <string_view>
#include <vector>

constexpr std::string_view g_invite{"> "};

int main() {
    std::string line{};
    std::println("Type 'exit' to exit the program");
    std::cout << g_invite;
    while (std::getline(std::cin, line)) {
        if (line == "exit") {
            break;
        }
        if (line.empty()) {
            std::cout << g_invite;
            continue;
        }
        std::vector<Token> tokens = tokenize(line);
        std::println("Read: [{}], length: {}", line, line.size());
        for (const auto& token : tokens) {
            std::println("token.text: {}", token.text);
        }
        std::cout << g_invite;
    }
    return 0;
}
