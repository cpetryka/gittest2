#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main() {
    std::vector<std::string> box {"Adam", "Ewa", "Krzysztof"};

    std::sort(box.begin(), box.end());

    for(const auto& one_name : box) {
        std::cout << one_name << std::endl;
    }

    return 0;
}