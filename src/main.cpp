#include <iostream>

using namespace std;

int attackCount(int p, int a, int d1, int c, int d2) {
	auto ret = int{ 0 };

	if ((p - 1) % d1 < a) {
		ret += 1;
	}

	if ((p - 1) % d2 < c) {
		ret += 1;
	}

	return ret;
}

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int a, b, c, d;
	cin >> a >> b >> c >> d;

	int p, m, n;
	cin >> p >> m >> n;

	auto d1 = a + b;
	auto d2 = c + d;

	cout << attackCount(p, a, d1, c, d2) << '\n';
	cout << attackCount(m, a, d1, c, d2) << '\n';
	cout << attackCount(n, a, d1, c, d2);

	return 0;
}