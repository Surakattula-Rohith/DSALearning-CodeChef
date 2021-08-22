#include <bits/stdc++.h>
//#include<ext/pb_ds/assoc_container.hpp>
//#include<ext/pb_ds/tree_policy.hpp>
//#include <ext/pb_ds/trie_policy.hpp>
//using namespace __gnu_pbds;
using namespace std;

int main() {
	// your code goes here
	std::vector<int> arr(3) ;
	for(int i = 0 ; i < 3 ; i++){
	   // int x ; 
	    cin >> arr[i] ;
	}
	
	sort(arr.begin(),arr.end()) ;
	
	cout << arr[1] << endl ;
	
	
	return 0;
}
