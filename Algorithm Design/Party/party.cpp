#include<bits/stdc++.h>
using namespace std;
const int INF=1e9,N=1100;

int n,k;
int f[N],dpp[N];

int dp(int x){
    if(x>n)
        return 0;
    if(dpp[x]!=-1)
        return dpp[x];

    int fCount[200];
    for(int i=0;i<200;i++)fCount[i]=0;
    int inFight=0;
    int ans=INF; 
    for(int i=x;i<=n;i++){
        fCount[f[i]]++;
        int temp=fCount[f[i]];
        if(temp==2)
            inFight+=2;
        else if(temp>2)
            inFight++;

        ans=min(ans,inFight+k+dp(i+1));
    }
    dpp[x]=ans;
    return ans;
}

void solve(){
    cin>>n>>k;
    for(int i=1;i<=n;i++)dpp[i]=-1;
    for(int i=1;i<=n;i++)cin>>f[i];
    cout<<dp(1);

}

int main(){
    int t=1;
    cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
}