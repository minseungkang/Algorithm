#include <iostream>
#include <cstdio>
#include <vector>
#include <climits>

#pragma warning (disable : 4996)

#define LL long long
#define sci(d) scanf("%d", &d)
#define scs(s) scanf("%s", &s)
#define printi(d) printf("%d\n", d)
#define array(arr, n) arr = new int[n];

using namespace std;

int main() {

	int a, b, c;
	sci(a); 
	sci(b); 
	sci(c);

	int ans1 = (a + b) % c;
	printi(ans1);
	printi(ans1);

	int ans2 = (a * b) % c;
	printi(ans2);
	printi(ans2);

	return 0;
}
