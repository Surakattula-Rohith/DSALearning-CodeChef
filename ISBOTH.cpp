#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n ; 
	cin >> n ;
	if(n%55 == 0) cout << "BOTH" << endl ;
	else if(n%5 == 0 or n%11==0) cout << "ONE" << endl ;
	else cout << "NONE" << endl ;
	return 0;
}
