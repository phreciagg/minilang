#include "lexer.hpp"

#include <cctype>
#include <string>
#include <vector>

static void add_token(std::vector<Token>& tokens, TokenType tokentype,
                      const std::string& str) {
    tokens.push_back(Token{tokentype, str});
}

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
        } else if (text[i] == '+') {
            add_token(tokens, TokenType::Plus, "+");
            ++i;
        } else if (text[i] == '-') {
            add_token(tokens, TokenType::Minus, "-");
            ++i;
        } else if (text[i] == '*') {
            add_token(tokens, TokenType::Multiplication, "*");
            ++i;
        } else if (text[i] == '/') {
            add_token(tokens, TokenType::Division, "/");
            ++i;
        } else if (text[i] == '(') {
            add_token(tokens, TokenType::LeftParenthesis, "(");
            ++i;
        } else if (text[i] == ')') {
            add_token(tokens, TokenType::RightParenthesis, ")");
            ++i;
        } else {
            ++i;
        }
    }
    tokens.push_back(Token{TokenType::End, ""});
    return tokens;
}
