#include <iostream>
#include <cstdio>
#include <unordered_set>

#pragma warning(disable : 4996)
using namespace std;

int main() {

	int n;
	scanf("%d", &n);

	unordered_set<int> set;

	for (int i = 0; i < n; i++) {
		int num;
		scanf("%d", &num);
		set.insert(num);
	}
	
	int m;
	scanf("%d ", &m);

	int* arr2 = new int[m];
	for (int i = 0; i < m; i++)
		scanf("%d", &arr2[i]);

	for (int i = 0; i < m; i++) {
		if (set.find(arr2[i]) == set.end())
			arr2[i] = 0;
		else
			arr2[i] = 1;
	}

	for (int i = 0; i < m; i++)
		printf("%d ", arr2[i]);

	return 0;
}