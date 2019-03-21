#include <iostream>
#include <cstdio>
#include <cmath>

#pragma warning (disable : 4996)

int visit_cnt = 0;
bool arrive = false;

void visit(int x, int y, int n, int r, int c) {

	if (arrive) return;
	if (n > 2) {
		for (int i = x; i < x + n; i += n / 2)
			for (int j = y; j < y + n; j += n / 2) {
				if (arrive) return;
				if ((r >= i && r < i + n / 2) && (c >= j && c < j + n / 2)) {
					visit(i, j, n / 2, r, c);

				}
				else
					visit_cnt += pow(n / 2 , 2);
			}
	}
	else {
		for (int i = x; i < x + 2; i++) {
			for (int j = y; j < y + 2; j++) {
				if (i == r && j == c) {
					arrive = true;
					return;
				}
				visit_cnt++;
			}
			if (arrive) return;
		}
	}

}

int main() {

	int n, r, c;
	scanf("%d %d %d", &n, &r, &c);

	int size = pow(2, n);

	visit(0, 0, size, r, c);

	printf("%d", visit_cnt);

	return 0;
}