#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#pragma warning (disable : 4996)

using namespace std;

int main() {
	int len;
	cin >> len;

	int* arr = new int[len];
	int* cache = new int[len] {0, };

	for (int i = 0; i < len; i++) {
		scanf("%d", &arr[i]);
	}
	int max = 0;
	for (int i = 0; i < len; i++) {
		for (int j = 0; j <= i; j++) {
			if (arr[i] < arr[j] && cache[i] < cache[j])
				cache[i] = cache[j];
		}
		cache[i] += 1;
		if (cache[i] > max) max = cache[i];
	}

	cout << max << endl;



	return 0;
}