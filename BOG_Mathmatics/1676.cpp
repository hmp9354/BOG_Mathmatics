// time over
#include <iostream>

int main() {
	int N;
	scanf_s("%d", &N);

	int result = 1;
	for (int i = N; i > 1; i--) {
		result *= i;
	}

	int numZ = 0;

	char cResult[502] = { 0 };

	int tmp = result;
	
	while (1) {					
		if (!(tmp % 10)) { 
			numZ++; 
			tmp /= 10;
		}
		else { break; }		
	}
	
	printf("%d", numZ);
}