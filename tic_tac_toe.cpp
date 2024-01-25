#include <iostream>
using namespace std;

int main(){
    int one,two, counter, k=0,j=0 ;
    int arr2[9];
    int arr3[9] ={};
    for(int m=0; m<3; m++){
        for(int n=0; n<3; n++){
            cout<<" - ";
        }
        cout<<endl;
    }

    cout<<" 1  2  3 "<<endl<<" 4  5  6 "<<endl<<" 7  8  9 "<<endl;
    for(int i=0; i<9; i++) {
        counter = 1;
        int arr1[9]= {};
        if(counter == 1) {

            cout<<"For player 1 : ";
            cin>>arr1[k];
            arr3[k] = arr1[k];
            k++;
            counter = 0;

            for(int x=0; x<sizeof(arr3)/sizeof(arr3[0]); x++){
                    if(arr3[x] == 1){
                    cout<<" O  -  - "<<endl<<" -  -  - "<<endl<<" -  -  - "<<endl;
                    }if(arr3[x] == 2){
                    cout<<" -  O  - "<<endl<<" -  -  - "<<endl<<" -  -  - "<<endl;
                    }if(arr3[x] == 3){
                    cout<<" -  -  O "<<endl<<" -  -  - "<<endl<<" -  -  - "<<endl;
                    }if(arr3[x] == 4){
                    cout<<" -  -  - "<<endl<<" O  -  - "<<endl<<" -  -  - "<<endl;
                    }if(arr3[x] == 5){
                    cout<<" -  -  - "<<endl<<" -  O  - "<<endl<<" -  -  - "<<endl;
                    }if(arr3[x] == 6){
                    cout<<" -  -  - "<<endl<<" -  -  O "<<endl<<" -  -  - "<<endl;
                    }if(arr3[x] == 7){
                    cout<<" -  -  - "<<endl<<" -  -  - "<<endl<<" O  -  - "<<endl;
                    }if(arr3[x] == 8){
                    cout<<" -  -  - "<<endl<<" -  -  - "<<endl<<" -  O  - "<<endl;
                    }if(arr3[x] == 9){
                    cout<<" -  -  - "<<endl<<" -  -  - "<<endl<<" -  -  O "<<endl;
				}
}
        }


        if(counter == 0) {
				cout<<"For player 2 : ";
				cin>>two;
				arr2[j] = two;
				cout<<arr2[j];
				j++;

				counter = 1;
			}

		}


return 0;
}
