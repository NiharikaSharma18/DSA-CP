// C++ Implementation of the above approach
#include <bits/stdc++.h>
using namespace std;
string complexNumberMultiply(string a, string b)
{
    int i;
    string x1;
    int temp = 1;

    // Traverse both strings, and
    // check for negative numbers
    for (i = 0; i < a.length(); i++)
    {
        if (a[i] == '+')
            break;
        if (a[i] == '-')
        {
            temp = -1;
            continue;
        }
        x1.push_back(a[i]);
    }

    // String to int
    int t1 = stoi(x1) * temp;
    x1.clear();
    temp = 1;
    for (; i < a.length() - 1; i++)
    {
        if (a[i] == '-')
        {
            temp = -1;
            continue;
        }
        x1.push_back(a[i]);
    }
    int t2 = stoi(x1) * temp;
    x1.clear();
    temp = 1;
    for (i = 0; i < b.length(); i++)
    {
        if (b[i] == '+')
            break;
        if (b[i] == '-')
        {
            temp = -1;
            continue;
        }
        x1.push_back(b[i]);
    }
    int t3 = stoi(x1) * temp;
    x1.clear();
    temp = 1;
    for (; i < b.length() - 1; i++)
    {
        if (b[i] == '-')
        {
            temp = -1;
            continue;
        }
        x1.push_back(b[i]);
    }
    int t4 = stoi(x1) * temp;

    // Real Part
    int ans = t1 * t3 - t2 * t4;
    string s;
    s += to_string(ans);
    s += '+';

    // Imaginary part
    ans = t1 * t4 + t2 * t3;
    s += to_string(ans);
    s += 'i';

    // Return the result
    return s;
}

// Driver Code
int main()
{

    string str1 = "1+1i";
    string str2 = "1+1i";
    cout << complexNumberMultiply(str1, str2);

    return 0;
}