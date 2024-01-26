#include <iostream>

using namespace std;

bool ktr(int a[], int n);

int main() {
	
	int a[] = {1,2,3,4,5,5,4,3,2,1};
	
	cout << ktr(a, 10);
	
	return 0;
}

bool ktr(int a[], int n){
	int b[n];
	for(int i = n - 1; i >= 0; i--) {
		b[n-i-1] = a[i];
	}
	
	for(int i = 0; i < n; i++) {
		if(b[i] != a[i]) {
		return false;
		}
	}
	
	return true;
}
