#include <iostream>
using namespace std;

int main(){
    string input;
    char last_word;
    cin>>input;
    last_word = input[input.length()-1];
    if(last_word == 'A'){
        cout<<2;
    }else if(last_word == 'B'){
        cout<<3;
    }else{
        cout<<1;
    }
return 0;
}
