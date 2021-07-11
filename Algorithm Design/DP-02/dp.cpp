#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1600,INF=1e9;
vector<int>z,f;
int n,k,p;
int fNum[N],g[N],family[N];

int zoj(int x){
    int res=0;
    if(x==0 && z.size())
        return INF;
    //cout<<"-------------------------\n";
   // cout<<"ZOJ\n";
    
   // cout<<"x="<<x<<endl;
    for(auto p:z){
        if(fNum[p]<=x)
            continue;
        
        int t=fNum[p]-x+1;
        
        //cout<<"t="<<t<<endl;
        //cout<<"g[p]="<<g[p]<<endl;
        res+=t*g[p];
        //cout<<"res="<<res<<endl;
    }
    //cout<<"-------------------------\n";
    cout<<x<<" zoj returns "<<res+x*k<<endl;
    return res+x*k;
}

int fard(int x){
    int res=0;
    if(x==0 && f.size())
        return INF;
  //  cout<<"FARD\n";
    for(auto p:f){
         if(fNum[p]<=x)
            continue;
        
        int t=fNum[p]-x+1;
        res+=t*g[p];
       // cout<<"t="<<t<<endl;
       // cout<<"g[p]="<<g[p]<<endl;
        res+=t*g[p];
       // cout<<"res="<<res<<endl;
    }
    cout<<x<<" fard returns "<<res+x*k<<endl;
    return res+x*k;
}

int calc(int x){
    int mini=INF;
    cout<<"--------------------------------------------------------------------------------\n";
    cout<<"Calculate x="<<x<<endl;
    for(int i=0;i<=x;i++){
        cout<<"---------------------------------\n";
        mini=min(mini,zoj(i)+fard(x-i));
        //cout<<i<<" zoj = "<<zoj(i)<<" : \n"<<x-i<<" fard = "<<fard(x-i)<<endl;
    }
    
    return mini;
}

void test_case(){
    for(int i=0;i<N;i++)fNum[i]=0;
    f.clear();
    z.clear();

    cin>>n>>k>>p;
    for(int i=1;i<=n;i++){
        cin>>family[i];
        fNum[family[i]]++;
    }

    for(int i=1;i<=p;i++){
        if(fNum[i]%2)
            f.push_back(i);
        else
            z.push_back(i);
    }

    for(int i=1;i<=p;i++)
        cin>>g[i];

    ll ans=INF;


    // for(int i=1;i<=p;i++){
    //     ans+=fNum[i]*g[i];
    // }
    
    // for(int i=0;i<5;i++)
    //     cout<<i<<" "<<zoj(i)<<endl;
    cout<<"ans="<<ans<<endl;
    int res=1;
    int i=2;
    while(i<10){
        // if(calc(i)<ans){
        //     ans=calc(i);
        //     res=i;
        // }
        // cout<<res<<" miz "<<ans<<endl;
        //cout<<i<<" calculate it "<<calc(i)<<endl;
        calc(i);
        i++;
    }

    cout<<ans+res*k;

}

int main(){
    int t;
    cin>>t;
    while (t--){
        test_case();
        cout<<endl;
    }
}


/*  tests :
1
10 5 3
1 1 1 2 2 2 3 3 3 3
2 5 9

*/