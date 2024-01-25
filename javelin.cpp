#include <iostream>
using namespace std;

int main(){
    int input, len,total_len=0;
    cin>>input;
    for(int i=0; i<input; i++){
        cin>>len;
        total_len += len;
    }
    cout<<total_len-input+1;
return 0;
}
