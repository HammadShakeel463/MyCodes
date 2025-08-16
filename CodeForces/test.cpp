#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cmath>
#include <numeric>
#include <map>
#include <list>
#include <set>
#include <limits.h>
using namespace std;

#define forn(n) for (int i = 0; i < n; i++)
#define form2n(m, n) for (int i = m; i < n; i++)

// If sorted, No unless duplication
// Otherwise, Yes unless the next number is just one greater and has duplication

int main(void)
{
    int t;
    cin >> t;
    bool ans[t];
    forn(t)
    {
        int n;
        cin >> n;
        pair<int, int> arr[n];
        forn(n)
        {
            int number;
            cin >> number;
            arr[i].first = number;
            arr[i].second = i;
        }
        sort(arr, arr + n, [] (pair<int, int>& p1, pair<int, int>& p2)
                           {if (p1.first == p2.first)
                                return p1.second < p2.second;
                            else 
                                return p1.first < p2.first;});
        bool sorted = true;
        bool dup = false;
        int j = 0;
        for (; j < n - 1; j++)
        {
            if (arr[j].first == arr[j + 1].first)
                dup = true;
            else if (arr[j + 1].first - arr[j].first > 1)
            {
                sorted = false;
                break;
            }
        }
        if (sorted)
            ans[i] = dup;
        else
        {
            ans[i] = !(arr[j + 1].first - arr[j].first == 2 && arr[j + 1].first == arr[j + 2].first);
            if (!ans[i])
            {
                int k = j + 2;
                bool b = false;
                while (k < n)
                {
                    if (arr[k].first != arr[k - 1].first)
                        break;
                    if (arr[k].second - arr[k - 1].second != 1)
                    {
                        b = true;
                        break;
                    }
                    k++;
                }
                ans[i] = !b;
            }
        }
    }
    for (const auto& i: ans)
    {
        if (i)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
