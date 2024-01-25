#include <iostream>
using namespace std;

int main(){
    /*int input;
    int arr[10] ={};
    for(int i=0; i<10; i++){
        cout<<"Enter any number to array : ";
        cin>>input;
        arr[i] = input;
    }

    for(int j=9; j>=0; j--){
        cout<<"Array Number "<<arr[j]<<endl;
    }

    for(int i=0; i<10; i++){
         if(arr[0] < arr[i]){
            arr[0] = arr[i];
            cout<<"The largest number is "<<arr[i]<<endl;
        }
    }

    int total=0, multiply=1;
    for(int i=0; i<10; i++){r
        total += arr[i];
        multiply *= arr[i];
    }

    cout<<total<<endl;
    cout<<multiply<<endl;

    int r=0;
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            if(arr[i] == arr[j]){
                r++;
                if(r>0){
                    cout<<"repeated number : "<<r<<endl;
                }
            }

        }

    }*/

    int arr[] = {12,23,34,45,56,3,78,3,56,67};
    int arr_length = sizeof(arr)/sizeof(arr[0]);
    int largest_num = arr[0];
    for(int i=0; i<arr_length; i++){
        if(largest_num < arr[i]){
            largest_num = arr[i];
            cout<<" : "<<largest_num<<endl;
        }
    }
    cout<<"Largest Number : "<<largest_num<<endl;

    for(int i=0; i<arr_length; i++){
        for(int j=i+1; j<arr_length; j++){
            if(arr[i] == arr[j]){
                cout<<arr[j]<<endl;
            }
        }
    }



return 0;
}
