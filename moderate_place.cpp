#include <iostream>
using namespace std;

int main(){
    int num, input,total=0,result=50;
    cin>>num;
    int res[num];
    for(int j=0; j<3;j++){
        for(int i=0; i<num; i++){
             cin>>input;
             res[i] = input;
             total+= input;
        }
        if(total<result){
            result = total;
        }
        total =0;


}
    for(int i=0; i<num; i++){
            cout<<res[i]<<" ";
        }

return 0;
}
