#include <iostream>
using namespace std;

int main(){
    string input;
    cin>>input;
    for(int i=0; i<input.length(); i++){
        if(input[i] == ':' && input[i+1] == ')' || input[i] == ';' && input[i+1] == ')'){
            cout<<i<<endl;
        }else if(input[i] == ':' && input[i+1] == '-' && input[i+2] == ')' || input[i] == ';' && input[i+1] == '-' && input[i+2] == ')'){
            cout<<i<<endl;
        }
    }
return 0;
}
