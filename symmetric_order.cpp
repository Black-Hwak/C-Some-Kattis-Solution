#include <iostream>
using namespace std;

int main(){
    int num=1, counter=1;
    string words;
    while(num!=0){
        cin>>num;
        string words_arr[num];
        for(int i=0; i<num;i++){
            cin>>words;
            words_arr[i] = words;
        }
        if(num>0){
            cout<<"SET "<<counter<<endl;
        }
        for(int j=0; j<num; j=j+2){
            cout<<words_arr[j]<<endl;
        }
        if(num%2==0){
                for(int k=num-1; k>=1; k=k-2){
                cout<<words_arr[k]<<endl;
            }
        }else   {
                for(int k=num-2; k>=1; k=k-2){
                cout<<words_arr[k]<<endl;
        }

        }
    counter++;
    }
return 0;
}
