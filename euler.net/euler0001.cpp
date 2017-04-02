/*
https://www.hackerrank.com/contests/projecteuler/challenges/euler001
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
        long int n, sum=0, nth=0;;
        cin >> n;
        nth=(n-(n%3==0?3:n%3))/3;
        sum+=3*((nth*(nth+1))/2);
        nth=(n-(n%5==0?5:n%5))/5;
        sum+=5*((nth*(nth+1))/2);
        nth=(n-(n%15==0?15:n%15))/15;
        sum-=15*((nth*(nth+1))/2);
        cout<<sum<<endl;
    }
    return 0;
}

