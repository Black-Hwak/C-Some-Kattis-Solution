#include <iostream>
using namespace std;

int main(){
    string in1,in2;
    int in1_length;
    cin>>in1>>in2;
    string vowel = "aiou";
    in1_length = in1.length();
    for(int i=0; i<4; i++){
        if(in1[in1_length -1] == vowel[i]){
            in1[in1_length -1] = 'e';
            //cout<<in1+"x"+in2;
            break;
        }
    }
    if(in1[in1_length -2] == 'e' && in1[in1_length -1] == 'x'){
            cout<<in1+in2;

    }else if(in1[in1_length -1] == 'e'){
            cout<<in1+"x"+in2;

        }
        else{
            cout<<in1+"ex"+in2;

        }

return 0;
}
