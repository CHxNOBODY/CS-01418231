#include <iostream>
using namespace std;

int main() {
    int spares[4][6] = { {5, 0, 0, 0, 0, 4},
                         {0, 2, 0, 3, 0, 0},
                         {0, 0, 7, 0, 0, 0},
                         {8, 0, 0, 0, 9, 0} };

    int s = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            if(spares[i][j] != 0) {
                s++ ;
            }
        }
    }

    int presentspares[3][s];
    int k = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            if(spares[i][j] != 0) {
                presentspares[0][k] = i;
                presentspares[1][k] = j;
                presentspares[2][k] = spares[i][j];
                k++;
            }
        }
    }

    cout << "Present spares array: \n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < s; j++) {
            cout << presentspares[i][j] << " ";
        }
        cout << "\n";
    }
}