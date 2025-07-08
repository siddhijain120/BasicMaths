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
	cout << "GCD : " << (a == 0 ? b : a);

//ALTERNATE USING STL
//	int Gcd = __gcd(a,b);
//	cout << Gcd;

//TIME COMPLEXITY - O(log(min(a,b)))  SPACE COMPLEXTIY -O(1)
}