#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;

int main(){
	
	int t ;
	cin >> t ;
	
	while(t--){
		vector<int> ar(3) ;
		cin >> ar[0] >> ar[1] >> ar[2] ;
		sort(ar.begin() , ar.end()) ;
		int ans = abs(ar[1] - ar[0]) + abs(ar[1] - ar[2]) ;
		cout << ans << endl ;;
	}
	
	
	return 0 ;
}

