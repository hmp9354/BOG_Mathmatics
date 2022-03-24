// 공식보고 작성. 백준에 돌리지 않음
#include <iostream>

int gcd(int A, int B) {
	int a = A;
	int b = B;	

	int c = a % b;
	while (c) {
		a = b;
		b = c;
		c = a % b;
	}

	return b;
}

int lcm(int a, int b) {
	return (a * b) / gcd(a, b);
}

int main() {
	int T;
	scanf_s("%d", &T);

	int A, B;
	for (int i = 0; i < T; i++) {
		scanf_s("%d %d", &A, &B);
		
		printf("%d\n", lcm(A, B));
	}
}