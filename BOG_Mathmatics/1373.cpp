// 틀린이유는 확인했지만 수정 하지 않음
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main() {
	string sent;
	cin >> sent;

	int q = sent.size() / 3;
	int r = sent.size() % 3;

	string result;
	int idx;
	if (r) {
		q++;		
	}
	
	int tr = r;
	for (int i = 0; i < q; i++) {
		int tmp = 0;
		while (3-r < 3) {
			tmp += (int)(sent[3 - r]-'0') * pow(2, r - 1);
			r--;
			result[i] = tmp;
			i++;
		}
		
		if (i < q) {
			result[i] = (int)(sent[(i * 3)-tr] - '0') * pow(2, 2)
				+ (int)(sent[(i * 3) -tr + 1] - '0') * pow(2, 1)
				+ (int)(sent[(i * 3) -tr + 2] - '0') * pow(2, 0);
		}
	}
	
	cout << result;
}