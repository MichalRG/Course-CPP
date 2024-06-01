#include <iostream>

int main() {
    int favourite_number;
    
    std::cout << "Enter your fav number between 1 and 100: ";
    
    std::cin >> favourite_number;
    
    std::cout << "Nice!! That's my fav number too! " << favourite_number << std::endl;
    std::cout << "No really!, "<< favourite_number << " is my favourite number!"<<std::endl; 
    
    return 0;
}