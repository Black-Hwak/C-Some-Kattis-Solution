#include <iostream>
using namespace std;

int main(){
    int num, r,e,c, decision;
    cin>>num;
    for(int i=0; i<num; i++){
        cin>>r>>e>>c;
        decision = e -r;
        if(decision >  c){
            cout<<"advertise"<<endl;
        }else if(decision == c){
            cout<<"does not matter"<<endl;
        }else{
            cout<<"do not advertise"<<endl;
        }

    }
return 0;
}
