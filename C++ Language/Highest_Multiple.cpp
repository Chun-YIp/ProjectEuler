/* Author: Chun-Yip Tang*/
/* Date: September 7, 2017*/
/* For Project Euler: Problem 5*/

#include <iostream>
using namespace std;

/* Function responsible for checking if the number is divisible by all numbers from
   1 to 20*/
int checkDivisible(int checkNum) {
	// Starts from 1 because you can't modulo a number by 0
	for(int i = 1; i < 20; i++) {
		int remainder = checkNum % i;
		// Checking if the modulo returns 0. If not, it returns 0
		if(remainder != 0)
			return 0;
	}
	return checkNum;
}

int main() {
	int answer = 0;
	int num = 1;
	
	while(1) {
		answer = checkDivisible(num);
		if(answer > 0)
			break;
		else {
			num++;
		}
	}
	
	cout << answer;
	return 0;
}