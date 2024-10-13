#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    
    std::srand(static_cast<unsigned int>(std::time(0)));

    
    int num1 = std::rand() % 1000;
    int num2 = std::rand() % 1000;

    
    std::cout << num1 << "\n+" << num2 << std::endl;

    
    std::cout << "Press Enter when you are ready to check your answer...";
    std::cin.ignore();

    
    int correctAnswer = num1 + num2;

    
    std::cout << correctAnswer << std::endl;

    return 0;
}
