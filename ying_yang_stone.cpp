#include <iostream>
using namespace std;

int main(){
    string input;
    char a,c;
    int b;
    cin>>input;
    a = input[0];
    c = input[1];
    b = input.length();
    if(a != input[b-1]){
        if(c != input[b-2]){
            cout<<1;
        }
    }else{
        cout<<0;
    }



return 0;
}
