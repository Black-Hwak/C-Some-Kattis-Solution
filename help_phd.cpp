#include <iostream>
#include <sstream>
using namespace std;

int main(){
    int num,x,y;
    string sign,a,b;
    cin>>num;
    for(int i=0; i<num; i++){
        cin>>sign;
        if(sign[1] == '+'){
        a=sign[0];
        b=sign[2];
        x=stoi(a);
        y=stoi(b);
        cout<<x+y<<endl;
        }else{
            cout<<"skipped"<<endl;
        }

    }
return 0;
}
