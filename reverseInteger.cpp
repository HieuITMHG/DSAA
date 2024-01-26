#include  <iostream>

using namespace std;

void reverse(int &n);

int main() {
	int n;
	cin >> n;
	reverse(n);
	
	cout << n << endl;
	
	return 0;
}

void reverse(int &n) {
	int c = n;
	n = 0;
	while(c != 0) {
		n = n*10;
		n = n + c%10;
		c/=10;
	}
	
}
