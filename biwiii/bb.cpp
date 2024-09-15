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

class Node{
    public:
    int val;
    Node* next;
    
    public:
    Node(int val1, Node* next1){
        val=val1;
        next=next1;
    }
    public:
    Node(int val1){
        val=val1;
        next=nullptr;
    }
};

int traverse(Node* &head,vi q){
    Node* a=head;
    while(true){
        if(a->val==q[0]) break;
        if(q[0]<a->next->val){
            break;
        }
        a=a->next;
    }

    Node* b=head;
    while(true){
        if(b->val==q[1]) break;
        if(q[1]<b->next->val){
            b=b->next;
            break;
        }
        b=b->next;
    }

    a->next=b;
    
    Node* t=head;
    int dist=0;
    while(true){
        if(t==nullptr) break;
        dist++;
        t=t->next;
    }
    return dist;
}


int main(){
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n=5;
    vector<vi> q={{1,3},{2,4}};

    Node* main=new Node(0);
    Node* mover=main;
    for(int i=1;i<n;i++){
        Node*temp=new Node(i);
        mover->next=temp;
        mover=temp;
    }

    vi ans;
    for(int i=0;i<q.size();i++){
        int dist=traverse(main,q[i]);
        ans.pb(dist-1);
    }
    while(true){
        if(main==nullptr) break;
        // cout<<main->val;
        main=main->next;

    }

    fo(ans.size()) cout<<ans[i];



}