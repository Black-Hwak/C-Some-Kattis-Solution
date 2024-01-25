#include <iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    int input[num], multi[9];
    for(int i=0; i<num; i++){
        cin>>input[i];
    }
    int res=0, lth;
    for(int j=1; j<10; j++){
        multi[j] = input[res] * j;
    }
    for(int k=0; k<9; k++){
            for(int l=1; l<num; l++){
                if(multi[k] == input[l]){
                    cout<<multi[k]<<endl;
                    res = input[l+1];
                    cout<<70<<endl;
                }
            }
    }



return 0;
}
