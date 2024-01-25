#include <iostream>
using namespace std;

int main(){
    int match_num, w,h,l, box_area;
    cin>>match_num>>w>>h;
    box_area = (w * w)+(h * h);
    for(int i=0; i<match_num; i++){
        cin>>l;
        if(l*l <= box_area){
            cout<<"DA"<<endl;
        }else{
            cout<<"NE"<<endl;
        }

    }
    return 0;
}
