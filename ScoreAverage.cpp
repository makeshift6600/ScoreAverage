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
    int score1, score2, score3, sum;
    double average;

    cout << "please enter your first score " << endl;
    cin >> score1;
    cout << "please enter your second score " << endl;
    cin >> score2;
    cout << "please enter your third score " << endl;
    cin >> score3;
    sum = score1 + score2 + score3;
    average = sum / 3;
    cout << "your average score is " << average;

}