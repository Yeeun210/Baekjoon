#include <iostream>
#include <algorithm>

using namespace std;

int cnt = 0; //사이클 개수
bool cycle[101] = { false, }; //사이클인지 확인
int node[101]; 
bool visited[101] = { false, }; //방문했는지 확인


bool dfs(int start, int current) {

	if (visited[current]) {
		return false;
	}

	visited[current] = true;

	//사이클인 경우
	if (start == current || dfs(start, node[current])) {
		cnt++;
		cycle[current] = true;
		return true;
	}

	return false;

}

int main() {
	int N;

	cin >> N;

	for (int i = 1; i <= N; i++) cin >> node[i];

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			visited[j] = cycle[j];
		}
		dfs(i, node[i]);
	}

	cout << cnt << endl;
	for (int i = 1; i <= N; i++) {
		if (cycle[i]) cout << i << endl;
	}

	return 0;
}