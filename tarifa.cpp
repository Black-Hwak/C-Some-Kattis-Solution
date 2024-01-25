#include <iostream>
using namespace std;

int main(){
    int megabite, num_month, num, total=0;
    cin>>megabite;
    cin>>num_month;
    for(int i=0; i<num_month; i++){
        cin>>num;
        total += megabite - num;
    }
    cout<<total+megabite;
return 0;
}
