#include <iostream>

using namespace std;

//liniking errors - it's example of error if your main.o has x variable but iostream doesnt see it so it hase problem to prcoess (?)

int main () {
    // cout << "Default Template" <<endll; // <- SYNTAX ERROR too much l letters;
    // cout << ("Default Template"/125) <<endl; // <- COMPILE ERROR cannot divide string with int, invalid operator
    cout << "Default Template" <<endl; 
    
    // return 0 //<- SYNTAX ERROR lack of semicolon
    //return "Joe" // <- SYNTAX ERROR it expects int and got string
    
    int favourite_number; // <- COMPILE WARNING because u dont use it leter 
    int fav_number;
    std::cout << fav_number << std::endl; // <- COMPILE WARRNING it wont fail but it warn u that u're doing sth wrong   
    
    //RUNTIME ERROR - these are errors which occurs during running the program e.g. diviing by 0 
    
    //LOGIC ERROR - error that u missed some kinf of path in your logic and it not alwyas works as u expected
    
    return 0; // <- CORRECT
}