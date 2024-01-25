#include <iostream>
using namespace std;

int main(){
    int c,d,e,f,g,h,i,j;
    int a[2][2] ={{c,d},{e,f}};
    int b[2][2] ={{g,h},{i,j}};

    cin>>a[0][0];

    cin>>a[0][1];

    cin>>a[1][0];

    cin>>a[1][1];
    cout<<"["<<a[0][0]<<" "<<a[0][1]<<"]"<<endl;
    cout<<"["<<a[1][0]<<" "<<a[1][1]<<"]"<<endl;
    cin>>b[0][0];

    cin>>b[0][1];

    cin>>b[1][0];

    cin>>b[1][1];
    cout<<"["<<b[0][0]<<" "<<b[0][1]<<"]"<<endl;
    cout<<"["<<b[1][0]<<" "<<b[1][1]<<"]"<<endl;
    cout<<endl;

    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout << a[i][j] << " ";
        }
        cout << "  +  ";
                for(int j=0; j<2; j++){
            cout << b[i][j] << " ";
        }
        cout << "  =  ";
                for(int j=0; j<2; j++){
            cout << a[i][j] + b[i][j] << " ";
        }
        cout << endl;
             /*cout<<a[i][j]<<endl;
             cout<<b[i][j]<<endl;*/
            //cout<<"["<<a[i][j]<<" + "<<b[i][j]<<"] : "<<a[i][j] + b[i][j]<<endl;
           // cout<<"["<<a[0][0]<<" "<<a[0][1]<<"]";
            //cout<<" + "<<"["<<b[0][0]<<" "<<b[0][1]<<"]"<<" = ";
           // cout<<"["<<a[i][j] + b[i][j]<<" "<<a[i][j] + b[i][j] <<"]"<<endl;
            //cout<<"["<<a[1][0]<<" "<<a[1][1]<<"]";
            //cout<<"   ";
            //cout<<"["<<b[1][0]<<" "<<b[1][1]<<"]";
            //cout<<"   ";
            //cout<<"["<<a[i][j] + b[i][j]<<" "<<a[i][j] + b[i][j] <<"]"<<endl;
            /*cout<<" = ";
            a[i][j] + b[i][j];
            cout<<"["<<a[i][j]<<" "<<a[i][j]<<"]";
            cout<<"["<<b[1][0]<<" "<<b[1][1]<<"]"<<endl;*/

    }

    return 0;
}
