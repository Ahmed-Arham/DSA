#include <iostream>
using namespace std;

int main() {
    int n, key;
    bool found = false;

    // Input number of employees
    cout << "Enter number of employees: ";
    cin >> n;

    int empIDs[n];

    // Input employee IDs
    cout << "\nEnter employee IDs: ";
    for (int i = 0; i < n; i++) {
        cin >> empIDs[i];
    }

    // Input employee ID to search
    cout << "\nEnter employee ID to search: ";
    cin >> key;

    // Linear Search logic
    for (int i = 0; i < n; i++) {
        if (empIDs[i] == key) {
            cout << "\nEmployee ID found at index: " << i << endl;
            found = true;
            break;
        }
    }

    // If not found
    if (!found) {
        cout << "\nEmployee ID not found." << endl;
    }

    return 0;
}
