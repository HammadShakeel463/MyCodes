#include<iostream>
#include<vector>
#include<set>
#include<iterator>
using namespace std ;

int search(set<int>ar ){
	int j = 0 ;
	for(set<int>::iterator itr = ar.begin() ; itr != ar.end() ; j++ , itr++){
		m = j ;
		if((*itr) != j){
			break ;
		}
	}
	
	return m ;
}

int main(){
	
	int t ;
	cin >> t ;
	
	for(int i = 0 ; i < t ; i++ ){
		
		int n ;
		cin >> n ;
		vector<int> arr ;
		set<int> ar ;
		vector<int> ans ;
		for(int j = 0 ; j < n ; j++){
			int a ;
			cin >> a ;
			arr.push_back(a) ;
			ar.insert(a) ;
		}
		
		
		
	}
	
	
	return 0 ;
}


