#include <iostream>
#include <string>

int main() {
    char* username = std::getenv("USER");
    std::string name = username ? username : "unknown";
    std::cout << "Hello, " << name << "!" << std::endl;
    return 0;
}