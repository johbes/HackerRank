#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

class Student{
    public:
    void input(const int a, const int b, const int c, const int d, const int e){
        scores[0] = a;
        scores[1] = b;
        scores[2] = c;
        scores[3] = d;
        scores[4] = e;
    }

    int calculateTotalScore(){
        int sum = 0;
        for(int i = 0;i < 5;i++){
            sum += scores[i];
        }
        return sum;
    }
    private:
    int scores[5];
};

int main(){
    return 0;
    int n;
    cin >> n;
    Student kristen;
    int a,b,c,d,e;
    cin >> a >> b >> c >> d >> e;
    kristen.input(a,b,c,d,e);
    int kristenTotalScore = kristen.calculateTotalScore();
    int counter = 0;
    for(int i = 1;i < n;i++){
        int a,b,c,d,e;
        cin >> a >> b >> c >> d >> e;
        Student s;
        s.input(a,b,c,d,e);
        if (s.calculateTotalScore() > kristenTotalScore){
            counter++;
        }
        
    }
    cout << counter << endl;
}