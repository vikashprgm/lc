// author - v1kash
#include<bits/stdc++.h>
using namespace std;
#define fo(n) for(int i=0;i<n;i++)
#define rfo(n) for(int i=n;i>=0;i--);
typedef long long ll;
#define pb push_back
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pint;

int fun(int x,int y,vector<vi> &dp){
    if(x<0 || y<0) return 0;
    if(dp[x][y]!=-1) return dp[x][y];
    int l=fun(x-1,y,dp);
    int u=fun(x,y-1,dp);
    return dp[x][y]=l+u;
}
int main(){
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int m,n;
    cin>>m>>n;
    vi v(n+1,-1);
    vector<vi> dp(m+1,v);
    dp[0][0]=1;
    dp[m][n]=1;
    cout<<fun(m-1,n-1,dp);

}
    // fo(dp.size()){
    //     for(int j=0;j<dp[0].size();j++) cout<<dp[i][j]<<" ";
    //     cout<<endl;
    // }