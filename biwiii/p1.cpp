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
    vector<vi> v={{0,0},{1,0},{1,0},{2,1},{2,1},{2,0}};
    int n=4;
    sort(v.begin(),v.end());
    int cnt=0;
    for(int i=0;i<n;i++){
        unordered_map<int,int> mp;
        for(int j=0;j<v.size();j++){
            if(v[j][0]==i){
                mp[v[j][1]]++;
            }
        }
        for(auto it:mp){
            // cout<<it.first<<" "<<it.second<<endl;
            if(it.second>i){
                cnt++;
                break;
            }
        }
    }
    cout<<cnt;
    return cnt;
}