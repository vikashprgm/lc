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
    vector<string> v={"aaa","aa","a"};
    int k=1;
    unordered_map<string,pint> mp;
    fo(v.size()){
        mp[v[i]].first++;
        mp[v[i]].second=i;
    }
    vector<pair<string,int>> ans;
    for(auto it:mp){
        if(it.second.first==1){
            ans.pb({it.first,it.second.second});
        }
        // cout<<it.first<<" "<<it.second.first<<" "<<it.second.second<<endl;
    }
    sort(ans.begin(),ans.end(),[](auto &left, auto &right) { return left.second < right.second; });
    fo(ans.size()) cout<<ans[i].first<<" "<<ans[i].second;
    // if(k<=ans.size()) cout<<ans[k-1].first;
    else cout<<"";
}