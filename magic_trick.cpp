#include <iostream>
using namespace std;

int main(){
    string input;
    int counter=0;
    cin>>input;
    for(int i=0; i<input.length(); i++){
        for(int j=i+1; j<input.length(); j++){
            if(input[i] == input[j]){
                counter++;
            }
        }
    }
    if(counter > 0){
        cout<<0;
    }else{
        cout<<1;
    }

return 0;
}
