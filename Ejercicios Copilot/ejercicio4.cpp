#include <iostream>
using namespace std;

int main() {
    int grades[10];
    int sum = 0;
    cout << "Enter the grades of the 10 students:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Grade of student " << (i + 1) << ": ";
        cin >> grades[i];
        sum += grades[i];
    }
    float avg = (float)sum / 10.0;
    cout << "The average grade of the section is: " << avg << endl;
    return 0;
}