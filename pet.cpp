#include <iostream>
using namespace std;

int main(){
    int g1,g2,g3,g4, total, store_total =0, valuen;
    for(int i=1; i<=5; i++){
        cin>>g1>>g2>>g3>>g4;
        total = g1+g2+g3+g4;

        if(total > store_total){
            valuen = i;
            store_total = total;
        }
    }

cout<<valuen<<" "<<store_total<<endl;
return 0;
}
