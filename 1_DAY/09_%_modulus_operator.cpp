#include<iostream>
using namespace std;
int main() {
      // if a > b;
    int a = 89;
    int b = 3;
    int r = a % b;
    cout<<r<<endl<<endl;
     
        // if a < b; divisor is greater than dividend so, dividend is already a remainder.
    a = 3;      // therefore, remainder is always equal to "a".
    b = 4;
    r = a % b;
    cout<<r<<endl<<endl;


    cout<<5%2<<endl;
    cout<<5%-2<<endl;
    cout<<5%(-2)<<endl;         
    cout<<-5%2<<endl;
    cout<<(-5)%2<<endl;
    cout<<(-5)%(-2)<<endl;
    

}
