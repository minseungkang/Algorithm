#include <iostream>
#include <cstdio>

#define INT_MAX 2147483647
#pragma warning (disable : 4996)

int main() {
	int n;
	scanf("%d", &n);

	int cnt = 0;

	int* arr = new int[n + 1];
	arr[1] = 0;

	for (int i = 2; i <= n; i++) {
		int div_by_three = INT_MAX;
		if (i % 3 == 0) div_by_three = arr[i / 3] + 1;

		int div_by_two = INT_MAX;
		if (i % 2 == 0) div_by_two = arr[i / 2] + 1;

		int minus_one = arr[i - 1] + 1;

		int min = div_by_three < div_by_two ? div_by_three : div_by_two;
		min = min < minus_one ? min : minus_one;

		arr[i] = min;
	}

	printf("%d", arr[n]);
	delete[] arr;

	return 0;
}