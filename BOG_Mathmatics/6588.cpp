#include <iostream>
#include <math.h>
using namespace std;

void PN(int num, char list[]) {	

	int tmp = sqrt(num);

	for (int i = 2; i <= tmp; i++) {
		if (list[i]) { continue; }
		for (int j = i + i; j <= num; j += i) {
			list[j] = 1;
		}
	}	
}

int main() {
	int num;
	char list[1000002] = { 0 };
	int a, b;
	PN(1000001, list);

	while (1) {
		scanf_s("%d", &num);
		if (!num) { break; }

		bool result = false;
		
		for (int i = 2; i <= num; i++) {
			if (list[i]) { continue; }

			int sPN = num - i;
			a = i;
			b = 0;
			if (!list[sPN]) {
				b = sPN;
				result = true;
				break;
			}
		}

		if (result) {
			printf("%d = %d + %d\n", num, a, b);
		}
		else {
			printf("Goldbach's conjecture is wrong.");
		}
	}
}