#include <iostream>
using namespace std;

int main(){
    int num;
    string ab[40], a,b, ba;
    cin>>num;
    ab[0]=b;
    ba = "BA";
    a="A";
    b="B";
    for(int i=0; i<num;i++){
        if(ab[i] == b){
            ab[i+1]=ba;
        }if(ab[i] == a){
            ab[i+1]=b;
        }
        cout<<ab[i]<<endl;
    }
return 0;
}
