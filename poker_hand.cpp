#include <iostream>
using namespace std;

int main(){
    string input;
    char a1,a2,result;
    int counter =0,counting1=0, counting2=0;
    getline(cin,input);

    for(int i=0; i<input.length(); i=i+3){
            for(int j=i+3; j<input.length(); j=j+3){
                if(input[i] == input[j]){
                    a1 = input[i];
                    counting1++;
        }else if(input[i] != input[j]){
            a2 = input[i+3];
            counting2++;
        }
            }


    }
    if(counting1>counting2){
        result = a1;
    }else{
        result = a2;
    }

        for(int j=0; j<input.length(); j=j+3){
            if(a1 == input[j]){
                counter++;
            }
        }

    if(counter == 0){
        cout<<1;
    }else{
        cout<<counter;
    }
return 0;
}
