#include <iostream>
using namespace std;

int main(){
    int a,b,c,d;
    cin>>a>>b>>c;
    d=b+c;
    if(d/a%2!=0){
        cout<<"opponent";
    }else{
        cout<<"paul";
    }
return 0;
}
