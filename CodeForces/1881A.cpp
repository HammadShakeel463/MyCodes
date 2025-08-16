#include<iostream>
#include<vector>
using namespace std ;


int main(){
	
	int t ;
	cin >> t ;
	
	while(t--){
		
		int n1 , n2 ;
		string s1 , s2 ;
		
		cin >> n1 >> n2 ;
		cin >> s1 >> s2 ;
		
		int num  ;
		
		if(n1 >= n2 ){
			num = 2*n1 ;
		}else{
			num = (max(n2,n1)) ;
		}
		
		
		for(int i = 1 ; i <= num ; i += i){
			s1 += s1 ;
		}
		int count = n1 ;
		int count2 = 0 ;
		bool flag = false ;
		for(int i = 0 ; i < num ; i++){

			int j = 0 ;
			flag = false ;
			if(s1[i] == s2[j]){
				flag = true ;
				for( ; j < n2 && i < num; j++,i++){
					if(i > count){
						count += count ;
						count2++ ;
					}	
					if(s1[i] != s2[j]){		
						flag = false ;
						break ;
					}
				}
			}
			if(i >= (count * n1)){
				count++ ;
			}
			if(flag == true){
				count-- ;
				cout << count2 << endl;
				break ;
			}
		}
		if(flag == false){
			cout << "NO" << endl ;
		}
		
	}
	
	
	
	return 0 ;
}

