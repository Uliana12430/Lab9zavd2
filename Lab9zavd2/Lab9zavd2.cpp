#include <iostream>
#include <Windows.h>
#include <cmath> 
#include <iomanip> 

using namespace std;

double calculateFunction(double x) {
    return sin(log(x) + exp(1)); 
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double a = 0.1, b = 5;
    int k;

    cout << "Введіть кількість поділок k: ";
    cin >> k;

    if (k <= 0) {
        cout << "k має бути натуральним числом!" << endl;
        return 1;
    }

    double h = (b - a) / k; 
    cout << fixed << setprecision(5);

    cout << "x\ty" << endl;
    for (int i = 0; i <= k; ++i) {
        double x = a + i * h;
        double y = calculateFunction(x);
        cout << x << "\t" << y << endl;
    }

    return 0;
}
