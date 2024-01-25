#include <iostream>
using namespace std;

int main(){
    int N,K,O, total=0;
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>K;
        for(int j=0; j<K; j++){
            cin>>O;
            total+=O;
        }
        total = (total - K) + 1;
        cout<<total<<endl;
        total = 0;
    }
return 0;
}
