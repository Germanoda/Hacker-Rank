#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

class Student{
    private:
    vector<int> scores;
    int nota,totalscore;
    public:
    void input(){
        for (int i = 0 ; i < 5 ; i++){
            cin >> nota;
            scores.push_back(nota);
        }
    }
    int calculateTotalScore(){
        for (int i = 0 ; i < 5 ; i++){
            totalscore = totalscore + scores[i];
        }
        return totalscore;
    }
};

int main() {
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students
    
    for(int i = 0; i < n; i++){
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0; 
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    // print result
    cout << count;
    
    return 0;
}
