#include <iostream>
#include <math.h>

int main() {
	long long A, B;
	scanf_s("%lld %lld", &A, &B);

	long long c;

	long long a, b;

	if (A >=B) {
		a = A;
		b = B;
	}	
	else {
		a = B;
		b = A;
	}

	c = a - b;
	if (c) {
		while (c < b) {
			a = b;
			b = c;
			c = a - b;
		}
	}	

	int result = 1;
	for (long long i = 1; i < b; i++) {
		result += pow(10,i);		
	}
	
	printf("%d", result);
}