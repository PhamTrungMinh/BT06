#include <iostream>
using namespace std;

long x(int* a, int n)
{
    if(n=0) return a[0];
    return x(a, n-1) * a[n];
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++) cin >> a[i];
    cout << x(a,n+1);
}
