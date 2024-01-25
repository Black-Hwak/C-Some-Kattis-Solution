#include <iostream>
using namespace std;

int main(){
    string input;
    bool truth;
    cin>>input;
    for(int i=0; i<input.length(); i++){
        if(input[i] == 's'){
            if(input[i+1] == 's'){
                truth = true;
                break;
            }
        }else{
            truth = false;
        }
    }
    if(truth == true){
        cout<<"hiss";
    }else{
        cout<<"no hiss";
    }
return 0;
}
