#include<iostream>
using namespace std;

int main() {
    int a,b,c;
    cout<<"Enter Your 1st Number = ";
    cin>>a;
    cout<<"Enter Your 2st Number = ";
    cin>>b;
    cout<<"Enter Your 3st Number = ";
    cin>>c;

    if(a>b && a>c){
        cout<<a<<" is greatest";
    }
    if(b>a && b>c){
        cout<<b<<" is greatest";
    }
    if(c>a && c>b){
        cout<<c<<" is greatest";
    }
    if(a==b && a>c){
        cout<<a<<" is greatest";
    }
    if(a==c && a>b){
        cout<<a<<" is greatest";
    }
    if(b==c && b>a){
        cout<<b<<" is greatest";
    }
    if(a==b && a==c){
        cout<<a<<" is greatest";
    }
    return 0;
}