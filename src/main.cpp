#include <iostream>
#include "functions.cpp"


int main() {
    int b, p, m;
    cout << "b,p,m : ";
    cin >> b >> p >> m;

    int depth = 0;
    int result = find_mod(b, p, m, 1, depth);

    cout << "\n Результат = " << result << endl;
    cout << " макс глибина = " << depth << endl;

    return 0;
}