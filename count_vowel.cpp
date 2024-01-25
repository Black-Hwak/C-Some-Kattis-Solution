#include <iostream>
using namespace std;

int main(){
    string input;
    string vowel = "aeiouAEIOU";
    int counter=0;
    getline(cin, input);
    for(int i=0; i<input.length(); i++){
        for(int j=0; j<vowel.length(); j++){
            if(input[i] == vowel[j]){
                counter++;
            }
        }
    }
    cout<<counter;
return 0;
}
