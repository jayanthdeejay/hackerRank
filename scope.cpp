/*
https://www.hackerrank.com/challenges/30-scope

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;
	    Difference(vector<int> a){
        this->elements=a;
    }

*/

//Method that I wrote

    void computeDifference(){
        this->maximumDifference=0;
        vector<int>::iterator it,jt;
        for(it=elements.begin();it<elements.end();it++){
            for(jt=elements.begin()+1;jt<elements.end();jt++){
                if(this->maximumDifference<abs(*it-*jt)){
                    this->maximumDifference=abs(*it-*jt);
                }
            }
        }
    }




/*
}; // End of Difference class

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}
*/
