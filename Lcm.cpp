#include<bits/stdc++.h>
using namespace std;

int main() {
    int n1,n2;
    cin >> n1 >> n2;
    int r = 2;
    int res = 1;
    while(r <= n1 && r <= n2) {
        if((n1 % r == 0)&& (n2 % r == 0)) {
            n1 =  n1 / r;
            n2 = n2 / r;
            res = res * r;
        } else {
            r++;
        }
    }
    int lcm = res * n1 * n2;
    cout << lcm;
    //TIME COMPLEXITY - O(min(n1,n2))   SPACE COMPLEXITY - O(1)
}