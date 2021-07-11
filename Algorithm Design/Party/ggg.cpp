#include<bits/stdc++.h>
using namespace std;
const int INF=1e9,N=1100;
// i hate u alireza
int f[N];
int fCount[200];
void solve(){
    for(int i=1;i<=100;i++)fCount[i]=0;
	int n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>f[i];
        fCount[f[i]]++;
    }

    int ans=0;

    for(int i=1;i<=100;i++)
        if(fCount[i]>1)
            ans+=fCount[i];

    cout<<ans+k;

}

int main(){
    int t=1;
    cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
}
