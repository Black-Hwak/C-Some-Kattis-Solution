#include <iostream>
using namespace std;

int main(){
    int arr[10];
    int test;
    int r=0;
    cout<<"Enter number : ";
    cin>>arr[0];
    for(int i=1; i<10; i++) {
        cout<<"Enter number : ";
        cin>>test;
        for(int j=0; j<10; j++){
            if(test != arr[j]){
                r++;
           }else{
                cout<<"cannot"<<endl;
            }
        } test = arr[i];
    }
return 0;
}
