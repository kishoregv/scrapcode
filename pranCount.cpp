#include <iostream>
#include <string>

using namespace std;

int main () {
	string s = "()()((()()))";

	
	int length = sizeof(s)/sizeof(char);
	int count = 0, maxCount = 0, i= 0;
	while (i < length) {
		if (s[i] == '(') {
			count++;
		}

		if (count > maxCount) {
			maxCount = count;
		} 

		if (s[i] == ')') {
			count--;
		} 

		i++;

	}

	cout << "max count is " << maxCount;




}