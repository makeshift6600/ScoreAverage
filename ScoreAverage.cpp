/*
File name: ScoreAverage
Programmer: Jamen Cannady
Date: 09/25
Requirements: ask for three scores and display the average
*/

#include <iostream>
using namespace std;


int main()
{
    int score1, score2, score3, score4, score5, sum;
    double average;

    cout << "please enter your first score " << endl;
    cin >> score1;
    cout << "please enter your second score " << endl;
    cin >> score2;
    cout << "please enter your third score " << endl;
    cin >> score3;
    cout << "please enter your fourth score " << endl;
    cin >> score4;
    cout << "please enter your fifth score " << endl;
    cin >> score5;
    average = (score1 + score2 + score3 + score4 + score5) / 3;
    cout << "your average score is " << average;

}