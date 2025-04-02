#include <iostream>
using namespace std;
class SoPhuc
{
private:
    float thuc;
    float ao;
public:
    void nhap()
    {   
        static int i = 1;
        cout << "Nhap so phuc thu " << i << endl;
        cout << "Nhap phan thuc: ";
        cin >> thuc;
        cout << "Nhap phan ao: ";
        cin >> ao;
        i++;
    }
    void xuat()
    {
        char a='+';
        if(ao<0) a='-';
        cout << thuc << " "<<a<<" " <<abs(ao) << "i" << endl;
    }
    void Tong(SoPhuc sp2)
    {
        SoPhuc sp3;
        sp3.thuc = thuc + sp2.thuc;
        sp3.ao = ao + sp2.ao;
        cout << "Tong hai so phuc: ";
        sp3.xuat();
    }
    void Hieu(SoPhuc sp2)
    {
        SoPhuc sp3;
        sp3.thuc = thuc - sp2.thuc;
        sp3.ao = ao - sp2.ao;
        cout << "Hieu hai so phuc: ";
        sp3.xuat();
    }
    void Tich(SoPhuc sp2)
    {
        SoPhuc sp3;
        sp3.thuc = thuc * sp2.thuc - ao * sp2.ao;
        sp3.ao = thuc * sp2.ao + ao * sp2.thuc;
        cout << "Tich hai so phuc: ";
        sp3.xuat();
    }
    void Thuong(SoPhuc sp2)
    {
        SoPhuc sp3;
        sp3.thuc = (thuc * sp2.thuc + ao * sp2.ao) / (sp2.thuc * sp2.thuc + sp2.ao * sp2.ao);
        sp3.ao = (ao * sp2.thuc - thuc * sp2.ao) / (sp2.thuc * sp2.thuc + sp2.ao * sp2.ao);
        cout << "Thuong hai so phuc: ";
        sp3.xuat();
    }
};
