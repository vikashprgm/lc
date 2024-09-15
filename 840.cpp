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

    bool check(vector<vector<int>> &a,int i,int j){
        int x=a[i][j]+a[i][j+1]+a[i][j+2];
        bool c1= x==a[i][j]+a[i+1][j]+a[i+2][j];
        bool c2= x==a[i][j+1]+a[i+1][j+1]+a[i+2][j+1];
        bool c3= x==a[i][j+2]+a[i+1][j+2]+a[i+2][j+2];
        bool c4= x==a[i+1][j]+a[i+1][j+1]+a[i+1][j+2];
        bool c5= x==a[i+2][j]+a[i+2][j+1]+a[i+2][j+2];
        bool c6= x==a[i][j]+a[i+1][j+1]+a[i+2][j+2];
        bool c7= x==a[i][j+2]+a[i+1][j+1]+a[i+2][j];
        return c1&&c2&&c3&&c4&&c5&&c6&&c7;

}
    bool hasher(vector<vector<int>> & a,int i,int j){
        vi v;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                v.pb(a[i][j]);
            }
        }
        sort(v.begin(),v.end());
        for(int i=0;i<9;i++){
            if(v[i]!=i+1) return false;
        }
        return true;
    }
    int main() {
        int cnt=0;
        vector<vi> a={{4, 3, 8, 4, 3, 8},
                      {9, 5, 1, 9, 5, 1},
                      {2, 7, 6, 2, 7, 6},
                      {4, 3, 8, 4, 3, 8},
                      {9, 5, 1, 9, 5, 1},
                      {2, 7, 6, 2, 7, 6},
                      {4, 3, 8, 4, 3, 8},
                      {9, 5, 1, 9, 5, 1},
                      {2, 7, 6, 2, 7, 6}};
        int r=a.size();
        int c=a[0].size();
        vector<pair<int,int>> p;
        if(r<3 || c<3) return 0;
        for(int i=0;i<=r-3;i++){
            for(int j=0;j<=c-3;j++){
                if(check(a,i,j) && hasher(a,i,j)){
                    cnt++;
                    p.pb({i,j});
                } 
        }
    }
    fo(p.size()) cout<<p[i].first<<" "<<p[i].second<<'\n';
    return 0;
}