#include <iostream>
using namespace std;

int main(){
    string input;
    bool truth;
    getline(cin,input);
    for(int i=0; i<input.length(); i++){
        if(input[i] == 'e'){
            if(input[i+1] == 'h'){
                if(input[i+2] == '?'){
                    truth = true;
                    break;
                }else{
                    truth = false;
                }
            }
        }
    }
    if(truth==false){
        cout<<"Imposter!";
    }else{
         cout<<"Canadian!";
    }
return 0;
}
