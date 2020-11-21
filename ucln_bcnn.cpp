#include <iostream>
using namespace std;
int UCLN(int a, int b)
{
    while (a != b)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }

    return a;
}

int BCNN(int a, int b)
{
    int kq = UCLN(a, b);
    return a * b / kq;
}

int main()
{
    int a, b;
    cout << "nhap 2 so a,b:";
    cin >> a >> b;
    cout << "UCLN cua 2 so a,b la:" << UCLN(a, b) << endl;
    cout << "BCNN cua 2 so a,b la:" << BCNN(a, b) << endl;
    return 0;
}