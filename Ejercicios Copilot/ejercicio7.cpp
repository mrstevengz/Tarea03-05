#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the length of the vectors: ";
    cin >> n;

    int vector1[n];
    int vector2[n];
    int vector3[n];

    cout << "Enter the elements of the first vector:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> vector1[i];
    }

    cout << "Enter the elements of the second vector:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> vector2[i];
    }

    for (int i = 0; i < n; i++) {
        vector3[i] = vector1[i] + vector2[i];
    }

    cout << "The sum of the vectors is:" << endl;
    for (int i = 0; i < n; i++) {
        cout << vector3[i] << " ";
    }
    cout << endl;

    return 0;
}