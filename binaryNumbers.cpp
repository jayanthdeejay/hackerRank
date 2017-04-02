/*
https://www.hackerrank.com/challenges/30-binary-numbers
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
    int n;
    cin >> n;
    int x;
    string bin="";
    while(n>0){
        bin=to_string(n%2)+bin;
        n=n/2;
    }
    for(int i=bin.length();i>0;i--){
        string key;
        for(int j=0;j<i;j++){
            key+="1";
        }
        if(bin.find(key)!= string::npos){
            cout<<key.length();
            return 0;
        }
    }
    return 0;
}
