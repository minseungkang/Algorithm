#include <iostream>
#include <cstdio>
#include <vector>
#include <climits>

#pragma warning (disable : 4996)

#define LL long long
#define sci(d) scanf("%d", &d)
#define scs(s) scanf("%s", &s)
#define printi(d) printf("%d", d)
#define array(arr, n) arr = new int[n];

using namespace std;

int gcd(int a, int b) {
	if (b == 0) return a;
	else return gcd(b, a%b);
}

int main() {

	int n;
	sci(n);

	int* arr;
	array(arr, n);

	for (int i = 0; i < n; i++) sci(arr[i]);

	int pivot = arr[0];

	for (int i = 1; i < n; i++) {
		int gcd_num = gcd(pivot, arr[i]);
		printf("%d/%d\n", pivot / gcd_num, arr[i] / gcd_num);
	}

	return 0;
}
