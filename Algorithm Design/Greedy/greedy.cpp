#include<bits/stdc++.h>
using namespace std;

const int N=100*1000;
vector<pair<int,int>>v;

int a[N],b[N];

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        v.push_back(make_pair(a[i],i));
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }

    sort(v.begin(),v.end());

    int index=n-1;
    int sa=0,sb=0;
    while(index>=0){
        int i=v[index].second;
        int j=v[index-1].second;
        if(b[i]>b[j]){
            sb+=b[i];
            sa+=v[index-1].first;
        }else{
            sb+=b[j];
            sa+=v[index].first;
        }
        index-=2;
    }

    cout<<sb-sa;
}