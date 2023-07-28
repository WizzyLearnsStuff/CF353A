#include<iostream>

using namespace std;

int main() {
	int n;
	cin >> n;

	int domhist[4] = {0};
	int sumx = 0;
	int sumy = 0;

	for (int i = 0; i < n; i++) {
		int b, c;
		cin >> b >> c;
		domhist[(b & 1) << 1 | (c & 1)]++;
		sumx += b & 1; 
		sumy += c & 1;
	}

	sumx = sumx & 1;
	sumy = sumy & 1;

	if (sumx == 0 && sumy == 0) {
		cout << 0;
		return 0;
	}

	if (sumx && sumy && (domhist[2] > 0 || domhist[1] > 0)) {
		cout << 1;
		return 0;
	}

	cout << -1;
	return 0;
}
