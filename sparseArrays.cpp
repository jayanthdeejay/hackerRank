/*
https://www.hackerrank.com/challenges/sparse-arrays
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    int n=0,q=0;
    string query;
    cin>>n;
    vector<string> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>q;
    for(int i=0;i<q;i++){
        int count=0;
        cin>>query;
        for(int j=0;j<n;j++){
            if(query.compare(arr[j])==0){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
