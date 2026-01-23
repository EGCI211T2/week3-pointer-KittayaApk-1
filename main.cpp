#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[])
{
    int n, i, temp;
    int *pa, *pb;

    // Show argc
    cout << "argc is " << argc << endl;

    cout << "How many numbers needed? ";
    cin >> n;

    pa = new int[n];

    for (i = 0; i < n; i++) {
        cout << "Input " << i + 1 << ": ";
        cin >> pa[i];
    }

    cout << "Original: ";
    for (i = 0; i < n; i++) {
        cout << setw(3) << pa[i];
    }
    cout << endl;

    pb = pa + n - 1;
    for (i = 0; i < n / 2; i++) {
        temp = *pa;
        *pa = *pb;
        *pb = temp;
        pa++;
        pb--;
    }

    pa -= n / 2;

    cout << "Reversed: ";
    for (i = 0; i < n; i++) {
        cout << setw(3) << pa[i];
    }
    cout << endl;

    delete[] pa;
    return 0;
}
