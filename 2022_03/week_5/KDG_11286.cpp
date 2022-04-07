#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
#include <cmath>

using namespace std;



int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    pair <int, int> min;
    priority_queue<pair<int,int>, vector<pair<int,int>>,greater<pair<int,int>>> pq; 
    //�������� ������ ���� greater, �̷������� �����ϸ� �ּҰ��� ���� ���� ����, ù��° ���Ұ� ���ٸ� �ι�° ���Ұ� �������� ��������
    while (n--) {
        int x;
        cin >> x;
        if (x==0) { //x�� 0?
            if (!pq.empty()) { 
                min = pq.top(); //�ּҰ��� �켱���� queue�� ����
                cout << pq.top().second << '\n'; // ����� 
                pq.pop(); // ����
            }
            else cout << 0 << '\n'; //��������� 0���
        }
        else pq.push({ abs(x),x }); //���밪 x�� x�� �ִ´�.
    }
}