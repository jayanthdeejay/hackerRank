/*
Martha is interviewing at Subway. One of the rounds of the interview requires her to cut a bread of size lxb into smaller identical pieces such that each piece is a square having maximum possible side length with no left over piece of bread.

Input format 
The first line contains an integer T. T lines follow. Each line contains two space separated integers l and b which denote length and breadth of the bread.

Output format

T lines, each containing an integer that denotes the number of squares of maximum size, when the bread is cut as per the given condition.

Constraints

1 <= T <= 1000
1 <= l, b <= 1000
Sample Input

2
2 2
6 9
Sample Output

1
6
Explanation

The 1st testcase has a bread whose original dimensions are 2x2, the bread is uncut and is a square. Hence the answer is 1.
The 2nd testcase has a bread of size 6x9. We can cut it into 54 squares of size 1x1, 0 of size 2x2, 6 of size 3x3, 0 of size 4x4, 0 of size 5x5 and 0 of size 6x6. The number of squares of maximum size that can be cut is 6.
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main() {
    int T, l, b;
    cin>>T;
    while(T>0){
        cin>>l;
        cin>>b;
        int x=gcd(l,b);
        cout<<(l/x)*(b/x)<<endl;
        T--;
    }
    return 0;
}
