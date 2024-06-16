#include <iostream>
#include <string>
#include <optional>

std::optional <size_t> find_character(const std::string & str, char c) {
    for(int i{}; i < str.size(); ++i) {
        if(str.c_str()[i] == c) {
            return i;
        }
    }
    return {};
}

int main () {
    const std::string str1 {"Hello C++ course!"};
    char c {'H'};
    char c2 {'B'};

    std::optional <int> result = find_character(str1, c);

    if(result.has_value()) {
        std::cout << "Found "<< c << " at index " << result.value() << std::endl;
    } else {
        std::cout << "Could not find " << c << " in the string: " << str1 << std::endl;
    }

    result = find_character(str1, c2);

    if(result.has_value()) {
        std::cout << "Found "<< c2 << " at index " << result.value() << std::endl;
    } else {
        std::cout << "Could not find " << c2 << " in the string: " << str1 << std::endl;
    }


   return 0; 
}