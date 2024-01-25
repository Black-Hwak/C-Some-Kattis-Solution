#include <iostream>
using namespace std;

int main(){
    int total_room, booked_room;
    cout<<"Enter your total room : ";
    cin>>total_room;
    string arr[total_room];
    for(int i=0; i<total_room; i++){
        arr[i] = "F";
    }
    for(int i=0; i<5; i++){
        cout<<"Enter booked number : ";
        cin>>booked_room;
            for(int j=0; j<total_room;j++){
                if(j==booked_room){
                arr[j] = "T";
        }
    }
}
    for(int i=1; i<100; i++){
        if(arr[i] == "F"){
            cout<<"Free Booking : "<<i<<endl;
            break;
    }
}
return 0;
}

