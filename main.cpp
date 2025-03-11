#include <fstream>
#include <iostream>

int main() {
    // Open file in binary input mode
    std::fstream file("tips.shp", std::ios_base::binary | std::ios_base::in);

    if (!file.is_open()) {
        std::cerr << "Error opening file" << std::endl;
        return 1;
    }

    unsigned int num_strings;
    // TODO: Read number of strings
    file.read(reinterpret_cast<char*>(&num_strings), sizeof(num_strings));

    // TODO: Add loop to:
    for (unsigned int i = 0; i < num_strings; i++) {
        // 1. Read string length
        unsigned int str_len;
        file.read(reinterpret_cast<char*>(&str_len), sizeof(str_len));
        // 2. Read string characters
        char* buffer = new char[str_len];
        file.read(buffer, str_len);
        // 3. Print string
        std::cout << "String " << (i + 1) << ": ";;
        for (int j = 0; j < str_len; j++) {
            std::cout << buffer[j];
        }
        std::cout << std::endl;
    }

    file.close();
    return 0;
}
