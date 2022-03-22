#include <iostream>

int main() {
	int a, b;
	scanf_s("%d %d", &a, &b);

	int* alist = new int[a];
	int* blist = new int[b];

	int aIndex = 0;
	int bIndex = 0;
	for (int i = a; i > 0; i--) {
		if (!(a % i)) {
			alist[aIndex] = i;
			aIndex++;
		}
	}

	for (int i = b; i > 0; i--) {
		if (!(b % i)) {
			blist[bIndex] = i;
			bIndex++;
		}
	}

	int aMin = 0;
	int bMin = 0;

	while (1) {
		if (alist[aMin] == blist[bMin]) { printf("%d\n", alist[aMin]); break; }

		else if (alist[aMin] > blist[bMin]) { aMin++; }
		else { bMin++; }
	}

	int aMul = 1;
	int bMul = 1;

	while (1) {
		if (a * aMul == b * bMul) {
			printf("%d", a * aMul);
			break;
		}

		else if (a * aMul > b * bMul) {
			bMul++;
		}
		else {
			aMul++;
		}
	}
}