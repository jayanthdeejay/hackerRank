/*
 https://www.hackerrank.com/challenges/sherlock-and-moving-tiles
 */
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;


int main() {
    double L, S1, S2, Q,qi;
    cin>>L;
    cin>>S1;
    cin>>S2;
    cin>>Q;
    cout<<setprecision(5);
    cout<<fixed;
    while(Q>0){
        cin>>qi;
        if(S1<S2){
            cout<<((sqrt(2*L*L))-(sqrt(2*qi)))/(S2-S1)<<endl;
        }
        else{
            cout<<((sqrt(2*L*L))-(sqrt(2*qi)))/(S1-S2)<<endl;
        }
        Q--;
    }
    return 0;
}
