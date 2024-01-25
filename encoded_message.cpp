#include <iostream>
using namespace std;

int main(){
    int num,val;
    string input, in[50];
    cin>>num;
    for(int i=0; i<num; i++){
        cin>>input;
        for(int i=0; i<input.length(); i++){
        in[i] =input[i];
        }
        if(input.length()%5 ==0){
            val = 5;
            cout<<in[val-1]<<in[val+4]<<in[val+9]<<in[val+14]<<in[val+19]<<in[val+24];
            cout<<in[val-2]<<in[val+3]<<in[val+8]<<in[val+13]<<in[val+18]<<in[val+23];
            cout<<in[val-3]<<in[val+2]<<in[val+7]<<in[val+12]<<in[val+17]<<in[val+22];
            cout<<in[val-4]<<in[val+1]<<in[val+6]<<in[val+11]<<in[val+16]<<in[val+21];
            cout<<in[val-5]<<in[val]<<in[val+5]<<in[val+10]<<in[val+15]<<in[val+20]<<endl;
        }else if(input.length()%4==0){
            val = 4;
            cout<<in[val-1]<<in[val+3]<<in[val+7]<<in[val+11];
            cout<<in[val-2]<<in[val+2]<<in[val+6]<<in[val+10];
            cout<<in[val-3]<<in[val+1]<<in[val+5]<<in[val+9];
            cout<<in[val-4]<<in[val]<<in[val+4]<<in[val+8]<<endl;
        }
        else if(input.length()%3==0){
            val = 3;
            cout<<in[val-1]<<in[val+2]<<in[val+5];
            cout<<in[val-2]<<in[val+1]<<in[val+4];
            cout<<in[val-3]<<in[val]<<in[val+3]<<endl;
        }
        else if(input.length()%2==0){
            val = 2;
            cout<<in[val-1]<<in[val+1];
            cout<<in[val-2]<<in[val]<<endl;

        }
    }

return 0;
}
