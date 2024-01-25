#include <iostream>
#include <iomanip>
using namespace std;

int main(){
int num,input;
double sum=0,counter=0;
cin>>num;
    for(int i=0; i<num; i++){
        cin>>input;
        if(input>=0){
            sum+=input;
            counter++;
        }
    }
    cout<<setprecision(10)<<sum/counter;
return 0;
}
