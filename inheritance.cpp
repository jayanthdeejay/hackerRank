/*
https://www.hackerrank.com/challenges/30-inheritance
*/
class Student :  public Person{
private:
    vector<int> testScores;
public:
  		Student(string firstName, string lastName, int id, vector<int>& scores):Person(firstName, lastName, id){
            this->testScores=scores;
        }
    char calculate(){
        int sum=0;
        for(std::vector<int>::iterator it = testScores.begin(); it != testScores.end(); ++it) {
            sum+=*it;
        }
        sum=sum/testScores.size();
        if(sum>=90){
            return 'O';
        }
        else if(sum>79 && sum<90){
            return 'E';
        }
        else if(sum>69 && sum<80){
            return 'A';
        }
        else if(sum>54 && sum<70){
            return 'P';
        }
        else if(sum>39 && sum<55){
            return 'D';
        }
        else{
            return 'T';
        }
    }
};

