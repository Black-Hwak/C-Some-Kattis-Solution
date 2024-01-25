#include <iostream>
using namespace std;

int main(){
    int input, number,digit[10], total=0;
    cin>>input;
    number = input;
    for(int i=0; i<10; i++){
        digit[i] = number%10;
        number = number/10;
    }

    for(int j=0; j<10; j++){
        total += digit[j];
    }
    while(input%total != 0){
        input++;
        number++;
        for(int i=0; i<10; i++){
            digit[i] = number%10;
            number = number/10;
        }

        for(int k=9; k>=0; k--){
            digit [k] = digit[k];
            total += digit[k];
    }

    }
    if(input%total == 0){

        cout<<input<<endl;
    }

return 0;
}
