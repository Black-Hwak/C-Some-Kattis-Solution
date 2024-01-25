#include <iostream>
using namespace std;

int main(){
    string input;
    int counter=0, blah;
    getline(cin,input);
    string separate[input.length()] = {};
    bool truth;
    for(int i=0; i<input.length(); i++){
        separate[i] = input[i];
    }
    for(int i=0; i<sizeof(separate)/sizeof(separate[0]); i++){
        for(int j=i+1; j<sizeof(separate)/sizeof(separate[0]); j++){
                cout<<separate[j];
             if(separate[j] == " "){
                 cout<<separate[i]<<endl;
        cout<<separate[j]<<endl;
                if(separate[i] == separate[j+1]){
                    if(separate[i+1] == separate[j+2]){
                        truth = false;
                        break;
                    }else{
                        truth = true;
                    }
                }
            }
        }

    }
    /*blah = sizeof(separate)/sizeof(separate[0]) - counter;
    cout<<blah;
string separater[blah] = {};
cout<<separater[1];
    for(int j=0; j<blah; j++){
            for(int k=j+1; k<blah; k++){
                if(separater[j] == separater[k]){
                    if(separater[j+1] == separater[k+1]){
                        truth = false;
                        break;
                    }
                }
            }
        }*/
    if(truth == false){
        cout<<"no";
    }else{
        cout<<"yes";
    }

return 0;
}
