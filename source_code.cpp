#include <iostream>

using std::cout;
using std::cin;

int main() {
    int limit;
    cin >> limit;
    int limitMinus = limit-=1;
    int limitPlus = limit+=1;
    int x = 1;
    int y = 1;
    for (x; x <= limitPlus; x++) {
        cout << y << " * " << x << " = " << x*y << "\n";
        if (x >= limit) {
            x = 1;
            if (y < limitPlus) {
                y+=1;
                cout << "The first factor is currently: " << y << "\n";
            }
            else if (y >= limit) {
                break;
            }
        }
    }
    return 0;
}
