#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 0;
    int cnt = log10(n)+1;//counting digits
    int bits = log2(n);//counting bits
    //Using while loop
    while(n != 0){
        n /=10;
        count++;
    }
    cout << "Digit count using log : " << cnt << endl;
    cout << "Digit count using loop : "<< count << endl;
    cout <<"bits used : " << bits << endl;
    //TIME COMPLEXITY - O(log10(n))  - SPACE COMPLEXITY - O(1)
}