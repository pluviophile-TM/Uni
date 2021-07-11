
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a>b)
        swap(a,b);
    if(a>c)
        swap(a,c);
    if(a>d)
        swap(a,d);
    if(b>c)
        swap(b,c);
    if(b>d)
        swap(b,d);
    if(c>d)
        swap(c,d);
    cout<<a<<" "<<b<<" "<<c<<" "<<d;
}
