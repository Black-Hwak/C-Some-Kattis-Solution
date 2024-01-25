#include <iostream>
using namespace std;

int main(){
    int num;
    int total;
    int initial;
    cin>>num;
    for(int i=0; i<num+1; i++){
        string input;
        getline(cin, input);

            if(input[0] == 'S'){
                initial = 10;
                total = input.length() -10;

                for(int j=initial; j<=input.length(); j++){

            cout<<input[j];
            }
            }
}
return 0;
}
