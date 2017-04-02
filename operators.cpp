/*
https://www.hackerrank.com/challenges/30-operators
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    double mealCost=0;
    int tipPercent, taxPercent;
    cin>>mealCost;
    cin>>tipPercent;
    cin>>taxPercent;
    cout<<"The total meal cost is "<<round(mealCost+(mealCost*((double)tipPercent/100.00))+((double)mealCost*(taxPercent/100.00)))<<" dollars."<<endl;
    return 0;
}
