#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
/**
 * @brief че то делает
 * @param a че то принимает
 * @param b че то второе
 * @return че то возвращает
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
 * @brief маин
 * @return нолик(из фиксиков)
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