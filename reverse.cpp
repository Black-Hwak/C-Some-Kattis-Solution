#include <iostream>
using namespace std;

int main(){
    int num, input;
    cin>>num;
    int listy[num];
    for(int i=0; i<num; i++){
        cin>>input;
        listy[i] = input;
    }
    for(int j=num-1; j>=0; j--){
        cout<<listy[j]<<endl;
    }
return 0;
}
