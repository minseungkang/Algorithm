#include <iostream>
#include <cstdio>

#pragma warning (disable : 4996)

using namespace std;

int answer[3];
int matrix[2200][2200];

void count_paper(int x, int y, int n) {
	int num = matrix[x][y];
	int flag = true;
	for (int i = x; i < x + n; i++) {
		for (int j = y; j < y + n; j++) {
			if (matrix[i][j] != num) {
				flag = false;
				break;
			}
		}
		if (!flag) break;
	}

	if (flag) answer[num + 1]++;
	else {
		for (int i = x; i < x + n; i += n / 3)
			for (int j = y; j < y + n; j += n / 3)
				count_paper(i, j, n / 3);
	}
}


int main() {
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			scanf("%d", &matrix[i][j]);
		}
	}

	count_paper(1, 1, n);

	cout << answer[0] << endl << answer[1] << endl << answer[2] << endl;

	return 0;
}