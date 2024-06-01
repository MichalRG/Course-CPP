#include <iostream> //preprocessor directive

int main () { // main is called by SO
    int fav_number;
    std::cout << "Enter fav number: " << std::endl;
    std::cin >> fav_number;
    std::cout << "Mine too! " <<fav_number<<std::endl;
    
    double float_number, float_number_2;
    std::cout << "Enter Double (two values separate with space): ";
    std::cin >> float_number >> float_number_2;
    
    std::cout << "U enter double: " << float_number << " and " << float_number_2 << std::endl;
    
    return 0; //0 means programmer processed correctly
    /* MULTI
     * LINE
     * COMMENT 
     * */
}