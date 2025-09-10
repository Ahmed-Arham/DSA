#include <iostream>
#include <algorithm> // for sorting purpose
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

    // Ensure array is sorted for binary search
    sort(rollNumbers, rollNumbers + n);

    char choice;
    do {
        int searchRoll;
        cout << "\nEnter roll number to search: ";
        cin >> searchRoll;

        int low = 0, high = n - 1, mid;
        bool found = false;

        while (low <= high) {
            mid = (low + high) / 2;

            if (rollNumbers[mid] == searchRoll) {
                cout << "Roll number found at index position: " << mid << endl;
                found = true;
                break;
            } 
            else if (rollNumbers[mid] < searchRoll) {
                low = mid + 1;
            } 
            else {
                high = mid - 1;
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
