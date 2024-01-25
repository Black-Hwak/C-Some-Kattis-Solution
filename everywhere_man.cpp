#include <iostream>
using namespace std;

int main(){
    int T,n, counter =0, result;

    cin>>T;
    for(int i=0; i<T; i++){
        cin>>n;
        string cities[n];
        for(int j=0; j<n; j++){
            cin>>cities[j];
        }
        for(int k=0; k<n; k++){
            for(int l=k+1; l<n; l++){
                if(cities[k] == cities[l]){
                    counter++;
                    break;
                }
            }
        }
        result = n - counter;
        cout<<result<<endl;
        counter = 0;

    }


return 0;
}
