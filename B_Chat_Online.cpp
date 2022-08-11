#include<bits/stdc++.h>
using namespace std;
 
void solve() {
 
    int p,q,l,r;
    cin>>p>>q>>l>>r;
 
    vector<pair<int,int>> x;
    vector<int> v(2002);
 
    for(int i= 0; i < p; i++)
    {
        int a,b;
        cin>>a>>b;
 
        for(int j = a; j <= b; j++)
        {
            v[j] = 1;
        }
    }
 
 
    for(int i= 0; i < q; i++)
    {
        int c,d;
        cin>>c>>d;
 
        x.push_back(make_pair(c,d));
    }
 
    int cnt = 0;
 
    for(int i = l; i <= r ; i++)
    {
        bool moment = false;
        for(auto j = x.begin(); j != x.end(); j++)
        {
            int c = j->first, d = j->second;
            int t = 0;
         
            for(int k = c + i; k <= d + i; k++)
            {
                if(v[k])
                {
                    moment = true;
                    break;
                }                         
            }
            
            if(moment) {
                break;
            }
        }
        if(moment) {
            cnt++;
        }
    }
 
    cout<<cnt;
}
 
 
 
int main() {
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    solve();
 
    return 0;
}