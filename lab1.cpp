#include <iostream>
#include <set>

using namespace std;

int main() {
    set<char> Aset;

    Aset.insert('X');
    Aset.insert('A');
    Aset.insert('S');
    Aset.insert('M');
    Aset.insert('K');

    set<char> Bset = Aset;

    Bset.erase('A');

    set<char> Nset = Bset;

    cout << "Aset: ";
    for (char c : Aset) {
        cout << c << " ";
    }
    cout << endl;

    cout << "Bset: ";
    for (char c : Bset) {
        cout << c << " ";
    }
    cout << endl;

    cout << "Nset: ";
    for (char c : Nset) {
        cout << c << " ";
    }
    cout << endl;

    return 0;
}
