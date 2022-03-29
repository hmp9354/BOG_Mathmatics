// 해결 못함
#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	string sent;
	cin >> sent;

	int q = 0;
	int r = 0;
	
	
	stack<int> s;
	int stIdx = 0;

	int tq;
	int tr;
	for (int i = sent.size() - 1; i >= 0; i--) {
		q = (int)(sent[i] - '0') / 2;
		r = (int)(sent[i] - '0') % 2;

		tq = q;
		tr = r;
		for (int j = 0; j < 3; j++) {			
			if (tq) {
				s.push(tr);
				tq = q / 2;
				tr = r % 2;
			}
			else if(i>=1) {
				s.push(tr);
				j++;
				while (j < 3) {
					s.push(0);
					j++;
				}
			}
		}
	}
	
	while (s.size()) {
		cout << s.top();
		s.pop();
	}

}