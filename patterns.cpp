#include <iostream>

int main() {
    int num, reversed_num = 0, remainder;




    

    std::cout << "Enter an integer: ";
    std::cin >> num;

    // Loop until the original number becomes 0
    while (num != 0) {
        // Get the last digit
        remainder = num % 10; 
        
        // Build the reversed number
        reversed_num = reversed_num * 10 + remainder; 
        
        // Remove the last digit from the original number
        num /= 10; 
    }

    std::cout << "Reversed Number = " << reversed_num << std::endl;

    return 0;
}