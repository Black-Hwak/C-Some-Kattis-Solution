
#include <iostream>
using namespace std;

int main(){
    int room, team,sible, insible, remain, counter=0;
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
        for(int i=0;i<room; i++){
            for(int j=0; j<insible; j++){
                cout<<'*';
                counter++;
                if(counter >=team){
                    break;
                }
            }
            cout<<endl;
        }
    }
return 0;
}

