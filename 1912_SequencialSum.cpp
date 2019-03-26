#include<iostream>
#include<cstdio>

#pragma warning (disable : 4996)

using namespace std;

int main() {

	int n;
	scanf("%d", &n);

	int max_before = -1001;
	int before = -1001;
	int maximum = -1001;


	for (int i = 0; i < n; i++) {
		int num;
		scanf("%d", &num);
		
		before = max_before + num;
		max_before = num > before ? num : before;
		maximum = max_before > maximum ? max_before : maximum;
	}

	printf("%d", maximum);

	return 0;
}