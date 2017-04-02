/*
https://www.hackerrank.com/contests/projecteuler/challenges/euler002/
*/
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long n, sum=0, a=1, b=2,t=0;
        cin >> n;
        while(b<n){
            if(b%2==0)
                sum+=b;
            t=a;
            a=b;
            b=t+b;
        }
        cout<<sum<<endl;
    }
    return 0;
}

