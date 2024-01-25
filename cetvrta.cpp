#include <iostream>
using namespace std;

int main(){
    int a[3],b[3];
    for(int i=0; i<3; i++){
        cin>>a[i]>>b[i];
    }
    for(int i=0; i<1; i++){
       if(a[i] ==  a[i+1]){
            cout<<a[i+2]<<" ";
       }else if(a[i] != a[i+1]){
            if(a[i] != a[i+2]){
                cout<<a[i]<<" ";
            }else{
                cout<<a[i+1]<<" ";
            }
       }
       if(b[i] ==  b[i+1]){
            cout<<b[i+2];
       }else if(b[i] != b[i+1]){
            if(b[i] != b[i+2]){
                cout<<b[i]<<" ";
            }else{
                cout<<b[i+1]<<" ";
            }
       }
    }

    return 0;
}
