#include <iostream>
using namespace std;

int main(){
    int stop=0, num, total=1;
    while (stop!=-1){
        cin>>num;
        int s[num], t[num];
        for(int i=0; i<num; i++){
            cin>>s[i]>>t[i];
        }
        if(num>0){
            total = s[0]*t[0];
        for(int j=1; j<num; j++){
            total += (t[j] - t[j-1])* s[j];
        }
        cout<<total<<" miles"<<endl;
        if(total>0){
            total = 1;
        }
        }else{
            break;
        }

    }
return 0;
}
