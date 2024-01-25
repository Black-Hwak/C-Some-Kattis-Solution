#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int in1,in2,a,b,c,d,e,f,g,h,i,j,k,l, total=0;
    int origin_arr[10] ={4,3,2,7,6,5,4,3,2,1};
    int new_arr[10] ={};
    cin>>in1>>in2;
    //setw(10),setfill('0');

    // For in1;
    int in11 = in1;

    a = in11/100000;
    new_arr[0] = a;

    b = in11%100000/10000;
    new_arr[1] = b;

    c = in11%10000/1000;
    new_arr[2] = c;

    d = in11%1000/100;
    new_arr[3] = d;

    e = in11%100/10;
    new_arr[4] = e;

    f = in11%10;
    new_arr[5] = f;



    // For in2;
    int in22 = -in2;

    g = in22/1000;
    new_arr[6] = g;

    h = in22%1000/100;
    new_arr[7] = h;

    i = in22%100/10;
    new_arr[8] = i;

    j = in22%10;
    new_arr[9] = j;



    for(int i=0; i<10; i++){
        total = total + (origin_arr[i] * new_arr[i]);
    }
    if(total % 11 == 0 ){
        cout<<1;
    }else{
        cout<<0;
    }
    return 0;
}
