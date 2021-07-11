#include<bits/stdc++.h>
using namespace std;
const int INF=1e9,N=1100;
// i hate u alireza
int n,k;
int f[N],dp[N];

int calFight(int l,int r){
    multiset<int>s;
    int ans=0;
    for(int i=l;i<=r;i++){
        if(s.count(f[i])){
            if(s.count(f[i])==1)
            	ans++;
            ans++;      
        }      
        s.insert(f[i]);
    }
    return ans;
}

void solve(){
	
    cin>>n>>k;
    
    for(int i=1;i<=n;i++)cin>>f[i];

    dp[0]=0;
    dp[1]=k;
    for(int i=2;i<=n;i++){
        //calc dp[i]
        int res=dp[i-1]+k;
        int fight;
        for(int j=1;j<=i;j++){
            fight=calFight(j,i);
            //cout<<i<<" "<<j<<" FIGHT "<<fight<<endl;
            res=min(res,dp[j-1]+k+fight);
        }
		
		dp[i]=res;
    }
    //for(int i=0;i<=n;i++)cout<<i<<" ---> "<<dp[i]<<endl;
    cout<<dp[n];
}

int main(){
    int t=1;
    cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
}
