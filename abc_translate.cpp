#include <iostream>
#include <string>
using namespace std;

int main(){
    /*string z;
    getline(cin, z);
    for(int i=0; i<z.length(); i++){
        if(z[i] == 'a' || z[i] == 'A') cout<<"@";
        else if(z[i] == 'b' || z[i] == 'B') cout<<"8";
        else if(z[i] == 'c' || z[i] == 'C') cout<<"(";
        else if(z[i] == 'd' || z[i] == 'D') cout<<"|)";
        else if(z[i] == 'e' || z[i] == 'E') cout<<"3";
        else if(z[i] == 'f' || z[i] == 'F') cout<<"#";
        else if(z[i] == 'g' || z[i] == 'G') cout<<"6";
        else if(z[i] == 'h' || z[i] == 'H') cout<<"[-]";
        else if(z[i] == 'i' || z[i] == 'I') cout<<"|";
        else if(z[i] == 'j' || z[i] == 'J') cout<<"_|";
        else if(z[i] == 'k' || z[i] == 'K') cout<<"|<";
        else if(z[i] == 'l' || z[i] == 'L') cout<<"1";
        else if(z[i] == 'm' || z[i] == 'M') cout<<"[]\\[]";
        else if(z[i] == 'n' || z[i] == 'N') cout<<"[]//[]";
        else if(z[i] == 'o' || z[i] == 'O') cout<<"0";
        else if(z[i] == 'p' || z[i] == 'P') cout<<"|D";
        else if(z[i] == 'q' || z[i] == 'Q') cout<<"(,)";
        else if(z[i] == 'r' || z[i] == 'R') cout<<"|Z";
        else if(z[i] == 's' || z[i] == 'S') cout<<"$";
        else if(z[i] == 't' || z[i] == 'T') cout<<"']['";
        else if(z[i] == 'u' || z[i] == 'U') cout<<"|_|";
        else if(z[i] == 'v' || z[i] == 'V') cout<<"\\/";
        else if(z[i] == 'w' || z[i] == 'W') cout<<"\\/\\/";
        else if(z[i] == 'x' || z[i] == 'X') cout<<"}{";
        else if(z[i] == 'y' || z[i] == 'Y') cout<<"`/";
        else if(z[i] == 'z' || z[i] == 'Z') cout<<"2";
        else if(z[i] == ' ') cout<<" ";
        else if(z[i] == '?') cout<<"?";
        else if(z[i] == '!') cout<<"!";
        else cout<<z[i];

    }*/
    string special_char[] = {"@","8", "(","|)","3","#","6","[-]","|","_|","|<","1","[]\\/[]","[]\[]","0","|D","(,)","|Z","$","']['","|_|","\\/","\\/\\/","}{","`/","2"," ","\?","\.","\!","\,"};
    string a_z= "abcdefghijklmnopqrstuvwxyz ?.!,";

    string inp;
    getline(cin, inp);
    for (int i=0 ; i<inp.length(); i++){
        for(int j=0; j<a_z.length(); j++){
            if(inp[i] == a_z[j]){
                cout<<special_char[j];
            }
        }
    }
return 0;

}
