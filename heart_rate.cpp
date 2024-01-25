#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int num;
    double b,p,ans,avg, maxi, mini;
    cin>>num;
    for(int i=0; i<num; i++){
        cin>>b>>p;
        ans = (60*b)/p;
        avg = 60/p;
        mini = ans-avg;
        maxi = ans+avg;
        cout<<setprecision(6);
        cout<<mini<<" "<<ans<<" "<<maxi<<endl;
    }
return 0;
}
