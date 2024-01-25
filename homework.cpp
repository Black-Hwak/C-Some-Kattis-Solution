#include <iostream>
using namespace std;

int main(){
    /*int input[] ={};
    int dash_value, semi_value, normal_value;
    int counter =0;
    for (int j=0;j<100; j++ ){
        cin>>input[j];
        if(input[j] == ';'){
            input[j+1];
        }
        cout<<input[j];
    }
    for(int i=0; i<sizeof(input)/sizeof(input[0]); i++){
        if(input[i] == '-'){
            dash_value = (input[i+1] - input[i-1]) + 1;
            cout<<dash_value<<endl;
        }
    }*/

    string input;
    cin>>input;
    int in = stoi(input);
    cout<<in<<endl;
return 0;
}
