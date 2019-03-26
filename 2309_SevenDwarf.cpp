#include <iostream>
#include <cstdio>
#include <vector>
#include <climits>
#include <algorithm>
#pragma warning (disable : 4996)

#define LL long long
#define sci(d) scanf("%d", &d)
#define scs(s) scanf("%s", &s)
#define printi(d) printf("%d\n", d)
#define array(arr, n) arr = new int[n];

using namespace std;

int main() {

	int* arr;
	array(arr, 9);

	int sum = 0;

	for (int i = 0; i < 9; i++) {
		sci(arr[i]);
		sum += arr[i];
	}

	sort(arr, arr + 9);

	for (int i = 1 ; i < 9 ; i++)
		for (int j = 0; j < i; j++) {
			if (sum - arr[i] - arr[j] == 100) {
				for (int k = 0; k < 9; k++)
					if (k != i && k != j)
						printi(arr[k]);
				return 0;
			}
			
		}
			

	return 0;
}
