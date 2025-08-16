#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric> 

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k, x;
        vector<int> ar;
        long long int sum2 = 0;
        long long int sum = 0;
        cin >> n >> k >> x ;

        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            ar.push_back(a);
        }

        sort(ar.begin(), ar.end());
        sum = accumulate(ar.begin(), ar.end(), 0);
        
		int j = n - 1;
        for (int i = 0; i < x; i++, j--) {
            sum2 += ar[j];
        }
        sum -= sum2;
		cout << sum << " " << sum2 << endl ;
        for (int i = j, l = n - 1; i >= 0; i--) {
        	cout << sum - ar[i]  << endl ;
            if (sum - sum2 < (sum-ar[i]) - (sum2 - ar[l] + ar[i]) && k > 0) {
                sum -= ar[i];
                sum2 = (sum2 - ar[l]) + ar[i];
                l--;
                k--;
                cout << sum << " " << sum2 << endl ;
            }
            else {
                break;
            }
        }

        cout << sum - sum2 << endl;
    }

    return 0;
}

