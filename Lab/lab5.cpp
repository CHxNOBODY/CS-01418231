#include <iostream>
#include <vector>
#include <list>

using namespace std;

void printVector() {
    vector<int> v;
    int choice;

    while (true) {
        cout << "\n--- Vector Menu ---\n";
        cout << "1. Add element\n";
        cout << "2. Delete element (by index)\n";
        cout << "3. Display elements\n";
        cout << "4. Search element\n";
        cout << "5. Count elements\n";
        cout << "6. Clear vector\n";
        cout << "0. Back to main menu\n";
        cout << "Choose: ";
        cin >> choice;

        if (choice == 0) {
            break;   
        }
        else if (choice == 1) {
            int x;
            cout << "Enter value: ";
            cin >> x;
            v.push_back(x);
        }
        else if (choice == 2) {
            int index;
            cout << "Enter index: ";
            cin >> index;
            if (index >= 0 && index < v.size())
                v.erase(v.begin() + index);
            else
                cout << "Invalid index\n";
        }
        else if (choice == 3) {
            cout << "Vector: ";
            for (int x : v) cout << x << " ";
            cout << endl;
        }
        else if (choice == 4) {
            int x;
            cout << "Search value: ";
            cin >> x;
            bool found = false;
            for (int i = 0; i < v.size(); i++) {
                if (v[i] == x) {
                    cout << "Found at index " << i << endl;
                    found = true;
                }
            }
            if (!found) cout << "Not found\n";
        }
        else if (choice == 5) {
            cout << "Total elements: " << v.size() << endl;
        }
        else if (choice == 6) {
            v.clear();
            cout << "Vector cleared\n";
        }
        else {
            cout << "Invalid choice\n";
        }
    }
}

void printList() {
    list<int> l;
    int choice;

    while (true) {
        cout << "\n--- List Menu ---\n";
        cout << "1. Add element\n";
        cout << "2. Delete element (by value)\n";
        cout << "3. Display elements\n";
        cout << "4. Search element\n";
        cout << "5. Count elements\n";
        cout << "6. Clear list\n";
        cout << "0. Back to main menu\n";
        cout << "Choose: ";
        cin >> choice;

        if (choice == 0) {
            break;   
        }
        else if (choice == 1) {
            int x;
            cout << "Enter value: ";
            cin >> x;
            l.push_back(x);
        }
        else if (choice == 2) {
            int x;
            cout << "Enter value to delete: ";
            cin >> x;
            l.remove(x);
        }
        else if (choice == 3) {
            cout << "List: ";
            for (int x : l) cout << x << " ";
            cout << endl;
        }
        else if (choice == 4) {
            int x;
            cout << "Search value: ";
            cin >> x;
            bool found = false;
            for (int y : l) {
                if (y == x) found = true;
            }
            if (found) cout << "Found\n";
            else cout << "Not found\n";
        }
        else if (choice == 5) {
            cout << "Total elements: " << l.size() << endl;
        }
        else if (choice == 6) {
            l.clear();
            cout << "List cleared\n";
        }
        else {
            cout << "Invalid choice\n";
        }
    }
}


int main() {
    int choice;

    while (true) {
        cout << "\n--- MAIN MENU ---\n";
        cout << "1. Use Vector\n";
        cout << "2. Use List\n";
        cout << "0. Exit\n";
        cout << "Choose: ";
        cin >> choice;

        if (choice == 0) {
            cout << "Program Ended\n";
            break;
        }
        else if (choice == 1) {
            printVector();
        }
        else if (choice == 2) {
            printList();
        }
        else {
            cout << "Invalid choice\n";
        }
    }
    return 0;
}
