#include<iostream>
using namespace std;

int main () {
int i = 2 * 3 / 4 + 4 + 8 - 2 + 5 / 8; // ans 11
cout << i << endl;
int o = 3 / 4 * 2 + 4 + 8 - 2 + 5 / 8;   // ans = 10
cout<< o;   // This is because code run from left to right;
    return 0;
}