#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

#pragma warning(disable : 4996)
using namespace std;

int main() {

	int n;
	scanf("%d", &n);

	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	sort(arr, arr + n);
	int sum_to_n = 0;
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum_to_n += arr[i];
		sum += sum_to_n;
	}
	cout << sum << endl;

	return 0;
}