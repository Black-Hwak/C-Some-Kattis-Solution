#include <iostream>
using namespace std;

int main(){
    string input;
    int counter=0;
    for(int i=1; i<=5; i++){
        cin>>input;
        for(int j=0; j<input.length(); j++){
            if(input[j] == 'F'){
                if(input[j+1] == 'B'){
                    if(input[j+2] == 'I'){
                        cout<<i<<endl;
                        counter++;
                    }
                }
            }
        }
    }
    if(counter==0){
        cout<<"HE GOT AWAY!";
    }
return 0;
}
