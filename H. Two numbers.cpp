#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double A, B;
    cin >> A >> B;

    double result = A / B;

    cout << "floor " << A << " / " << B << " = " << int(floor(result)) << endl;
    cout << "ceil " << A << " / " << B << " = " << int(ceil(result)) << endl;
    cout << "round " << A << " / " << B << " = " << int(round(result)) << endl;

    return 0;
}

