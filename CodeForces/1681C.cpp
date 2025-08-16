#include<iostream>
#include<vector>
using namespace std ;

int main(){
	
	int t ; 
	cin >> t ;
	
	for(int i = 0 ;i < t ; i++){
		
		int n ;
		vector<int>a ;
		vector<int>b ;
		cin >> n ;
		for(int j = 0 ; j < n ; j++ ){
			int x ;
			cin >> x ;
			a.push_back(x) ;
	    }
		for(int j = 0 ; j < n ; j++ ){
			int x ;
			cin >> x ;
			b.push_back(x) ;
	    }
		int count = 0 ;
		vector<pair<int, int> > ans ;
		for(int j = 0 ; j < n ; j++ ){
			int min = a[j] ;
			int ind = j ;
			for(int k = j+1 ; k < n ; k++ ){
				if(min > a[k] ){
					min = a[k] ;
					ind = k ;
				}else if(min == a[k] && b[j] > b[k]){
					min = a[k] ;
					ind = k ;
				}
				
			}
			if(ind != j){
				count++ ;
				int temp = a[j] ;
				int temp2 = b[j] ;
				a[j] = a[ind] ;
				b[j] = b[ind] ;
				b[ind] = temp2 ;
				a[ind] = temp ;
				ans.push_back(make_pair(j,ind)) ;
			}
				
		}
		bool flag = true ;
		for(int j = 0 ; j < n-1 ; j++ ){
			if(b[j] > b[j+1]){
				flag = false ;
				break ;
			}
		}
		
		if(flag){
			cout << count << endl ;
			for(int j = 0 ; j < count ; j++ ){
				cout << ans[j].second + 1 << " " << ans[j].first + 1 << endl ;
			}
			
		}else{
			cout << -1 << endl ;
		}
		
	}
	
	return 0 ;
}

