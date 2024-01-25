#include <iostream>
using namespace std;

int main(){
    int input,a,b,c,d,e,f,g,x,y,z,p,q,result1,result2,result3, result4,result5;
    cin>>input;
    a=input/100;
    b=input%100/10;
    c=input%10;
    if(a==0){
        a=1;
    }if(b==0){
        b=1;
    }if(c==0){
        c=1;
    }
    result1 = a*b*c;

    x=result1/100;
    y=result1%100/10;
    z=result1%10;
    if(x==0){
        x=1;
    }if(y==0){
        y=1;
    }if(z==0){
        z=1;
    }
    result2 = x*y*z;

    d=result2/10;
    e=result2%10;
    if(d==0){
        d=1;
    }if(e==0){
        e=1;
    }
    result3= d*e;

    f=result3/10;
    g=result3%10;
    if(f==0){
        f=1;
    }if(g==0){
        g=1;
    }
    result4= f*g;

    p=result4/10;
    q=result4%10;
    if(p==0){
        p=1;
    }if(q==0){
        q=1;
    }
    result5= p*q;
    cout<<result5;

return 0;
}
