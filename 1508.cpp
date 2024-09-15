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

int main(){
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    vi shuffle;
    for(int i=0;i<a.size();i++){
        int x=0;
        for(int j=i;j<a.size();j++){
            x+=a[j];
            shuffle.pb(x);
        }
    }
    sort(shuffle.begin(),shuffle.end());
    int sum=0;
    for(int i=l-1;i<r;i++){
        sum+=shuffle[i];
    }
   return sum;
    // fo(shuffle.size()) cout<<shuffle[i]<<" ";
}