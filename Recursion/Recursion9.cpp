#include <bits/stdc++.h>
using namespace std;
void recursion(int n, string s)
{
    if(n == 0)
    {
        return;
    }
      cout<<s[n-1]<<" ";
    recursion(n-1,s);
}

int main()
{
    string s;
    cin >> s;
    int n;
    n = s.length();
    recursion(n, s);
    return 0;
}