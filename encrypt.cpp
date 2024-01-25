#include <iostream>
using namespace std;

int main(){
    string a_z="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string input;
    cin>>input;
    int key;
    cin>>key;
    for(int i=0; i<input.length(); i++){
        for(int j=0; j<a_z.length(); j++){
            if(input[i] == a_z[j]){
                cout<<a_z[j+key];
            }
        }
        for(int k=26; k>a_z.length()-key; k--){
                if(input[i] == a_z[k]){
                    cout<<a_z[k-key];
                }
        }
    }
     cout<<endl<<input;

 return 0;
}
