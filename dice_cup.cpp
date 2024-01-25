#include <iostream>
using namespace std;

int main(){
    int N, M , small_num, large_num, result=0;
    cin>>N>>M;
    if(N>M){
        large_num = N;
        small_num = M;
    }else if(N<M){
        small_num = N;
        large_num = M;
    }else if(N == M){
        large_num = N;
        small_num = M;
    }
    for(int i=small_num+1; i<=large_num+1; i++){
        cout<<i<<endl;
    }

return 0;
}
