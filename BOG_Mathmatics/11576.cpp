#include <iostream>
#include <stack>
#include <math.h>
using namespace std;

int main() {
	int A, B;
	scanf_s("%d %d", &A, &B);

	int m;
	scanf_s("%d", &m);

	int num[26];
	for (int i = 0; i < m; i++) {
		scanf_s("%d", &num[i]);
	}
	
	long long reNum = 0;	

	for (int i = 0; i < m; i++) {
		reNum += pow(A, m-1-i) * num[i];		
	}
	
	long long q = reNum;
	int r = 0;
	
	stack<int> s;
	long long preNum = q;
	while (q >= 0) {
		q = preNum / B;
		r = preNum % B;
		s.push(r);
		preNum = q;
		if (!q) { break; }
	}

	while (s.size()) {
		printf("%d ", s.top());
		s.pop();
	}
}
