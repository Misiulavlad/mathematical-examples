#include "util.h"

int main() {
    int size;
    string name;
    cout << "Input count of examples: ";
    cin >> size;
    while (size <= 0) {
        cout << "Please enter a valid number: ";
        cin >> size;
    }
    cout << "Input your name: ";
    cin >> name;
    cout << examples(size, name);

    return 0;
}
