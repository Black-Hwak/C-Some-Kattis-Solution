#include <iostream>
using namespace std;

int main(){
    string a="python";
    cout<<"Memory of a : "<<&a<<" and value is "<<a<<endl;
    string b="java";
    cout<<"Memory of b : "<<&b<<" and value is "<<b<<endl;
    string c="";
    cout<<&c<<endl;
    string* ptrc=&c;

    string* ptra=&a;

    string* ptrb=&b;

    ptrc=ptra;
    ptra=ptrb;
    ptrb=ptrc;

    cout<<"Memory of a : "<<ptra<<" and value is "<<*ptra<<endl;
    cout<<"Memory of b : "<<ptrb<<" and value is "<<*ptrb<<endl;

    int arr[3]={1,2,3};
    cout<<&arr[0]<<endl;
    cout<<&arr[1]<<endl;
    cout<<&arr[2]<<endl;


return 0;
}
