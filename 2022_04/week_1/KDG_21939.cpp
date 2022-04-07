#include<iostream>
#include<string>
#include<set>
#include<map>

using namespace std;
int N, M;

multiset<pair<int, int>>ms;
map<int, int>mm;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	cin >> N;
	int p(0), l(0);
	for (int i = 0; i < M; i++) {
		cin >> p >> l;
		ms.insert({ l,p }); //������ȣ�� ���̵�
		mm[p] = l; //���̵��� ������ȣ�� ��� ����
	}
	cin >> M;

	for (int i = 0; i < M; i++) {
		string commend;
		cin >> commend;
		if (commend == "add") {
			int p, l;
			cin >> p >> l;
			ms.insert({ l,p });//add�� �߰�
		}
		else if (commend == "recommend") {
			int x;
			cin >> x;
			if (x == 1) {
				cout << prev(ms.end())->second << '\n';
			}
			else {
				cout << ms.begin()->second << '\n';//x�� 1�ϰ��  ���� ����� ����  ���� ��ȣ
			}
		}
		else if (commend == "solved") {
			int p;
			cin >> p;
			ms.erase({ mm[p],p });
		}
	}
}