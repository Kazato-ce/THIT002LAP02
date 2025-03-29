#include <iostream>
using namespace std;
class Phanso
{
private:
    int tu, mau;
public:
    void nhap()
    {   static int i = 1;
        cout <<"Nhap phan so thu "<<i<<endl;
        cout << "Nhap tu so: ";
        cin >> tu;
        cout << "Nhap mau so: ";
        cin >> mau;
        i++;
        while (mau == 0)
        {
            cout << "Mau so phai khac 0. Nhap lai mau so: ";
            cin >> mau;
        }
    }
    void xuat()
    {   static int  t = 1;
        cout << "Phan so thu "<<t++<<": " << tu << "/" << mau << endl;
    }
    void rutgon()
    {
        int ucln = 1;
        for (int i = 1; i <= tu && i <= mau; i++)
        {
            if (tu % i == 0 && mau % i == 0)
                ucln = i;
        }
        tu /= ucln;
        mau /= ucln;
    }
    void Tong(Phanso ps2)
    {
        Phanso ps3;
        ps3.tu = tu * ps2.mau + mau * ps2.tu;
        ps3.mau = mau * ps2.mau;
        ps3.rutgon();
        cout << "Tong hai phan so: " << ps3.tu << "/" << ps3.mau << endl;
    }
    void Hieu(Phanso ps2)
    {
        Phanso ps3;
        ps3.tu = tu * ps2.mau - mau * ps2.tu;
        ps3.mau = mau * ps2.mau;
        ps3.rutgon();
        cout << "Hieu hai phan so: " << ps3.tu << "/" << ps3.mau << endl;
    }
    void Tich(Phanso ps2)
    {
        Phanso ps3;
        ps3.tu = tu * ps2.tu;
        ps3.mau = mau * ps2.mau;
        ps3.rutgon();
        cout << "Tich hai phan so: " << ps3.tu << "/" << ps3.mau << endl;
    }
    void Thuong(Phanso ps2)
    {
        Phanso ps3;
        ps3.tu = tu * ps2.mau;
        ps3.mau = mau * ps2.tu;
        ps3.rutgon();
        cout << "Thuong hai phan so: " << ps3.tu << "/" << ps3.mau << endl;
    }
    void Sosanh(Phanso ps2){
        if(ps2.tu * mau > tu * ps2.mau){
            cout << "Phan so 1 lon hon phan so 2" << endl;
        }else if(ps2.tu * mau < tu * ps2.mau){
            cout << "Phan so 1 nho hon phan so 2" << endl;
        }else cout<<"Hai phan so bang nhau"<<endl;
    }
};