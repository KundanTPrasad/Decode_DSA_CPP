#include<iostream>
using namespace std;
int main (){
    bool p,q,r;
    p = false;
    q = false;
    r = true;
    cout<<(p==q==r)<<endl;
    cout<<(p==(q==r))<<endl;
    int x,y,z;
     x = 1;
     y = 2;
     z = 2;
    cout<<(x==y==z)<<endl;
    cout<<(x==(y==z));
    return 0;
} 