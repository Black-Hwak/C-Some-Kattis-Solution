#include <iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    bool truth;
    int first[num], sec[num-1], ans[6];
    for(int i=0; i<num; i++){
        cin>>first[i];
    }
    for(int j=0; j<num-1; j++){
        cin>>sec[j];
    }
    for(int k=0; k<num; k++){
            truth = false;
        for(int j=0; j<num-1; j++){
            if(first[k] == sec[j]){
                truth = true;
                break;
            }
            }
        if(truth == false){
        cout<<first[k];
    }
        }




return 0;
}
