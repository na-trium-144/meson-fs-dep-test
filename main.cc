#include <filesystem>
#include <iostream>

int main(){
    std::cout << std::filesystem::exists("foo") << std::endl;
}
