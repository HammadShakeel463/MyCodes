#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
#include<iterator>
using namespace std ;


int main(){
	
	int t ;
	cin >> t ;
	
	for(int i = 0 ; i < t ; i++){
		
		int n ;
		cin >> n ;
		vector<long long int> arr2 ;
		set<long long  int>arr ;
		int j ;
		
		// input array and put it in set so that we have unique sorted elements 
		for(j = 0 ; j < n ; j++ ){
			
			long int s;
			cin >> s;
			arr2.push_back(s) ;
			arr.insert(s) ;
		}
		
		long long int m ;
		j = 0 ;
		
		// check for the minimum value that is not t=in the array using the index
		for(set<long long int>::iterator itr = arr.begin() ; itr != arr.end() ; itr++ , j++ ){
			m = j ;
			if((*itr) != j ){
				break ;
			}
		}
		
		bool flag = true ;
		int ind1 = -1 , ind2 = -1 ;
		
		// check the first index of the minimum + 1 numbe because if we want MEX(x) = m+1 we have to remove it from the array first 
		
		for(j = 0; j < n ; j++ ){
			if(arr2[j] == m+1){
				ind1 = j ;
				break ;
			}
		}
		
		// if index is -1 we know that the element is not in the aray 
		if(ind1 != -1){
			ind2 = ind1 ;
			
			// check for the bound of m+1 element
			for(int j = ind1+1 ;j < n ; j++ ){
				if(arr2[j] == m+1){
					ind2 = j ;
				}
			}
			
		// all the numbers less then m+1 should be outside the boundary we found i.e. ind1 ind2 if we find all the element we know that our MAX(x) can be m+1 else we changed our MEX(x) to someother value and we can not find m+1
		for(j = 0 ; j < m && flag ; j ++ ){
			flag = false ;
			for(int k = 0 ; k < n ; k++){
				if(k == ind1){
					k = ind2 ;
				}else{
					if(arr2[k] == j){
						flag = true ;
						break ;
					}
				}
			}
		}	
			
		}else{
			if(m+1 == n){
				flag = false ;
			}
		}
		
		
		
		if(flag){
			cout << "YES" << endl ;
		}else{
			cout << "NO" << endl ;
		}
		
	}
	
	
	return 0 ;
}

