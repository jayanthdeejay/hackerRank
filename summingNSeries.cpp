/* 
 https://www.hackerrank.com/challenges/summing-the-n-series 
 */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long int n;
    short T;
    cin>>T;
    while(T>0){
        cin>>n;
        cout<<((n%1000000007)*(n%1000000007))%1000000007<<endl;
        T--;
    }
    return 0;
}

