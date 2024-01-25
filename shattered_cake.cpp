#include <iostream>
using namespace std;

int main(){
    int W,N,w,l,L, total=0;
    cin>>W;
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>w>>l;
        total = total + (w * l);
    }
    L = total/W;
    cout<<L;
return 0;
}
