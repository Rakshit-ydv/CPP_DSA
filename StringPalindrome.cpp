#include <iostream>

int main() {
    char str[100];  
    std::cout << "Enter a string: ";
    std::cin.getline(str, 100);
    int si,ei;ss
    int length = 0; 
    while (str[length] != '\0') {
        length++;  
    }

    ei=length-1;
    while(si>ei){
        if(str[si]!=str[ei]){
            std::cout<<"String is not Palindrome";
            break;
        }
        si++;
        ei--;
    }
    
    std::cout << "String " << str <<" is Palindrome";

    return 0;
}
