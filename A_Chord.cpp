#include <bits/stdc++.h>
using namespace std;

void solve()
{
    vector<string> notes = {"C", "C#", "D", "D#", "E", "F", "F#", "G", "G#", "A", "B", "H"};

    vector<string> note(3);

    for (int i = 0; i < 3; i++)
    {
        cin >> note[i];
    }

    int ind1 = 0, ind2 = 0, ind3 = 0;

    sort(note.begin(), note.end());
    int low = 0, high = 1;

    for (int i = 0; i < 6; i++)
    {
        for (int i = 0; i < 12; i++)
        {
            if (note[0] == notes[i])
            {
                ind1 = i;
                break;
            }
        }

        for (int i = ind1; i < 12 + ind1; i++)
        {
            ((i > 11) ? i = i % 12 : i = i);
            if (note[1] == notes[i])
            {
                ind2 = i;
                break;
            }
        }

        for (int i = ind2; i < 12 + ind2; i++)
        {
            ((i > 11) ? i = i % 12 : i = i);
            if (note[2] == notes[i])
            {
                ind3 = i;
                break;
            }
        }


        int st1 = 0, st2 = 0;
        ((ind2 > ind1) ? st1 = ind2 - ind1 : st1 = 12 - ind1 + ind2);
        ((ind3 > ind2) ? st2 = ind3 - ind2 : st2 = 12 - ind2 + ind3);

        if (st1 == 3 && st2 == 4)
        {
            cout << "minor";
            return;
        }
        if (st1 == 4 && st2 == 3)
        {
            cout << "major";
            return;
        }

        swap(note[low], note[high]);

        low++;
        high++;

        ((high > 2) ? high = 0 : high = high);
        ((low > 2) ? low = 0 : low = low);
    }

    cout << "strange";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}
