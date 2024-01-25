#include <iostream>
using namespace std;

int main(){
    int G,T,N,w, per_val, result=0;
    cin>>G>>T>>N;
    per_val = G-T;;
    for(int i=0; i<N; i++){
        cin>>w;
        result += w;
    }
    cout<<(0.9*per_val) - result<<endl;
return 0;
}
