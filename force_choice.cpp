#include <iostream>
using namespace std;

int main(){
   int N,P,S, m,chosen[1000];
   bool truth;
   cin>>N>>P>>S;
   for(int i=0; i<S; i++){
        cin>>m;
        for(int j=0; j<m; j++){
            cin>>chosen[j];
        }
        for(int k=0; k<m; k++){
            if(chosen[k] == P){
                truth = true;
                break;
            }else{
                truth = false;
            }

        }
        if(truth==true){
            cout<<"KEEP"<<endl;
        }else{
            cout<<"REMOVE"<<endl;
        }


   }
return 0;
}
