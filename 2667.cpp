#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

string arr[25]; //지도
int N, cnt; //지도크기, 단지 내 집 수
bool vi[25][25] = { false, }; //방문 여부
int pos[5][3] = {{-1,0},{1,0},{0,-1},{0,1}}; //상,하,좌,우
vector <int> ans; //단지


//깊이 우선 탐색
void dfs(int i, int j) {
	vi[i][j] = true; //방문 체크
	cnt++;
	
	for (int k = 0; k < 4; k++) {
		int newX = i + pos[k][0];
		int newY = j + pos[k][1];

		//1.지도 내에 있는지
		//2.집이 있는지
		//3.방문했었는지
		if (newX >= 0 && newX < N && newY >= 0 && newY < N && arr[newX][newY] == '1' && !vi[newX][newY]) {
			dfs(newX, newY);
		}
	}
}

int main() {
	int i, j;
	
	cin >> N; //지도크기 입력 받기

	for (int i = 0; i < N; i++) cin >> arr[i];

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (arr[i][j] == '1' && !vi[i][j]) {
				cnt = 0;
				dfs(i, j);
				ans.push_back(cnt);
			}
		}
	}

	sort(ans.begin(), ans.end());
	cout << ans.size() << endl;
	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i] << endl;
	}

	return 0;
}