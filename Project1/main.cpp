#include "util.h"

int main() {
    int size;
    string name;
    cout << "Input count of examples (max count is 100): ";
    cin >> size;
    while (size <= 0) {
        cout << "Please enter a valid number: ";
        cin >> size;
    }
    cout << "Input your name: ";
    cin >> name;
    cout << examples(size, name)<<endl;
    system("pause");
    system("cls");
    cout << "Do you want to decide agin? if yeah print Yes, if no print No: ";
    string decision;
    cin >> decision;
    if (decision != "Yes" || decision != "No") {
        cout << "Error";
        return -1;
    }
    if (decision == "Yes") {
        cout << "Input count of examples: ";
        cin >> size;
        cout << examples(size, name) << endl;
    } 
    return 0;
}
