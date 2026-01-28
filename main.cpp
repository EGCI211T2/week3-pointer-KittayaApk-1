#include <iostream>
#include <iomanip>
#define SIZE 10

using namespace std;

int main(int argc,char *argv[]){
  int *pa, *pb, i, temp;
int a[SIZE] ={1,2,3,4,5,6,7,8,9,10}; 
pa = &a[0]; //pa =a;
cout<<"Original: ";
for (i=0; i<SIZE-1; i++ ,pa++){
   cout<<setw(3)<<*pa ;//<<endl;
  //cout<<pa<<endl;
}
cout<<setw(3)<<*pa<<endl;

pa = &a[0];  
pb = &a[SIZE-1];
for (i=0; i<SIZE/2; i++)
int main(int argc, char *argv[])
{
   temp = *pa;  
   *pa = *pb;  
   *pb = temp;
   pa++;  pb--;
}
pa=&a[0];
pb-=SIZE/2;
cout<<"Reversed: ";
for (i=0; i<SIZE-1; i++ ,pa++){
   cout<<setw(3)<<*pa ;//<<endl;
  //cout<<pa<<endl;
}
cout<<setw(3)<<*pa<<endl;
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