#include "lexer.hpp"

#include <cctype>

std::vector<Token> tokenize(const std::string& text) {
    std::vector<Token> tokens{};
    std::size_t i{0};
    while (i < text.size()) {
        if (std::isdigit(static_cast<unsigned char>(text[i]))) {
            std::size_t start{i};
            while (i < text.size() &&
                   std::isdigit(static_cast<unsigned char>(text[i]))) {
                ++i;
            }
            std::string number = text.substr(start, i - start);
            Token token{TokenType::Number, number};
            tokens.push_back(token);
        } else {
            ++i;
        }
    }
    return tokens;
}
