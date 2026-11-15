#include <print>
#include <string>

void test(const std::string& prompt) {
    std::println("{}", prompt);
}

int main() {
    test("test");
    return 0;
}
