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
    string w="abzaqsqcyrbzsrvamylmyxdjl";
    unordered_map<char,int> mp;
    fo(w.size()){
        mp[w[i]]++;
    }

    vi v;
    int cnt2=0;
    for(auto it:mp){
        cnt2++;
        v.pb({it.second});
    }
    sort(v.begin(), v.end(),greater<int>());
    // fo(v.size()) cout<<v[i]<<endl;
    int ans=0,f=1,cnt=0;
    fo(v.size()){
        cnt++;
        if(cnt>8) {
            f++;
            cnt=1;
        }
        ans+=(v[i]*f);
    }
    cout<<ans;
    
}