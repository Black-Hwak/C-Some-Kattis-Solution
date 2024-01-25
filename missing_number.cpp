#include <iostream>
using namespace std;

int main(){
    int num, last_num,counter=0, correct_counter =0;
    cin>>num;
    int ans[num];
    for(int i=0; i<num; i++){
        cin>>ans[i];
    }
    last_num = ans[num-1];
    int correct[last_num];

    for(int j=0; j<last_num; j++){
        correct[j] = j+1;
    }
    for(int j=0; j<last_num; j++){
        for(int i=0; i<num; i++){
            if(correct[j] != ans[i]){
                counter++;
            }
        }
        if(counter==num){
            cout<<correct[j]<<endl;
        }
        counter=0;
    }

    for(int k=0; k<num;k++){
        if(ans[k] == correct[k]){
            correct_counter++;
        }
    }
    if(correct_counter == last_num){
        cout<<"good job";
    }
return 0;
}
