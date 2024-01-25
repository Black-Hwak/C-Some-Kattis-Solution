#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double input,res1;
    cin>>input;
    cout<<setprecision(10)<<100/input<<endl;
    res1= 100-input;
    cout<<setprecision(10)<<100/res1;
return 0;
}
