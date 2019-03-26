#include <iostream>
#include <cstdio>
#include <vector>
#include <climits>

#pragma warning (disable : 4996)

#define LL long long
#define sci(d) scanf("%d", &d)
#define scs(s) scanf("%s", &s)
#define printi(d) printf("%d", d)

using namespace std;

int main() {

	int n;
	sci(n);

	int** matrix = new int*[n];
	for (int i = 0; i < n; i++)
		matrix[i] = new int[n] {0, };

	for (int i = 0; i < n; i++)
		for (int j = 0; j <= i; j++)
			sci(matrix[i][j]);

	// fill default calculated values
	for (int i = 1; i < n; i++) {
		matrix[i][0] += matrix[i - 1][0];
		matrix[i][i] += matrix[i - 1][i - 1];
	}

	for (int i = 2; i < n; i++)
		for (int j = 1; j < i; j++) {
			matrix[i][j] += matrix[i - 1][j - 1] > matrix[i - 1][j] ? matrix[i - 1][j - 1] : matrix[i - 1][j];
		}

	int max = INT_MIN;
	for (int j = 0; j < n; j++)
		max = max > matrix[n - 1][j] ? max : matrix[n - 1][j];

	printi(max);

	return 0;
}
