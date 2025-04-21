#include <iostream>
using namespace std;

double recursiveSeries(int n) {
    if (n == 0)
        return 30;
    else if (n == 1)
        return 10;
    else
        return recursiveSeries(n - 1) / 3;
}

int main() {

    system("chcp 1251 > nul"); //підключення української мови

    int n;
    cout << "Введіть номер члена ряду (n): ";
    cin >> n;

    cout << "Член ряду a[" << n << "] = " << recursiveSeries(n) << endl;
    return 0;
}
