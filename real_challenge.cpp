#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    int input;
    long double sqroot;
    cin>>input;
    sqroot = sqrt(input);
    cout<<setprecision(15)<<sqroot * 4;
return 0;
}

