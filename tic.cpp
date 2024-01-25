#include <iostream>
using namespace std;

int main(){
    int one,two, counter, k=0,j=0 ;
    int arr2[9], arr1[9];
    int arr3[3] = {};
    string corr = "123456789" ;
    for(int m=0; m<3; m++){
        for(int n=0; n<3; n++){
            cout<<" - ";
        }
        cout<<endl;
    }
    cout<<" 1  2  3 "<<endl<<" 4  5  6 "<<endl<<" 7  8  9 "<<endl;
		for(int i=0; i<9; i++) {

			counter = 1;
			if(counter == 1) {
				cout<<"For player 1 : ";
                cin>>arr1[k];
				arr3[k] = arr1[k];
				k++;
				counter = 0;
			}


            if(counter == 0) {
				cout<<"For player 2 : ";
				cin>>two;
				arr2[j] = two;
				j++;
				counter = 1;
			}

		}

		 for(int i=0; i<3; i++){
                for(int j=0; j<corr.length(); j++){
                    if(arr3[i] == corr[j] && arr3[i] == corr[j+1] && arr3[i] == corr[j+2] ){
                        cout<<"correct";
        }
            }
        }
return 0;
}

