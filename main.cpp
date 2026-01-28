#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int *pa, *pb, temp;
    int n;

    cin >> n;               
    if (n <= 0) return 0;

    pa = new int[n];
    int *start = pa;

    for (int i = 0; i < n; i++) {
        cin >> *pa;
        pa++;
    }

    pa = start;
    cout << "Original:";
    for (int i = 0; i < n; i++) {
        cout << setw(4) << *pa;
        pa++;
    }
    cout << endl;

    pa = start;
    pb = start + n - 1;

    for (int i = 0; i < n / 2; i++) {
        temp = *pa;
        *pa = *pb;
        *pb = temp;
        pa++;
        pb--;
    }

    pa = start;
    cout << "Reversed:";
    for (int i = 0; i < n; i++) {
        cout << setw(4) << *pa;
        pa++;
    }
    cout << endl;

    delete[] start;
    return 0;
}
