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
    vector<vi> v;
    int cnt1=0,cnt2=0;
    int n1=v[0].size();
    int n2=v.size();
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[0].size()/2;j++){
            if(v[i][j]!=v[i][n1-j-1]) cnt1++;
        }
    }
    for(int i=0;i<v[0].size();i++){
        for(int j=0;j<v.size()/2;j++){
            if(v[j][i]!=v[n2-j-1][i]) cnt2++;
        }
    }
    return min(cnt1,cnt2);
}