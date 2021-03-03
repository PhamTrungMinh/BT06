#include <iostream>
using namespace std;

void f(int *a, int n)
{
    cout << &f << endl;
    cout << &f[0] << endl;
}

int main()
{
    int a[10];
    cout << &a << endl;
    cout << &a[0] << endl;
    f(a,10);
}

//dia chi cua bien mang a va phan tu dau tien cua a giong nhau
