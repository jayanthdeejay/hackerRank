/*
https://www.hackerrank.com/challenges/30-dictionaries-and-maps
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <map>
using namespace std;


int main() {
    unordered_map<string,int> phoneBook;
    int n;
    cin>>n;
    string x;
    int y;
    for(int i=0;i<n;i++){
        cin>>x;
        cin>>y;
        phoneBook.insert(make_pair(x,y));
    }
    string key;
    while(cin>>key){
        unordered_map<string,int>::const_iterator got = phoneBook.find (key);
        if(got==phoneBook.end()){
            cout << "Not found"<<endl;
        }
        else{
            cout << got->first << "=" << got->second<<endl;
        }
    }
    return 0;
}
