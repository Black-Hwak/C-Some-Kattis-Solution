#include <iostream>
using namespace std;

int main(){
    int a,b,c,d;
    cin>>a>>b;
    c=a+b;
    if(a>b){
        d=a;
    }else{
        d=b;
    }
    if(a==0 && b==0){
        cout<<"Not a moose";
    } else if(c%2==0){
        cout<<"Even "<<d*2;
    }else{
        cout<<"Odd "<<d*2;
    }
return 0;
}
