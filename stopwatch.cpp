#include <iostream>
using namespace std;

int main(){
    int num, input,result=0;
    cin>>num;
    for(int i=0;i<num; i++){
        cin>>input;
        result -= input;
        result *= -1;
    }
    if(num%2==0){
        cout<<result;
    }else{
        cout<<"still running";
    }
return 0;
}
