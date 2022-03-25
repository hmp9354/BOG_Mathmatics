#include <iostream>

void gcd(int a, int b, int&k) {
	int c = a % b;
	if (!c) { k = b; }
	else {
		gcd(b, c, k);		
	}	
}
long long GCD_sum(int list[], int N) {
	long long result = 0;

	int c = 0;
	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			gcd(list[i], list[j], c);
			result += c;
		}		
	}

	return result;
}

int main() {
	int n, t;
	scanf_s("%d", &t);

	int list[102] = { 0, };
	for (int i = 0; i < t; i++) {
		scanf_s("%d", &n);

		for (int j = 0; j < n; j++) {
			scanf_s("%d", &list[j]);
		}
		printf("%lld\n", GCD_sum(list, n));
	}
}