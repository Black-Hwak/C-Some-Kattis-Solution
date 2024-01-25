#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int  num;
    float area,w,l,result=0;
    cin>>area>>num;
    for(int i=0; i<num; i++){
        cin>>w>>l;
        result += w*l*area;
    }
    cout<<setprecision(10)<<result;
return 0;
}
