//https://codeforces.com/contest/1822/problem/B

#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main(){
  int t;
  cin >> t;
  for (int i = 0; i < t; i++){
    long long int n;
    cin >> n;
    vector<long long> arr ;
    for (int j = 0; j < n; j++){
        long long int num ;
        cin >> num ;
        arr.push_back(num) ;
    }
    sort(arr.begin(), arr.end());
    long long int ans = max(arr[0] * arr[1], arr[n - 2] * arr[n - 1]) ;
    cout << ans << endl;
  }
  
  return 0 ;
}
