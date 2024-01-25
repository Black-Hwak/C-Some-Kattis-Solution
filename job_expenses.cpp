#include <iostream>
using namespace std;

int main(){
    int num, k,expense=0;
    cin>>num;
    int cost[num];
    for(int i=0; i<num; i++){
            cin>>k;
        cost[i] = k;
    }
    for(int i=0;i<num; i++){
        if(cost[i] <0){
            expense += cost[i];
        }
    }

    if(expense == 0){
        cout<<0;
    }else{
        cout<<-expense;
    }

return 0;
}
