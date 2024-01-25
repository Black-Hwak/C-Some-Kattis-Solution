#include <iostream>
using namespace std;
int main(){
    int n, result=0;
    cin >> n;
    int input;
    int Ans=0;

    for(int i=0;i<n;i++){
    cin >> input ;
    int NN=input/10;
    int NP=input%10;
            if(NP == 1){
                Ans = NN*1;
            }else if(NP == 2){
                Ans = NN * NN;
            }else if(NP == 3){
                Ans = NN* NN * NN;
            }else if(NP == 4){
                Ans = NN* NN * NN * NN;
            }else if(NP == 5){
                Ans = NN* NN * NN * NN * NN;
            }else if(NP == 6){
                Ans = NN* NN * NN * NN * NN * NN;
            }else if(NP == 7){
                Ans = NN* NN * NN * NN * NN * NN * NN;
            }else if(NP == 8){
                Ans = NN* NN * NN * NN * NN * NN * NN * NN;
            }else if(NP == 9){
                Ans = NN* NN * NN * NN * NN * NN * NN * NN * NN;
            }else if(NP == 0){
                Ans = NN * 0;
            }

        result = result + Ans;

    }
    cout << result;

return 0;
}

