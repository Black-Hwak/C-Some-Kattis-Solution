#include <iostream>'
using namespace std;

int main(){
    int input,num=10,remainder,bina,in_arr[20], in_arr_reverse[20];
    bool truth = true;
    cin>>input;
    while(num>0){


            remainder = input/2;
            val= remainder;

            cout<<remainder<<endl;
            bina = input%2;
            cout<<bina<<endl;
            int i=0;
            in_arr[i] = bina;
            cout<<in_arr[i]<<endl;
            i++;


        if(remainder == 1){
            break;
        }
        num--;

    }
return 0;
}
