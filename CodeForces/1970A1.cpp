#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std ;

int main(){
	
	string s ;
	cin >> s ;
	int n = s.size() ;
	vector<pair<int,char> > p(n) ;
	int num = 0 ;
	for(int i = 0 ; i < n ; i++ ){
		p[i].first = num ;
		p[i].second = s[i] ;
		if(s[i] == '('){
			num++ ;
		}else{
			num-- ;
		}
	}
	
	for (int step = 1; step < n; step++) {
		int key = p[step].first;
		char ke = p[step].second ;
		int j = step - 1;

		while (key < p[j].first && j >= 0) {
		  p[j + 1].first = p[j].first;
			p[j + 1].second = p[j].second;
		  --j;
		}
		p[j + 1].first = key;
		p[j+1].second = ke ;
  }

	
	for(int i = 0 ; i < n ; i++ ){
		cout << p[i].second; 
	}
	
	return 0 ;
}

