
#include <iostream>
#include <string>

bool List[10000000];

using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int N, M;

	int left = 0, right = 0;

	cin >> N >> M;

	for (int i = 2; i <= M; i++)
	{
		if (!List[i]) {
			for (int j = i * i; j <= M; j += i) {
				if (j % i == 0)
					List[j] = true;
			}
		}

		if (!List[i] && i >= N)
			cout << i << "\n";
	}

	return 0;
}