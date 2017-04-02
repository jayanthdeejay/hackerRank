/*
https://www.hackerrank.com/challenges/array-left-rotation
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n=0,d=0;
    cin>>n;
    vector<int> arr(n);
    cin>>d;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int index=d%n;
    for(int i=index;i<n;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<index;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
