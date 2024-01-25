#include <iostream>
using namespace std;

int main(){
 int num,guest, diff,counter=0;
 cin>>num;
 for(int i=0; i<num; i++){
    cin>>guest;
    int num_guest[guest];
    for(int j=0; j<guest;j++){
        cin>>num_guest[j];
    }
    for(int k=0; k<guest; k++){
        for(int m=k+1; m<guest; m++){
            if(num_guest[k] == num_guest[m]){
                break;
            }else{
                diff = num_guest[k];
                cout<<diff<<endl;
                counter = 0;
            }
        }
    }

     for(int k=1;k<=num; k++){
        cout<<"Case #"<<k<<": "<<diff<<endl;
    }

 }

return 0;
}
