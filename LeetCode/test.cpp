#include <iostream>
#include <string>
#include <bitset>
#include <sstream> // Cần thư viện này cho std::stringstream

// Hàm chuyển đổi số nguyên (âm hoặc dương) sang chuỗi Hexa
std::string DecToHex(int num) {
    // Sử dụng std::stringstream để định dạng đầu ra
    std::stringstream ss;
    
    // std::hex sẽ định dạng số tiếp theo dưới dạng hexa
    // (unsigned int)num để đảm bảo biểu diễn 2's complement cho số âm được xử lý đúng
    ss << std::hex << (unsigned int)num; 
    
    return ss.str();
}

int main() {
    int num1 = -1;
    int num2 = -10;
    int num3 = 255;

    std::cout << num1 << " in hex is: 0x" << DecToHex(num1) << std::endl;
    std::cout << num2 << " in hex is: 0x" << DecToHex(num2) << std::endl;
    std::cout << num3 << " in hex is: 0x" << DecToHex(num3) << std::endl;

    if(1&1) {
        std::cout << 1;
    }
    return 0;
}