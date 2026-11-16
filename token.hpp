#pragma once

#include <string>

enum class TokenType {
    Number,
    Plus,
    Minus,
    Multiplication,
    Division,
    LeftParenthesis,
    RightParenthesis,
    End
};

struct Token {
    TokenType type{};
    std::string text{};
};
