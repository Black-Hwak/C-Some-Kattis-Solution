#include <iostream>
using namespace std;

int main(){
    int num,a,b,c;
    cin>>num;
    for(int i=0; i<num; i++){
        cin>>a>>b>>c;
        if(a+b==c){
            cout<<"Possible"<<endl;
        }else if(a-b ==c){
            cout<<"Possible"<<endl;
        }else if(b-a ==c){
            cout<<"Possible"<<endl;
        }else if(a*b ==c){
            cout<<"Possible"<<endl;
        }else if(a/b ==c && a%b == 0){
            cout<<"Possible"<<endl;
        }else if(b/a ==c && b%a == 0){
            cout<<"Possible"<<endl;
        }else{
            cout<<"Impossible"<<endl;
        }
    }
return 0;
}
