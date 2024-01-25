#include <iostream>
using namespace std;

int main(){
    int num, temp, counter =0;
    cin>>num;
    for(int i=0; i<num; i++){
        cin>>temp;
        if(temp < 0){
            counter++;
        }
    }
    cout<<counter;
return 0;
}
