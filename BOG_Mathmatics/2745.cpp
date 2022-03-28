#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main() {
	string sent;
	int num;

	cin >> sent >> num;

	int result = 0;
	for (int i = sent.size() - 1; i >= 0; i--) {
		if (sent[i] >= 'A' && sent[i] <= 'Z') {
			int tmp = (int)(sent[i] - 'A') + 10;
			result += tmp * pow(num, (sent.size() - i - 1));			
		}
		else {			
			result += (int)(sent[i] - '0') * pow(num, (sent.size() - i - 1));
		}
	}

	cout << result;
}