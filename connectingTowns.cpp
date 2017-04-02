/*
https://www.hackerrank.com/challenges/connecting-towns
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int T,N,V,P;
    cin>>T;
    while(T>0){
        cin>>N;
        P=1;
        while((N-1)>0){
            cin>>V;
            P*=V;
            P%=1234567;
            N--;
        }
        cout<<P<<endl;
        T--;
    }
    return 0;
}
