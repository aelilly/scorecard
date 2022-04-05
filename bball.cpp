// bball.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int getScore(int);

int main()
{
	int size = 4, sumHome = 0, sumAway = 0;
	vector<int>scrAway(size);
	vector<int>scrHome(size);

	for (int i = 0; i < size; i++) {
		
		cout << "Q" << i + 1 << " Away team score: " << endl;
		scrAway[i] = getScore(i);
		sumAway += scrAway[i];

		cout << "Q" << i + 1 << " Home team score: " << endl;
		scrHome[i] = getScore(i);
		sumHome += scrHome[i];

		if (i == size - 1 && sumHome == sumAway) {
			cout << "It's a tie, one more quater" << endl;
			size++;
			scrAway.resize(size);
			scrHome.resize(size);
		}
	}
	cout << setw(7) << right;
	for (int i = 0; i < size; i++) {
		cout << "Q" << i + 1 << setw(2);
	}
	cout << setw(7) << "TOTAL" << endl;

	cout << "AWAY" << setw(4);
	for (int i = 0; i < size; i++) {
		cout << scrAway[i] << setw(3);
	}
	cout << setw(7) << sumAway << endl;

	cout << "HOME" << setw(4);
	for (int i = 0; i < size; i++) {
		cout << scrHome[i] << setw(3);
	}
	cout << setw(7) << sumHome << endl;

}

int getScore(int i) {
	int scr;
	do {
		cout << "Input score (0 or greater): ";
		cin >> scr;

		if (scr < 0) {
			cout << "Invalid Input, Try Again" << endl;
		}

	} while (scr < 0);
	return scr;
}

/*
Q1 Away team score:
Input score (0 or greater): -5
Invalid Input, Try Again
Input score (0 or greater): 28
Q1 Home team score:
Input score (0 or greater): 23
Q2 Away team score:
Input score (0 or greater): 27
Q2 Home team score:
Input score (0 or greater): 24
Q3 Away team score:
Input score (0 or greater): 26
Q3 Home team score:
Input score (0 or greater): 30
Q4 Away team score:
Input score (0 or greater): 13
Q4 Home team score:
Input score (0 or greater): 17
It's a tie, one more quater
Q5 Away team score:
Input score (0 or greater): 8
Q5 Home team score:
Input score (0 or greater): 8
It's a tie, one more quater
Q6 Away team score:
Input score (0 or greater): 9
Q6 Home team score:
Input score (0 or greater): 8
	  Q1 Q2 Q3 Q4 Q5 Q6  TOTAL
AWAY  28 27 26 13  8  9    111
HOME  23 24 30 17  8  8    110
*/