#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
/**
 * @brief �� �� ������
 * @param a �� �� ���������
 * @param b �� �� ������
 * @return �� �� ����������
 */
int gcd(int a, int b) {
    int t;
    while (b != 0) {
        t = b;
        b = a % b;
        a = t;
    }
    return a;
}
/**
 * @brief ����
 * @return �����(�� ��������)
 */
int main()
{
    int n;
    int m;
    int a;
    cin >> n >> m;
    vector<vector<int>> field(n,vector<int> (m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
        {
            cin >> field[i][j];
        }
    }

}