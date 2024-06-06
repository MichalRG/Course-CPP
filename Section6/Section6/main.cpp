#include <iostream>
#include <climits>

using namespace std;

int age; // global variable, default value is 0

int main () { 
    cout << "Enter the width of the room: ";
    int room_width {0}; // local variable if there is also global var with the same name, local var has priority over global
    cin >> room_width;
    
    cout << "Enter the height of the room: ";
    int room_length {0};
    cin >> room_length;
    
    cout << "The area of the room is " << room_width*room_length<<" square meters" <<endl;
    cout << "The value for global variable is " << age << endl;
    
    /************************************
     * 
     * types
     * 
     ************************************/
    char middle_initial {'J'};
    cout << "Middle initial "<< middle_initial << endl;
    
    unsigned short int exam_score {55};
    cout << "Exam score unsigned shot int: " << exam_score << endl;
    
    long long people_on_earth {7'600'000'000}; //if I dont use modern {} operator to assign this value it won't throw error if set type as long 
    // instead it will display some kind of minus large number
    cout << "People on earth (long long people earth, just long is not enough)" << people_on_earth << endl;
    
    double pi {3.14159};
    cout << "PI double is "<< pi << endl;
    
    long double large_amount {2.7e120};
    cout << "VERY BIG NUMBER e120" << large_amount << endl;
    
    bool game_over = false;
    cout << "GAME OVER: "<< game_over; // it will display 0 becuase false means 0
    
    /********************************
     * 
     *  limits
     * 
     * ***************************************/
    cout << "sizeof information" <<endl;
    cout << "char: " << sizeof(char) << "bytes"<<endl;
    cout << "int: " << sizeof(int) << "bytes"<<endl;
    cout << "uint: " << sizeof(unsigned int) << "bytes"<<endl;
    cout << "short: " << sizeof(short) << "bytes"<<endl;
    cout << "long: " << sizeof(long) << "bytes"<<endl; 
    cout << "long long: " << sizeof(long long) << "bytes"<<endl;
    cout << "float: " << sizeof(float) << "bytes"<<endl;
    cout << "double: " << sizeof(double) << "bytes"<<endl;
    cout << "long double: " << sizeof(long double) << "bytes"<<endl;
    
    cout << "Mimnimum values: " << endl;
    cout << "char " << CHAR_MIN << endl;
    cout << "int " << INT_MIN << endl;
    cout << "long long " << LONG_LONG_MIN << endl;
    cout << "Maximum values: " << endl;
    cout << "char " << CHAR_MAX << endl;
    cout << "int " << INT_MAX << endl;
    cout << "long long " << LONG_LONG_MAX << endl;
    
    /***********************
     * 
     * Declaring constants
     * 
    ****************************/
    cout << "How many rooms would you like cleans?" << endl;
    
    int number_of_rooms {0};
    cin >> number_of_rooms;

    const double price_per_room {30};
    const double sales_tax {30};
    const int estimate_expiry {30}; //days

    cout << "\nEstimate for carpet cleaning service" << endl;
    cout << "Number of rooms " << number_of_rooms;
    cout << "Price per room $" << price_per_room << endl;
    cout << "Cost: $" << price_per_room * number_of_rooms << endl;
    cout << "Tax: $" << price_per_room * number_of_rooms * sales_tax  << endl;
    cout << "====================" << endl;
    cout << "Total estimate: $" << (price_per_room * number_of_rooms) + (price_per_room * number_of_rooms * sales_tax) << endl;
    cout << "This esmimate is valid for " << estimate_expiry << " days"<< endl;

    return 0;
}