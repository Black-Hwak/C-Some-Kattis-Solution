#include <iostream>
using namespace std;

int main(){
    int P, days,N, n;
    cin>>P;
    for(int i=1; i<=P; i++){
        cin>>days;
        cin>>N;
        n = ((N + 2) * (N + 1)) /2 - 1;
        cout<<days<<" "<<n<<endl;
}
return 0;
}
