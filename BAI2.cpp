#include "Phanso.h"
using namespace std;
int main()
{
    Phanso ps1, ps2;
    ps1.nhap();
    ps1.rutgon();
    ps2.nhap();
    ps2.rutgon();
    ps1.xuat();
    ps2.xuat();
    ps1.Tong(ps2);
    ps1.Hieu(ps2);  
    ps1.Tich(ps2);
    ps1.Thuong(ps2);
    ps1.Sosanh(ps2);
    return 0;
}