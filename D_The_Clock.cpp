#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string st;
    cin >> st;

    int n;
    cin >> n;

    set<string> pt = {"00:00", "01:10", "02:20", "03:30", "04:40", "05:50", "10:01", "11:11", "12:21", "13:31", "14:41", "15:51", "20:02", "21:12", "22:22", "23:32"};

    int sh = stoi(st.substr(0, 2));
    int sm = stoi(st.substr(3, 2));

    int lookH = n / 60;
    int lookM = n % 60;
    string ch, cm;

    int cnt = 0;

    int i = 0;

    while (true)
    {

        ((sm >= 60) ? sm = sm - 60, sh++ : sm = sm);
        ((sh > 23) ? sh = sh - 24 : sh = sh);

        ((sm / 10 == 0) ? cm = "0" + to_string(sm) : cm = to_string(sm));
        ((sh / 10 == 0) ? ch = "0" + to_string(sh) : ch = to_string(sh));

        string s = ch + ":" + cm;

        if (i > 0 && st == s)
        {
            break;
        }

        if (pt.find(s) != pt.end())
        {
            cnt++;
        }

        sh += lookH;
        sm += lookM;

        i++;
    }

    cout << cnt;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
        cout << "\n";
    }
}
