#include <iostream>
#ifdef EXPERIMENTAL_FS
#include <experimental/filesystem>
namespace std_fs = std::experimental::filesystem;
#else
#include <filesystem>
namespace std_fs = std::filesystem;
#endif


int main(){
    std::cout << std_fs::exists("foo") << std::endl;
}
