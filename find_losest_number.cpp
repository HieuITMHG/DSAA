#include <iostream>
#include <math.h>

using namespace std;

int find_losest(int a[], int n, int x);

int main() {
	int x = 4;
	int n = 10;
	int a[n] = {1,2,3,6,7,8,9,10,11,12};
	cout << find_losest(a, n, x);
	return 0;
}


int find_losest(int a[],int n, int x) {
	int min = a[0];
	
	for(int i = 1; i < n; i++) {
		if(abs((a[i] - x)) <= abs(min - x) ){
			min =  a[i];
		}
	}
	
	return min;
}
