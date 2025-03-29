#include <iostream>
using namespace std;
class DongHo
{
    private:
        int iGio, iPhut, iGiay; 
    public:
        void Nhap(){
            cout << "Nhap gio: "; cin >> iGio;
            while(iGio < 0 || iGio > 23){
                cout << "Gio khong hop le! Vui long nhap lai." << endl;
                cout << "Nhap gio: "; cin >> iGio;
            }
            cout << "Nhap phut: "; cin >> iPhut;
            while(iPhut < 0 || iPhut > 59){
                cout << "Phut khong hop le! Vui long nhap lai." << endl;
                cout << "Nhap phut: "; cin >> iPhut;
            }
            cout << "Nhap giay: "; cin >> iGiay;
            while(iGiay < 0 || iGiay > 59){
                cout << "Giay khong hop le! Vui long nhap lai." << endl;
                cout << "Nhap giay: "; cin >> iGiay;
            }
        }
        void Xuat(){
            cout << "Thoi gian hiem tai la " << iGio << ":" << iPhut << ":" << iGiay << endl;
        }
        void TinhCongThemmotgiay(){
            iGiay++;
            if(iGiay == 60){
                iGiay = 0;
                iPhut++;
                if(iPhut == 60){
                    iPhut = 0;
                    iGio++;
                    if(iGio == 24){
                        iGio = 0;
                    }
                }
            }
        }
};