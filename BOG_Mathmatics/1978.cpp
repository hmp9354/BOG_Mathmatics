#include <iostream>

int main() {
	int N;
	scanf_s("%d", &N);

	int num;
	int result = 0;
	bool only = true;
	for (int i = 0; i < N; i++) {
		scanf_s("%d", &num);

		only = true;
		if (num == 1) { only = false; }
		for (int i = 2; i < num; i++) {
			if (!(num % i)) {
				only = false;
			}
		}

		if (only) { result++; }
	}

	printf("%d", result);
}