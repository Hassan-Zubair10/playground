#include <iostream>
#include <optional>

std::optional<int> divide(int numerator, int denominator) {
    if (denominator != 0) {
        return numerator / denominator;
    } else {
        return std::nullopt;
    }
}

int main() {
    int a = 10;
    int b = 2;

    auto result = divide(a, b);
    if (result) {
        std::cout << "Result of division: " << *result << std::endl;
    } else {
        std::cout << "Cannot divide by zero." << std::endl;
    }

    
    int c = 5;
    int d = 0;
    int default_value = 1;
    auto result2 = divide(c, d).value_or(default_value);
    std::cout << "Result of division with default value: " << result2 << std::endl;

    return 0;
}
