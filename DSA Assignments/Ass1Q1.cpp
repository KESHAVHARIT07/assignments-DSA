#include <iostream>
using namespace std;

const int MAX = 100;

class ArrayOperations {
    int arr[MAX];
    int size;

public:
    ArrayOperations() {
        size = 0;
    }

    void create() {
        cout << "Enter number of elements: ";
        cin >> size;
        if (size > MAX) {
            cout << "Size exceeds maximum limit.\n";
            size = 0;
            return;
        }
        cout << "Enter " << size << " elements:\n";
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
    }

    void display() {
        if (size == 0) {
            cout << "Array is empty.\n";
            return;
        }
        cout << "Array elements: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void insert() {
        if (size == MAX) {
            cout << "Array is full. Cannot insert.\n";
            return;
        }

        int pos, element;
        cout << "Enter position to insert (0 to " << size << "): ";
        cin >> pos;
        if (pos < 0 || pos > size) {
            cout << "Invalid position.\n";
            return;
        }

        cout << "Enter element to insert: ";
        cin >> element;

        for (int i = size; i > pos; i--) {
            arr[i] = arr[i - 1];
        }

        arr[pos] = element;
        size++;

        cout << "Element inserted.\n";
    }

    void deleteElement() {
        if (size == 0) {
            cout << "Array is empty. Cannot delete.\n";
            return;
        }

        int pos;
        cout << "Enter position to delete (0 to " << size - 1 << "): ";
        cin >> pos;
        if (pos < 0 || pos >= size) {
            cout << "Invalid position.\n";
            return;
        }

        for (int i = pos; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }

        size--;

        cout << "Element deleted.\n";
    }

    void linearSearch() {
        if (size == 0) {
            cout << "Array is empty.\n";
            return;
        }

        int key, found = 0;
        cout << "Enter element to search: ";
        cin >> key;

        for (int i = 0; i < size; i++) {
            if (arr[i] == key) {
                cout << "Element found at position: " << i << endl;
                found = 1;
                break;
            }
        }

        if (!found) {
            cout << "Element not found.\n";
        }
    }
};

int main() {
    ArrayOperations ao;
    int choice;

    while (true) {
        cout << "\n——MENU——\n";
        cout << "1. CREATE\n";
        cout << "2. DISPLAY\n";
        cout << "3. INSERT\n";
        cout << "4. DELETE\n";
        cout << "5. LINEAR SEARCH\n";
        cout << "6. EXIT\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            ao.create();
            break;
        case 2:
            ao.display();
            break;
        case 3:
            ao.insert();
            break;
        case 4:
            ao.deleteElement();
            break;
        case 5:
            ao.linearSearch();
            break;
        case 6:
            cout << "Exiting program.\n";
            return 0;
        default:
            cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}
