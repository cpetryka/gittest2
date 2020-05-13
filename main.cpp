#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> box {"Adam", "Ewa", "Krzysztof"};

    for(const auto& one_name : box) {
        std::cout << one_name << std::endl;
    }

    return 0;
}
