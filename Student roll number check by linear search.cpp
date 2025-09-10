include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    int rollNumbers[n];
    cout << "Enter roll numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> rollNumbers[i];
    }

    char choice;
    do {
        int searchRoll;
        cout << "\nEnter roll number to search: ";
        cin >> searchRoll;

        bool found = false;
        for (int i = 0; i < n; i++) {
            if (rollNumbers[i] == searchRoll) {
                cout << "Roll number found at index position: " << i << endl;
                found = true;
                break;
            }
        }

        if (!found) {
            cout << "Roll number not found." << endl;
        }

        cout << "\nDo you want to search again? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "\nExiting program..." << endl;
    return 0;
}

