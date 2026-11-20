#include "lexer.hpp"
#include <iostream>
#include <print>
#include <string>
#include <vector>

int main() {
    std::string line{};
    std::println("Type 'exit' to exit the program");
    std::cout << "> ";
    while (std::getline(std::cin, line)) {
        if (line == "exit") {
            break;
        }
        std::vector<Token> tokens = tokenize(line);
        std::println("Read: [{}], length: {}", line, line.size());
        for (const auto& token : tokens) {
            std::println("token.text: {}", token.text);
        }
        std::cout << "> ";
    }
    return 0;
}
