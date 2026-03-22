#include<iostream>
using namespace std;
int main() {
    cout<<"     To check sides of triangle      "<<endl;
    int a,b,c;
    cout<<"Enter 1st side = ";
    cin>>a;
    cout<<"Enter 2nd side = ";
    cin>>b;
    cout<<"Enter 3rd side = ";
    cin>>c;
    if((a+b>c) && (b+c>a)  && c+a>b){
        cout<<"Triangle Can Be formed";   
    }
    else{
        cout<<"Triangle Can't Be formed";
    
    }
}