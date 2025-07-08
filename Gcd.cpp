#include<bits/stdc++.h>
using namespace std;

int main() {
	//GCD = __gcd(a,b) --> predefined in cpp
	int a,b;
	cin >> a >> b;
	while(a > 0 && b > 0){
		if(a > b) a = a % b;
		else b = b % a;
	}
	if(a == 0) cout << b;
	else cout << a;
//	int Gcd = __gcd(a,b);
//	cout << Gcd;
}