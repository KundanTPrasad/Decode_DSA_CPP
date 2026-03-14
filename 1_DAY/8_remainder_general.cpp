#include<iostream>
using namespace std;
int main() {
    int a = 19;  // dividend = divisor x quotient + remainder
    int b = 4;  //  a = b x q + r      rahi baat q ki to wo  before decimal quotient is that required quotient; 
    int q = a/b;  // r = a - b x q
    int r = a - b*q;
    cout<<r;
   

}