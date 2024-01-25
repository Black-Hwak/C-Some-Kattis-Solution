#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double R,C;
    double result;

    cin>>R>>C;
    if(R==C){
        cout<<"0.000000";
    }else{
        result = ((R-C)/R )* ((R-C)/R )*100;
        cout<<setprecision(10)<<result;
    }


return 0;
}
