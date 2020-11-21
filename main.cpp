#include <iostream>
#include "header.h"
using namespace std;

void input()
{
    long long x;
    cout << "Nhap 1, 2, 3 de chon bai toan ban muon tinh.\n\n";
    cout << "\t0. Ket thuc.\n";
    cout << "\t1. Tinh so fibonacci thu k.\n";
    cout << "\t2. Tinh UCLN va BCNN cua x va y.\n";
    cout << "\t3. Xet xem so x nhap vao co tang dan hay giam dan va in ra chu so lon nhat va nho nhat.\n\n";
    cout << "Bai toan muon thuc hien la: ";
    cin >> x;
    cout << "\n";
    switch (x)
    {
        case 0:
            return;
            break;
        case 1:
            cout << "Nhap K: ";
            cin >> x;
            cout << "So fibonacci thu k la: " << fibo(x) << "\n";
            break;
        case 2:
            int y;
            cout << "Nhap x, y: ";
            cin >> x >> y;
            cout << "UCLN: " << UCLN(x, y) << "\n" << "BCNN: " << BCNN(x, y);
            break;
        case 3:
            cout << "Nhap x: ";
            cin >> x;
            if (checktangdangiamdan(x)) cout << "Day so tang dan.\n";
            else cout << "Day so giam dan.\n";
            cout << "Chu so nho nhat: " << min(x) << "\n";
            cout << "Chu so lon nhat: " << max(x) << "\n";
            break;
        default: input();
            break;
    }
    cout << "\n\n";
    input();
}

int main()
{
    input();
    return 0;
}
