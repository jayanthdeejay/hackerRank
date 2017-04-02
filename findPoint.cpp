/*
https://www.hackerrank.com/challenges/find-point
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t,px,py,qx,qy;
    cin>>t;
    while(t>0){
        cin>>px>>py>>qx>>qy;
        cout<<2*qx-px<<" "<<2*qy-py<<endl;
        t--;
    }
    return 0;
}
