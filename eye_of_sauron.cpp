#include <iostream>
using namespace std;

int main(){
    string input;
    int means;
    cin>>input;
    if(input.length() %2 == 0){
        means = input.length()/2;
         if(input[means-1] == '(' && input[means] == ')'){
            cout<<"correct";
        }else{
            cout<<"fix";
        }

    }else{
        cout<<"fix";
    }
    return 0;
}
