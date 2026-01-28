#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[])
{
    int n = argc - 1;
    int *pa = new int[n];
    int *start = pa;
    int *pb;
    int temp;

    cout << "argc is " << argc << endl;

    for (int i = 0; i < n; i++) {
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
    for (int i = 0; i < n; i++) {
        cout << setw(3) << *pa;
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
    cout << "Reversed: ";
    for (int i = 0; i < n; i++) {
        cout << setw(3) << *pa;
        pa++;
    }
    cout << endl;

    delete[] start;
    return 0;
}
