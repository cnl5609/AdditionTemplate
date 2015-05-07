// Addition Template Function
// by Colby Laramore

// Include standard libraries

#include <iostream>
#include <string>
using namespace std;

// Template Function Declaration for Addition

template <typename type1, typename type2>
type1 addition(type1 a, type2 b);

// Template Function for Addition Implementation

template <typename type1, typename type2>
type1 addition(type1 a, type2 b) 
{
        return (type1)a + b;
}
 
// Main Function

int main()
{
    // Program Information Output
    
    cout << "Addition Template Function" << endl;
    cout << "by Colby Laramore" << endl;
    cout << endl;

    // Test out the template function addition with ints, doubles, strings, and bools
    
    cout << "Double (1.5) + Double (1.9) = Double (3.4)" << endl;
    cout << endl;
    cout << addition(1.5,1.9) << endl; // Double (1.5) + Double (1.9) = Double (3.4)
    cout << endl;
    
    cout << "Int 5 + Int 105 = Int 110" << endl;
    cout << endl;
    cout << addition(5,105) << endl; // Int 5 + Int 105 = Int 110
    cout << endl;
    
    cout << "Double 5.01 + Int 105 = Double 110.01" << endl;
    cout << endl;
    cout << addition(5.01,105) << endl; // Double 5.01 + Int 105 = Double 110.01
    cout << endl;
    
    cout << "'A' + 25 chars = 26th char 'Z'" << endl;
    cout << endl;
    cout << addition('a',25) << endl;   // 'A' + 25 chars = 26th char 'Z'
    cout << endl;
    
    cout << "25 + 97 (ASCII int for 'a') = 122" << endl;
    cout << endl;
    cout << addition(25,'a') << endl;   // 25 + 97 (ASCII int for 'a') = 122 
    cout << endl;
    
    cout << "True (1) + False (0) = True (1)" << endl;
    cout << endl;
    cout << addition(true,false) << endl; // True (1) + False (0) = True (1)
    cout << endl;
    
    cout << "False (0) + True (1) = True (1)" << endl;
    cout << endl;
    cout << addition(false,true) << endl; // False (0) + True (1) = True (1)
    cout << endl;

}
