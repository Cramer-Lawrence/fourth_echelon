#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> msg = {"Hello", "World", "ready", "to", "reach", "the", "next", "level?"};

    for (const auto& word : msg){
        std::cout << word << " ";
    }
}