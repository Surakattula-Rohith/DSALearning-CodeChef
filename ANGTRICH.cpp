#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a , b , c ;
	cin >> a >> b >> c ;
	if((a+b+c==180) and (a>0 and b>0 and c>0) and (a<180 and b<180 and c<180)) cout << "YES" << endl ;
	else cout << "NO" << endl ;
	return 0;
}
