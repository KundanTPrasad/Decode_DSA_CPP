#include<iostream>
using namespace std;

int main () {
    cout<<"Enter your Integer = ";
    int x;
    cin>>x;
    if(x%5==0){
        cout<<"Divisible By 5";
    }
    else{
        cout<<"NOT Divisible By 5";
    }
    return 0;
}