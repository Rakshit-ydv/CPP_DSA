#include <iostream>

int main() {
    char str[100];  
    std::cout << "Enter a string: ";
    std::cin.getline(str, 100);  
    int length = 0; 
    while (str[length] != '\0') {
        length++;  
    }
    std::cout << "The length of the string is: " << length;

    return 0;
}
