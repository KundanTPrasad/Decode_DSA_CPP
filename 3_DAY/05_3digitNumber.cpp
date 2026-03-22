#include<iostream>
using namespace std;

int main () {
    cout<<"Enter Your Number = ";
    int x;
    cin>>x;
    // if (99<x<1000){ it is not working.
    if(x>99 && x<1000){
        cout<<"It is a three digit number";
    }
    else{
        cout<<"It is not a three digit number";
    }
    return 0;
}