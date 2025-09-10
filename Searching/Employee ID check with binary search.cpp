#include <iostream>
#include <algorithm> // for sort
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

    // Sort employee IDs for binary search
    sort(empIDs, empIDs + n);

    // Input employee ID to search
    cout << "\nEnter employee ID to search: ";
    cin >> key;

    // Binary Search logic
    int low = 0, high = n - 1, mid;
    while (low <= high) {
        mid = (low + high) / 2;

        if (empIDs[mid] == key) {
            cout << "\nEmployee ID found at index : " << mid << endl;
            found = true;
            break;
        } 
        else if (empIDs[mid] < key) {
            low = mid + 1;
        } 
        else {
            high = mid - 1;
        }
    }

    // If not found
    if (!found) {
        cout << "\nEmployee ID not found." << endl;
    }

    return 0;
}
