#include <iostream>

using namespace std;

int main() {
    bool EqualResult {false};
    bool NotEqualResult {false};
     cout << boolalpha; // will display true or false instead of 1/0 for booleans
     
    // integers 
    
    //int num1{}, num2{};
   // cout << "Enter two integers seperated by a space: ";
   // cin >> num1 >> num2;
    //EqualResult = (num1 == num2);
    //NotEqualResult = (num1 != num2);
    //cout << "Comparision result (equals): " << EqualResult << endl;
    //cout << "Comparision result (not equals): " << NotEqualResult << endl;
    
    //characters
    
    char char1{}, char2{};
    cout << "Enter two characters seperated by a space: ";
    cin >> char1 >> char2;
    EqualResult = (char1 == char2);
    NotEqualResult = (char1 != char2);
    cout << "Comparision result (equals): " << EqualResult << endl;
    cout << "Comparision result (not equals): " << NotEqualResult << endl;
    
    //doubles
    
    double double1{}, double2{};
    count << "Enter two doubles seperated by a space: ";
    cin >> double1 >> double2;
    cout << "Comparision result (equals): " << EqualResult << endl;
    cout << "Comparision result (not equals): " << NotEqualResult << endl;
 
    return 0;
}
