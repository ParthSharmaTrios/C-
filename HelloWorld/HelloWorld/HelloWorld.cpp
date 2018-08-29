// HelloWorld.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main() {
	
	int wage = 20;
	int hours;
	int netPay;

	cout << "How many hours you worked? ";
	cin >> hours;

	if (hours <= 40) {
		netPay = hours*wage;
	}

	else {
		int base = 40 * wage;
		int extraHours = hours - 40;
		int overTime = extraHours*(wage*1.5);

		netPay = base + overTime;
			
		
	}

	cout << "Your total net Pay is " << netPay;

	





	system("pause");



	return 0;
}
