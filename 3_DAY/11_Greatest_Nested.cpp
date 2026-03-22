#include<iostream>
using namespace std;
int main(){
    cout<<"     Enter Three Different Numbers       "<<endl;
    int a,b,c;
    cout<<"Enter Your 1st Positive Integer : ";
    cin>>a;
    cout<<"Enter Your 2nd Positive Integer : ";
    cin>>b;
    cout<<"Enter Your 3rd Positive Integer : ";
    cin>>c;
    
    if(a>b){
        if(a>c){
            cout<<a<<" is greatest";
        }
        else{//a>b and c>a => c>a>b
            cout<<c<<" is greatest";
        }
    }
    else{//b>a
        if(b>c){
            cout<<b<<" is greatest";
        }
        else{//c>b  and b>a  => c>b>a
            cout<<c<<" is greatest";
        }

    }
}