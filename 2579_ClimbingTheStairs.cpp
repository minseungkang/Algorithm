#include <iostream>
#include <cstdio>
#include <vector>
#include <utility>
#pragma warning (disable : 4996)

#define LL long long
#define INT_MAX 2147483647
#define INT_MIN -2147483648
using namespace std;


int main() {
	int n;
	scanf("%d", &n);
	pair<int, int> *cache = new pair<int, int>[n + 1];
	
	cache[0] = make_pair(0, 0);

	int point;
	scanf("%d", &point);

	cache[1] = make_pair(point, point);
	for (int i = 2; i <= n; i++) {
		scanf("%d", &point);
		
		cache[i].first = cache[i - 2].first > cache[i - 2].second ? cache[i - 2].first : cache[i - 2].second;
		cache[i].first += point;
		cache[i].second = cache[i - 1].first + point;

	}

	int max_point = 0;
	max_point = cache[n].first > cache[n].second ? cache[n].first : cache[n].second;

	printf("%d", max_point);
	return 0;
}
