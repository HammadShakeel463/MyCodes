#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;


int main(){
	int t ;
	cin >> t ;
	while(t--){
		int k ;
		cin >> k ;
		vector<int> arr(k+1,0) ;
		vector<int> bee ;
		for(int i = 0 ; i < k ; i++){
			int a ;
			cin >> a ;
			arr[a]++  ;
			bee.push_back(a) ;
		}
		
		for(int i = 0 ; i < k ; i++){
			if((k-2) % bee[i] == 0){
				if((k-2) / bee[i] == bee[i]){
					if(arr[(k-2) / bee[i]] > 1){
						cout << (k-2) / bee[i] << " " << bee[i] << endl ;
						break ;
					}
				}else if(arr[(k-2) / bee[i]] == 1){
					cout << (k-2) / bee[i] << " " << bee[i] << endl ;
					break;
				}
			}
		}
		
	}
	return 0 ;
}
