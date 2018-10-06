//============================================================================
// Name        : Number.cpp
// Author      : Ein Sel
// Version     : v1
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <ctime>
#include <time.h>
#include <cstdlib>
using namespace std;

int main() {
	srand(time(0));
	int randnum = (rand() % 100) + 1;
	int guesses = 6;
	int x;
	cout << "This is a number guessing game" << endl;
	cout << "You will have 6 guesses" << endl;
	cout << "Your number is between 1 and 100" << endl;
	cout << "What's your first guess?" << endl;
	cin >> x;

	while (guesses > 0 && x != randnum) {
		guesses --;
		cout << "Wrong, guess again" << endl;
		cout << "You have " << guesses << " left" << endl;

		if (x > randnum) {
			cout << "Your guess was too high" << endl;
		}

		else {
			cout << "Your guess was too low" << endl;
		}
		cin >> x;
	}

	if (guesses == 0 && x != randnum){
		cout << "Sorry you loose" << endl;
		cout << "Your number was " << randnum << endl;
	}

	else{
		cout << "Congrats you win!" << endl;
	}
	return 0;
}
