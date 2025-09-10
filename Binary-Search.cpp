#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, med, x;
    cout << "Enter the length of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements in the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if (!is_sorted(arr, arr + n)) {
        
        sort(arr, arr + n);
   
}
    cout << "Enter the element you want to find: ";
    cin >> x;

    int lower = 0, high = n - 1;
    while (lower <= high) {
        med = (lower + high) / 2;

        if (arr[med] == x) {
            cout << "Found " << x << " at index value " << med << endl;
            return 0;
        }
        else if (arr[med] < x) {
            lower = med + 1;
        }
        else {
            high = med - 1;
        }
    }

    cout << x << " not found in the array." << endl;
    return 0;

}
