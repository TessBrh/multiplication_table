#include <iostream>

using std::cout;

int main() {
    int limit = 12;
    int limitMinus = limit-=1;
    int x = 1;
    int y = 1;
    for (int x = 1; x <= limit; x++) {
        cout << y << " * " << x << " = " << x*y << "\n";
        if (x == limit) {
            x = 1;
            if (y <= limitMinus) {
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
