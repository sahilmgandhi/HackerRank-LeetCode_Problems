#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int input;
    cin >> input;
    
    if (input >= 1 && input <= 9)
    {
        if (input == 1)
            cout << "one";
        if (input == 2)
            cout << "two";
        if (input == 3)
            cout << "three";
        if (input == 4)
            cout << "four";
        if (input == 5)
            cout << "five";
        if (input == 6)
            cout << "six";
        if (input == 7)
            cout << "seven";
        if (input == 8)
            cout << "eight";
        if (input == 9)
            cout << "nine";
    }
    else
         cout << "Greater than 9";
   return 0;
}
