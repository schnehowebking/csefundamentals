#include <bits/stdc++.h>

using namespace std;

string finalcolorString(string stringsss)
{
    queue<char> sQ;

    for (char s : stringsss)
    {
        sQ.push(s);
    }

    queue<char> sQ2;

    while (!sQ.empty())
    {
        char fc = sQ.front();
        sQ.pop();

        if (!sQ.empty())
        {
            char f = sQ.front();

            if ((fc == 'R' && f == 'G') || (fc == 'G' && f == 'R'))
            {
                sQ.pop();
                sQ2.push('Y');
            }
            else if ((fc == 'R' && f == 'B') || (fc == 'B' && f == 'R'))
            {
                sQ.pop();
                sQ2.push('P');
            }
            else if ((fc == 'B' && f == 'G') || (fc == 'G' && f == 'B'))
            {
                sQ.pop();
                sQ2.push('C');
            }
            else if (fc == f)
            {
                sQ.pop();
            }
            else
            {
                sQ2.push(fc);
            }
        }
        else
        {
            sQ2.push(fc);
        }
    }

    queue<char> sQ3;

    while (!sQ2.empty())
    {
        char fc = sQ2.front();
        sQ2.pop();

        if (!sQ2.empty())
        {
            char f = sQ2.front();

            if (fc == f)
            {
                sQ2.pop();
            }
            else
            {
                sQ3.push(fc);
            }
        }
        else
        {
            sQ3.push(fc);
        }
    }

    string result;

    while (!sQ3.empty())
    {
        result += sQ3.front();
        sQ3.pop();
    }

    return result;

}

int main()
{
    // Write your code here
    int n;
    cin >> n;

    while (n--)
    {
        int x;
        cin >> x;

        string clr;
        cin >> clr;

        string last = finalcolorString(clr);

        if (last.empty())
        {
            cout << " ";
        }
        else
        {
            cout << last;
        }
        cout << endl;
    }

    return 0;
}
