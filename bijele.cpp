#include <iostream>
using namespace std;

int main(){
    int king=1,queen=1,rook=2,bishop=2,knight=2,pawn=8;
    int k,q,r,b,kn,p;
    cin>>k>>q>>r>>b>>kn>>p;
    cout<<king-k<<" "<<queen-q<<" "<<rook-r<<" "<<bishop-b<<" "<<knight-kn<<" "<<pawn-p;
    return 0;
}
