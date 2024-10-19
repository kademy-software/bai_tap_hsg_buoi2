#include <bits/stdc++.h>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;
    double delta = b * b - 4 * a * c;
    cout << fixed << setprecision(2);

    if (delta < 0) {
        cout << "NONE" << endl;
    } else if (delta == 0) {
        
        double x12 = -b / (2 * a);
        cout << x12 << endl;
    } else {
        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (-b - sqrt(delta)) / (2 * a);
        cout << x1 << " " << x2 << endl;
    }

    return 0;
}
