#include <iostream>
using namespace std;

int main(){
    string input, one;
    string vowel = "aeiou";
    int counter =0;
    getline(cin, input);
    for(int i=0; i<input.length(); i++){
        for(int j=0; j<5; j++){
            if(input[i] == 'p' && input[i+1] == vowel[j]){
                counter++;
                cout<<input[i+2];
            }
        }
    }
    for(int i=0; i<input.length(); i++){
        if(counter>0){
            cout<<input[i];
        }else{
            cout<<input[i];
        }
    }
    /*for(int i=0; i<input.length(); i++){
        if(input[i] == 'p'){
            input[i] = input[i-1];
            one = input[i];
            cout<<one<<endl;
        }
    }*/
return 0;
}
