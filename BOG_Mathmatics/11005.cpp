#include <iostream>
#include <stack>
using namespace std;

int main() {
	int N, B;

	cin >> N >> B;

	int q;
	char r;
	q = N / B;
	r = (char)(N % B) + 48;

	int tmp = 0;
	if (r >= 10) {
		tmp = (int)(r - 48) - 10;
		r = 'A' + tmp;
	}
	stack<char> result;
	while (q) {
		result.push(r);
		N = q;
		q = N / B;
		r = (char)(N % B) + 48;
	}

	while (result.size()) {
		cout << result.top();
		result.pop();
	}
}