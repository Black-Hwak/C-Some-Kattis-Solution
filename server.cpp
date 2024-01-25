#include <iostream>
using namespace std;

int main(){
    int num,T,input,total =0,counter =0;
    cin>>num>>T;
    for(int i=0; i<num; i++){
        cin>>input;
        total += input;
        if(total<= T){
            counter++;
        }else{
            break;
        }
    }
    cout<<counter;
return 0;
}
