#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define str string

void solve();

const bool hasTestCases = 1;
namespace problemSolving {
    static void testCases() {
        if (!hasTestCases) {
            solve();
            return;
        }
        ll t;
        cin >> t;
        while (t--)
            solve();
    }

    static void FastIO() {

        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    }

    static void FileInputOutput() {
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    }

    static void CodeForces() {
        FastIO();
#ifndef ONLINE_JUDGE
        FileInputOutput();
#endif
        testCases();
    }

    template<typename T>
    static void input(vector<T> &vec) {
        for (auto it = vec.begin(); it != vec.end(); it++) {
            cin >> *it;
        }
    }

    template<typename T>
    static void input(list<T> &Li, ll n) {
        while (n--) {
            int t;
            cin >> t;
            Li.template emplace_back(t);
        }
    }

    template<typename T>
    static void input(set<T> &s, ll n) {
        while (n--) {
            ll t;
            cin >> t;
            s.template emplace(t);
        }
    }

    template<typename T>
    static void print(vector<T> &vec, str space = " ", str end = "\n") {
        for (auto i: vec) {
            cout << i << space;
        }
        cout << end;
    }

    template<typename T>
    static void print(list<T> &Li, str space = " ", str end = "\n") {
        for (auto i: Li) {
            cout << i << space;
        }
        cout << end;
    }

    template<typename T>
    static void print(set<T> &s, str space = " ", str end = "\n") {
        for (auto i: s) {
            cout << i << space;
        }
        cout << end;
    }

};
using namespace problemSolving;

void solve() {
}


int main() {
    CodeForces();
    return 0;
}

