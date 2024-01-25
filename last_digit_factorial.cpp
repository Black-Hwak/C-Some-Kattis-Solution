#include <iostream>
using namespace std;

int main(){
    int num, input, total=1,result;
    cin>>num;
    for(int i=0; i<num; i++){
        cin>>input;
        for(int j=1; j<=input; j++){
            total =  j* total;
        }
        result = total%10;
        total = 1;
        cout<<result<<endl;
    }
return 0;
}
