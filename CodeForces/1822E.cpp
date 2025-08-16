//https://codeforces.com/contest/1822/problem/E

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;


int main(){
	
	int t ;
	cin >> t ;
	
	for(int i = 0 ; i < t ; i++){
		int n ;
		string s ;
		
		cin >> n ;
		cin >> s ;
		
		if(n%2 == 0){
			
			vector<int> num(26,0) ;
			
			for(int j = 0 ; j < n ; j++ ){
				num[s[j] - 'a']++ ; 
			}
			
			int maxx = *max_element(num.begin() , num.end()) ;
			if(maxx * 2 > n+1) {
				cout << -1 << endl ;
			}else{
				fill(num.begin() , num.end() , 0 );
        		for (int j = 0; j < n / 2; j++){
         	 		if (s[j] == s[n - 1 - j]){
            			num[s[j] - 'a']++;
          			}
        		}
        		maxx = 0;
				int sum = 0;
        		for (int j = 0; j < 26; j++){
         	 		maxx = max(maxx, num[j]);
          			sum += num[j];
        		}
        		cout << max((sum + 1) / 2, maxx) << endl;
			}
			
		}else{
			cout << -1 << endl ;
		}
		
		
	}
	
	
	return 0 ;
}

