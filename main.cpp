#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[])
{
    int *pa, *pb, temp, i;

    cout << "argc is " << argc << endl;

    int n = argc - 1;
    if (n <= 0) return 0;

    pa = new int[n];
    int *start = pa;

    // convert argv to int (manual, no atoi)
    for (i = 0; i < n; i++) {
        int value = 0;
        int j = 0;
        while (argv[i + 1][j] != '\0') {
            value = value * 10 + (argv[i + 1][j] - '0');
            j++;
        }
        *pa = value;
        pa++;
    }

    pa = start;
    cout << "Original: ";
    for (i = 0; i < n; i++) {
        cout << setw(3) << *pa;
        pa++;
    }
    cout << endl;

    pa = start;
    pb = start + n - 1;

    for (i = 0; i < n / 2; i++) {
        temp = *pa;
        *pa = *pb;
        *pb = temp;
        pa++;
        pb--;
    }

    pa = start;
    cout << "Reversed: ";
    for (i = 0; i < n; i++) {
        cout << setw(3) << *pa;
        pa++;
    }
    cout << endl;

    delete[] start;
    return 0;
}
