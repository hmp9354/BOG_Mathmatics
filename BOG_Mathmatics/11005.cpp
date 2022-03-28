#include <iostream>
#include <stack>
using namespace std;

int main() {
	int N, B;

	cin >> N >> B;

	int q;
	char r;
	q = N / B;
	r = N % B;	
	
	stack<int> result;
	while (q) {
		result.push(r);
		N = q;
		q = N / B;
		r = N % B;
	}
	result.push(r);
	
	while (result.size()) {
		if (result.top() >= 10 && B > 10) {
			char tmp = 'A' + (result.top() - 10);
			cout << tmp;
		}
		else {
			cout << result.top();
		}
		result.pop();
	}
}