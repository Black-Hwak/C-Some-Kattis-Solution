#include <iostream>
using namespace std;

int main(){
    int num_contest,prize, total=0;
    cin>>num_contest;
    for(int i=0; i<num_contest; i++){
        cin>>prize;
        total += prize;
    }
    if(total%num_contest ==0){
        cout<<"yes";
    }else{
        cout<<"no";
    }
return 0;
}
