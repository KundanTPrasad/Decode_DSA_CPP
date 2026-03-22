#include<iostream>
using namespace std;
int main(){
    cout<<"Enter Radius Of Circle : ";
    float r;
    cin>> r;
    float a,pi;
    pi = 3.14159;
    a = pi * r * r;
    cout<<"Area of the Circle : "<<a;
    return 0;
}