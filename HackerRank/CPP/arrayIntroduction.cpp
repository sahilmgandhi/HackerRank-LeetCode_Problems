#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int num = 0;
    cin >> num;
    
    int arrEx [num];
    for (int i = 0; i < num; i++)
        cin >> arrEx[i];
    for (int j = 0; j < num; j++)
        cout << arrEx[num-j-1] << " ";
    return 0;
}
