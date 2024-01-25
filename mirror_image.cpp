#include <iostream>
using namespace std;

int main(){
    int num,R,C;
    cin>>num;
    string nth;
    for(int i=0; i<num; i++){

        cin>>R>>C;
        string sth[R], reverse1[R];
        for(int j=0; j<R; j++){
            cin>>sth[j];
        }
        for(int k=R-1; k>=0; k--){
            reverse1[k] = sth[k];

        }
         cout<<"Test "<<i+1<<endl;
        for(int l=R-1; l>=0; l--){
              nth = reverse1[l];
              for(int m=nth.length()-1; m>=0; m--){
                cout<<nth[m];
              }
              cout<<endl;
        }
    }
return 0;
}
