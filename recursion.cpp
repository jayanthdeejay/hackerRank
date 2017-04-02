/*
https://www.hackerrank.com/challenges/30-recursion
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int factorial(int n){
    if(n<=1){
        return 1;
    }
    return factorial(n-1)*n;
}

int main() {
    int n;
    cin>>n;
    n=factorial(n);
    cout<<n<<endl;
    return 0;
}
