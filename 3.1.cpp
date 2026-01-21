#include <iostream>

using namespace std;

int main() {
    int height;

    cout << "Vvedit vysotu yalynky: ";
    cin >> height;

    // Малюємо ялинку
    for (int i = 1; i <= height; i++) {
        for (int j = 0; j < i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    // Стовбур
    cout << "#" << endl;

    return 0;
}
