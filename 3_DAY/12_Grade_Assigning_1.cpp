#include<iostream>
using namespace std;
int main() {
    cout<<"     Grade Assigning         "<<endl;
    float x;
    cout<<"Enter Your Percentage: ";
    cin>>x;
    if(x>=91 && x<=100){
        cout<<"Excellent";
    }
    else{
        if(x>=81){
            cout<<"Very Good";
        }
        else{
            if(x>=71){
                cout<<"Good";
            }
            else{
                if(x>=61){
                    cout<<"Can do beter";
                }
                else{
                    if(x>51){
                        cout<<"Average";
                    }
                    else{
                        if(x>=41){
                            cout<<"Below Average";
                        }
                        else{
                            cout<<"Fail";
                        }
                    }
                }
            }
        }
    }
    
    
    return 0;
}