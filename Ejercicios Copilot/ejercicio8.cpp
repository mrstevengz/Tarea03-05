#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the length of the vectors: ";
    cin >> n;

    int vector1[n];
    int vector2[n];

    cout << "Enter the elements of the first vector:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Element" << i + 1 << ": ";
        cin >> vector1[i];
    }
    cout << "Enter the elements of the second vector:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Element" << i + 1 << ": ";
        cin >> vector2[i];
    }

    int dotProduct = 0;
    for (int i = 0; i < n; i++)
    {
        dotProduct += vector1[i] * vector2[i];
    }
    
    cout << "The dot product of the two vectors is: " << dotProduct << endl;

}

