#include <iostream>

int main() {
	int N;
	scanf_s("%d", &N);

	int i = 2;
	while (1) {
		if (N == 1) { break; }

		if ((N % i)) {
			i++;
		}
		else {
			N /= i;
			printf("%d\n", i);
		}
	}

}