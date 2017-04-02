/*
https://www.hackerrank.com/challenges/30-review-loop
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    string x[n];
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    for(int j=0;j<n;j++){
        for(int i=0;i<x[j].size();i+=2){
            cout<<x[j][i];
        }
        cout<<" ";
        for(int i=1;i<x[j].size();i+=2){
            cout<<x[j][i];
        }
        cout<<endl;}
    return 0;
}
