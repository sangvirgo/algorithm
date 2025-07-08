#include <string>   // Required for std::string
#include <cstdint>  // Required for uint32_t
#include <iostream> // For output

int main() {
    std::string str_value = "1234567890";
    uint32_t uint_value;

    try {
        uint_value = std::stoul(str_value); // Convert string to unsigned long, then implicitly cast to uint32_t
        std::cout << "Converted value: " << uint_value << std::endl;
    } catch (const std::out_of_range& oor) {
        std::cerr << "Out of Range error: " << oor.what() << std::endl;
    } catch (const std::invalid_argument& ia) {
        std::cerr << "Invalid Argument error: " << ia.what() << std::endl;
    }

    return 0;
}