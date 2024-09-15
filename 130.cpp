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

void dfs_connect(vector<vector<char>>& board,vector<vector<int>>& visited, int i, int j){
        int m=board.size(),n=board[0].size();
        vector<pair<int,int>> dir={{0,1},{1,0},{-1,0},{0,-1}};

        queue<pair<int,int>> q;
        visited[i][j]=1;
        board[i][j]='Y';
        q.push({i,j});

        while(!q.empty()){
            int rn=q.front().first;
            int cn=q.front().second;
            q.pop();

            for(int i=0;i<4;i++){
                int row=rn+dir[i].first;
                int col=cn+dir[i].second;

                if(row>=0 && col>=0 && row<n && col<m
                && !visited[row][col] && board[row][col]=='0'){
                    visited[row][col]=1;
                    board[i][j]='Y';
                    q.push({row,col});
                }
            }
        }
    }

int main(){
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
        vector<vector<char>> board={{'X','X','X','X'},{'X','O','O','X'},{'X','X','O','X'},{'X','O','X','X'}};
        int r=board.size(),c=board[0].size();
        vector<vector<int>> visited(r,vector<int>(c,0));
        
        for(int i=0;i<c;i++){
            if(board[0][i]=='0' && !visited[0][i]){
                dfs_connect(board,visited,0,i);
                cout<<"yes";
                }
        }
        for(int i=0;i<r;i++){
            if(board[i][c-1]=='0' && !visited[i][c-1]) {
                dfs_connect(board,visited,i,c-1);
            cout<<"yes";
            }

        }
        for(int i=0;i<c;i++){
            if(board[r-1][i]=='0' && !visited[r-1][i]){
                dfs_connect(board,visited,r-1,i);
                cout<<"yes";
                }
        }
        for(int i=0;i<r;i++){
            if(board[i][0]=='0' && !visited[i][0]){
                dfs_connect(board,visited,i,0);
                cout<<"yes";
                }
        }
        //corners->y, ab andar walo ko x karo;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                cout<<board[i][j];
            }
            cout<<'\n';
        }
}
