#include<iostream>
using namespace std;
int main () {
    cout<<"     Checking For Vowel or Consonant"<<endl;
    char ch;
    cout<<"Enter Your Character : ";
    cin>>ch;
    int num = (int)ch;
    if((num>64 && num<91) || (num>96 && num<126)){
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o'  || ch=='u'|| ch=='A' || ch=='E' || ch=='I' || ch=='O'  || ch=='U'){
            cout<<"Vowel Alphabet";
        }
        else{
            cout<<"consonant";
        }
    }
    else{
        cout<<"NOT an alphabet";
    }
}
       