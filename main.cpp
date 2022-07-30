#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define str string

void Code()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
};

void solve()
{
    cout << "Hello World";
}

int main()
{
    Code();
    solve();
    return 0;
}

/* Notes !!!!!!!!

ro sort a vector of pairs
  sort(vec.begin(), vec.end(), [](const pair<string, int> &l, const pair<string, int> &r)
         {
if(l.second==r.second){
            return l.first < r.first;
        }
        return l.second > r.second; });

    for (auto item : vec)
    {
        cout << item.first << " " << item.second  << endl;
    }

 len = sizeof(arr)/sizeof(arr[0]);
copy(s.begin(), s.end(), ostream_iterator<int>(cout, " "));
 fill((int *)arr, (int *)arr + sizeof(arr) / sizeof(int), 0);*/