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
    vector<pint> vp;
    vi a={0,1,0,1,1,0,0};
    int l=0,r=0,cnt=0;
    while(r<a.size() && l<a.size()){
        if(a[r]==1){
            cnt++;
        }
        else{
            vp.pb({cnt,l});
            l=r;
            cnt=0;
        }
        r++;
    }
    sort(vp.begin(),vp.end());
    fo(vp.size()) cout<<vp[i];
}