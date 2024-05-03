#include <iostream>
using namespace std;

int main() {
    int grades[8];
    int approved = 0;
    int failed = 0;
    int sum = 0;
    cout << "Enter the grades of the 8 students:" << endl;
    for (int i = 0; i < 8; i++) {
        cout << "Grade of student " << (i + 1) << ": ";
        cin >> grades[i];
        sum += grades[i];
        if (grades[i] >= 70) {
            approved++;
        } else {
            failed++;
        }
    }
    float avg = (float)sum / 8.0;
    cout << "Number of approved students: " << approved << endl;
    cout << "Number of failed students: " << failed << endl;
    cout << "Average grade of the group: " << avg << endl;
    return 0;
}