#include <iostream>

int main() {
	int N;
	scanf_s("%d", &N);

	int result = 1;
	for (int i = N; i > 1; i--) {
		result *= i;
	}

	printf("%d", result);
}