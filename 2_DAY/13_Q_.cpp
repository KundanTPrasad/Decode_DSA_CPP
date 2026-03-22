#include<iostream>
using namespace std;

int main () {
    int num1;
    int p = 5, q = 10;
    p += q -= p;     // this will be solved from right --> left; in assigning case
    cout<<p<<"  "<<q<<endl;
    return 0;
}