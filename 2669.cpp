#include <iostream>
#include <algorithm>

using namespace std;

int area[101][101];
int loc1_x,loc1_y,loc2_x,loc2_y;
int num = 0;


int main() {

	for (int k = 0; k < 4; k++) {
	
		cin >> loc1_x;
		cin >> loc1_y;
		cin >> loc2_x;
		cin >> loc2_y;

		for (int i = loc1_x; i < loc2_x; i++) {
			for (int j = loc1_y; j < loc2_y; j++) {
				area[i][j] = 1;
			}
		}
	}

	for (int i = 0; i < 101; i++) {
		for (int j = 0; j < 101; j++) {
			if (area[i][j] == 1) {
				num++;
			}
		}
	}

	cout << num;

	return 0;
}