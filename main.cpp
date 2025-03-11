#include <fstream>
#include <iostream>

int main() {
    // Open file in binary input mode
    std::fstream file("tips.shp", std::ios_base::binary | std::ios_base::in);

    if (!file.is_open()) {
        std::cout << "Error opening file" << std::endl;
        return 1;
    }

    unsigned int num_strings;
    // TODO: Read number of strings
    // Hint: file.read((char *)&num_strings, sizeof(num_strings));

    // TODO: Add loop to:
    // 1. Read string length
    // 2. Read string characters
    // 3. Print string

    file.close();
    return 0;
}
