/*
 * cpp_r6.cpp
 *
 *  Created on: 27 paü 2015
 *      Author: piot
 */
#include "std_lib_facilities.h"

int main() {
	cout << "ProszÍ wpisz wyraøenie (na razie tylko + lub -): ";
	int lval = 0;
	int rval;
	char op;
	int res;

	cin >> lval >> op >> rval;

	if (op=='+') {
		res = lval+rval;
	}
	else if (op=='-') {
		res = lval - rval;
	}

	cout << "Wynik: " << res << '\n';
	return 0;
}



