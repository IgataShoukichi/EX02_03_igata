// CPP2022ex02.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	const int DATA_NUM = 10;	// 配列の要素数

	// 10人の学生のテストの得点を格納した配列
	int point[] = { 85, 72, 63, 45, 100, 98, 52, 88, 74, 65 };
	int i, j;			// 配列の要素番号（ループカウンタ）
	char grade;			// 成績の評価

	for (i = 0; i < DATA_NUM - 1; i++) {
		for (j = i + 1; j < DATA_NUM; j++) {
			if (point[i] < point[j]) {
				int w = point[i];
				point[i] = point[j];
				point[j] = w;
			}
		}
		if (point[i] < 60) {
			break;
		}
		else {
			if (point[i] >= 80)grade = 'A';
			else if (point[i] >= 70)grade = 'B';
			else grade = 'C';
			cout << point[i] << "=" << grade << endl;
		}
	}
	return 0;
}