#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> msg = {"Hello", "World", "ready", "to", "reach", "the", "next", "level?"};

    for (const auto& word : msg){
        std::cout << word << " ";
    }
}