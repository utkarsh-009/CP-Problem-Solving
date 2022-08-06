#include<bits/stdc++.h>
using namespace std;
 
void winner(unordered_map<char, int> mp, string s)
{
    int n = s.length();
    if(n % 2 == 0)
    {
        for(int i = 0; i < n; i++)
        {
            if(mp[s[i]] % 2 != 0)
            {
                cout<<"Second";
                return;
            }
        }
        cout<<"First";
        return;
    }
 
    else
    {
        bool mid = false;
        for(int i = 0; i < n; i++)
        {
            if(mp[s[i]] % 2 != 0 && !mid)
            {
                mid = true;
                continue;
            }
            else if (mp[s[i]] % 2 != 0)
            {
                cout<<"First";
                return;
            }
        }
        ((mid == true) ? cout<<"First":cout<<"Second");
    }
}
 
void solve() {
 
    string s;
    cin>>s;
 
    unordered_map<char, int> mp;
    int n = s.length();
    for(int i = 0; i < n; i++)
    {
        mp[s[i]]++;
    }
 
    winner(mp, s);
}
 
 
int main() {
 
 
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    solve();
 
    return 0;
}