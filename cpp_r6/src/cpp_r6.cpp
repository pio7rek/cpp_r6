/*
 * cpp_r6.cpp
 *
 *  Created on: 27 paü 2015
 *      Author: piot
 */
#include "std_lib_facilities.h"

int main() {
	cout << "ProszÍ wpisz wyraøenie (obs≥uga +, -, *, /, x - aby zakonczyc): ";
	int lval = 0;
	int rval;
	cin >> lval;
	if(!cin) {
		error("brak pierwszej liczby");
	}
	for (char op; cin >> op;) {
		if (op!='x') {
			cin >> rval;
		}
		if (!cin) {
			error("brak drugiej liczby");
		}
		switch (op) {
		case '+':
			lval +=rval;
			break;
		case '-':
			lval -=rval;
			break;
		case '*':
			lval *=rval;
			break;
		case '/':
			lval /=rval;
			break;
		default:
			cout << "Wynik: " << lval << '\n';
			return 0;
		}

	}
	error("Z≥e wyraøenie!");
}



