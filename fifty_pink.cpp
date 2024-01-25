#include <iostream>
#include <string>
using namespace std;

int main(){
    int num, counter=0;
    cin>>num;
    string color;
    for(int i=0; i<num; i++){
        cin>>color;
        for(int j=0; j<color.length(); j++){
            if(color[j] == 'P' || color[j] == 'p'){
                 if(color[j+1] == 'I' || color[j+1] == 'i'){
                    if(color[j+2] == 'N' || color[j+2] == 'n'){
                         if(color[j+3] == 'K' || color[j+3] == 'k'){
                            counter = counter + 1;
                            if(color[j] == 'P' || color[j] == 'p'){
                                if(color[j+1] == 'I' || color[j+1] == 'i'){
                                    if(color[j+2] == 'N' || color[j+2] == 'n'){
                                        if(color[j+3] == 'K' || color[j+3] == 'k'){
                                            break;
                        }
                    }
                }
            }
                        }
                    }
                }
            }
             if(color[j] == 'R' || color[j] == 'r'){
                 if(color[j+1] == 'O' || color[j+1] == 'o'){
                    if(color[j+2] == 'S' || color[j+2] == 's'){
                         if(color[j+3] == 'E' || color[j+3] == 'e'){
                            counter = counter + 1;
                            if(color[j] == 'R' || color[j] == 'r'){
                                if(color[j+1] == 'O' || color[j+1] == 'o'){
                                    if(color[j+2] == 'S' || color[j+2] == 's'){
                                        if(color[j+3] == 'E' || color[j+3] == 'e'){
                                            break;
                        }
                    }
                }
            }
                        }
                    }
                }
            }

        }
    }
    if(counter>0){
        cout<<counter;
    }else{
        cout<<"I must watch Star Wars with my daughter";
    }


return 0;
}

