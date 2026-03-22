#include<iostream>
using namespace std;

int main() {
    // char ch;
    // cout<<"Enter Your Character = ";
    // cin>>ch;
    // int ascii = (int)ch;
    // if(ascii>= 97 && ascii <= 122 ){
    //     cout<<"Lowercase Alphabet";
    // }
    //  if(ascii>= 65 && ascii <= 90 ){
    //     cout<<"Uppercase Alphabet";
    // }
    // else {
    //     cout<<"NOT Alphabet";
    // }
     char hc;
     cout<<"Enter Your Character = ";
    cin>>hc;
    int scii = (int)hc;
    if((scii>= 97 && scii <= 122) ||(scii>=65 && scii <= 90 ) ){
        cout<<"Alphabet";
    }
    
    else {
        cout<<"NOT Alphabet";
    }

   
    return 0;
}