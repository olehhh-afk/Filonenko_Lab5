#include <iostream>
using namespace std;

int main() {
    int n, m;
    cout << "Введіть розмір матриць (рядки та стовпці): ";
    cin >> n >> m;

    int a[n][m], b[n][m], c[n][m];

    cout << "Введіть елементи першої матриці:" << endl;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];

    cout << "Введіть елементи другої матриці:" << endl;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> b[i][j];

    cout << "Результат додавання матриць:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            c[i][j] = a[i][j] + b[i][j];
            cout << c[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
