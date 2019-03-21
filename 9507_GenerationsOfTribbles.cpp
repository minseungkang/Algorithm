#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#pragma warning (disable : 4996)

const int N = 67;
using namespace std;
long long cache[N + 1];
long long koong(long long n) {
	long long ret = 1;
	if (cache[n] != 0) return cache[n];
	else if (n > 3) ret =  koong(n - 1) + koong(n - 2) + koong(n - 3) + koong(n - 4);
	else if (n == 3) ret = 4;
	else if (n == 2) ret = 2;
	
	cache[n] = ret;
	return ret;
}

int main() {
	int t;
	scanf("%d", &t);

	int* input = new int[t];
	for (int i = 0; i < t; i++) 
		scanf("%d", &input[i]);
	

	for (int i = 0; i < t; i++) {
		cout << koong(input[i]) << endl;
	}
	delete[](input);
		
	return 0;
}