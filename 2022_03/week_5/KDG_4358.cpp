#include <iostream>>
#include<map>
#include<string>
using namespace std;

map<string, int> m;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	string s;
	int cnt(0);
	while (getline(cin, s)) {
		if (m.find(s) == m.end()) {
			m[s] = 1;
		} //���ڿ� ã�⸦ ���� ã��
		else {
			++m[s];
		}

		++cnt; //�� ����
	}

	cout << fixed; 
	cout.precision(4);//�Ҽ� 4��°
	for (auto it = m.begin(); it != m.end(); ++it) {
		cout << it->first << ' ' << it->second * 100 / (double)cnt << '\n';
	}

	return 0;
}