#include <iostream>
using namespace std;
class  NgayThangNam
{
private:
    int iNgay,
        iThang,
        iNam;
public:
    void Xuat()
    {
        cout << "Ngay hien tai la: " << iNgay << "/" << iThang << "/" << iNam << endl;
    }
    void Nhap()
    {
        do {
            cout << "Nhap ngay: ";
            cin >> iNgay;
            cout << "Nhap thang: ";
            cin >> iThang;
            cout << "Nhap nam: ";
            cin >> iNam;

            if (iNam < 1 || iThang < 1 || iThang > 12 || iNgay < 1 || iNgay > 31) {
                cout << "Nhap sai, vui long nhap lai" << endl;
                continue;
            }

            bool isLeapYear = (iNam % 4 == 0 && iNam % 100 != 0) || (iNam % 400 == 0);
            int daysInMonth;

            if (iThang == 2) {
                daysInMonth = isLeapYear ? 29 : 28;
            } else if (iThang == 4 || iThang == 6 || iThang == 9 || iThang == 11) {
                daysInMonth = 30;
            } else {
                daysInMonth = 31;
            }

            if (iNgay > daysInMonth) {
                cout << "Nhap sai, vui long nhap lai" << endl;
                continue;
            }

            break;

        } while (true);
    }
    void NgayTiepTheo() {
        iNgay++;
        bool isLeapYear = (iNam % 4 == 0 && iNam % 100 != 0) || (iNam % 400 == 0);
        int daysInMonth;

        if (iThang == 2) {
            daysInMonth = isLeapYear ? 29 : 28;
        } else if (iThang == 4 || iThang == 6 || iThang == 9 || iThang == 11) {
            daysInMonth = 30;
        } else {
            daysInMonth = 31;
        }

        if (iNgay > daysInMonth) {
            iNgay = 1;
            iThang++;
            if (iThang > 12) {
                iThang = 1;
                iNam++;
            }
        }

        cout << "Ngay tiep theo la: " << iNgay << "/" << iThang << "/" << iNam << endl;
    }

};
