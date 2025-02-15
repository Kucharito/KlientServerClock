#include <iostream>
#include <ctime>

int main() {
    std::time_t now = std::time(nullptr);
    
    std::tm* local_time = std::localtime(&now);
    
    std::cout << "Aktuální čas: " 
              << (local_time->tm_hour) << ":"
              << (local_time->tm_min) << ":"
              << (local_time->tm_sec) << std::endl;
    
    return 0;
}

