#include<iostream>
using namespace std;
int main () {
    // int, float,bool, char --> typecasting
    float a = 7.1;
    int x;
    x = (int)a;
    cout<<x<<endl;
    bool b = false;
    int y;
    y = (int)b;
    cout<<y+9<<endl;

    bool c = true;
    int z;  
    z = (int)c;
    cout<<z+9<<endl;
    // mainly used for ascii values
    char ch = 'A';
    int p = (int)ch;
    cout<<p<<endl;
    cout<<p+10<<endl;





    
    return 0;
}
