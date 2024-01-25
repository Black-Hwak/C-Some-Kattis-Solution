
#include <iostream>
using namespace std;

int main(){
    int room, team,sible, insible, remain;
    cin>>room;
    cin>>team;
    sible = team/room;
    insible = (team/room)+1;
    remain = (room*insible) - team;
    if(team%room == 0){
        for(int i=0; i<room; i++){
            for(int j=0; j<sible; j++){
                cout<<'*';
            }
            cout<<endl;
        }
    }else{
        for(int i=0;i<room-remain; i++){
            for(int j=0; j<insible; j++){
                cout<<'*';

            }
            cout<<endl;
        }
        for(int i=0; i<remain; i++){
                for(int j=0; j<insible-1; j++){
                    cout<<'*';
                }
                cout<<endl;
        }
    }
return 0;
}


