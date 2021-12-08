#include "../std_lib_facilities.h"

int* ga = new int[10] {1,2,4,8,16,32,64,128,256,512};

int f(int* pa, int n)
{
    int* la = new int[10];
    for (int i = 0; i<10; i++)
    {
        la[i]=ga[i];
        cout << la[i] << ' ';
    }

    int *p = new int[n];
    cout << '\n';
    for (int i = 0; i<n; i++)
    {
        cout << p[i] << ' ';
    }
    cout << '\n';
    delete[] p;
}


int main()
{
    f(ga,10);

    int* aa = new int[10] {1,2,6,24,120,720,7*720,56*720,9*42*720,90*42*720};
    f(aa,10);

    return 0;
}
