// BAI_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*Câu 4: Viết chương trình nhập vào tên sinh viên, điểm trung bình 3 môn toán, lý, hóa từ điểm trung bình 3 môn xếp loại sinh viên đó thuộc loại nào.
- Giới hạn 40 sinh viên 1 lớp.
- Cách xếp loại
Điểm trung bình >= 9 là loại A
Điểm trung bình >= 7 và nhỏ hơn 9 là loại B
Điểm trung bình >=  5 và  nhỏ hơn 7 là loại C
Điểm trung binh < 5 là loại D 
- In danh sách sinh viên đã nhập theo lựa chọn của người dùng
+ Sắp xếp theo ĐTB từ cao đến thấp
+ Sắp xếp theo ĐTB từ thấp đến cao
+ Sắp xếp theo thứ tự bảng chữ cái
+ Sắp xếp dựa theo điểm toán cao nhất*/

#include <iostream>
using namespace std;
int main()
{
    int luachon1, luachon2;
    float toan[40], ly[40], hoa[40];
    float dtb[40];
    char xeploai[40];
    string hovaten[40];
    for (int i = 0; i < 40; i++)
    {
        // nhap vao ho va ten, diem toan, diem ly, diem hoa hoa //
        cout << " nhap ho va ten : ";
        cin >> hovaten[i];
        cout << "\n";
        cout << "nhap diem toan : ";
        cin >> toan[i];
        cout << "\n";
        cout << "nhap diem ly : ";
        cin >> ly[i];
        cout << "\n";
        cout << "nhap diem hoa : ";
        cin >> hoa[i];
        cout << "\n";
        dtb[i] = (toan[i] + ly[i] + hoa[i]) / 3;
        // xep loai sinh vien 
        if (dtb[i] >= 9)
        {
            xeploai[i] = 'A';
        }
        else if (dtb[i] >= 7 && dtb[i] < 9)
        {
            xeploai[i] = 'B';
        }
        else if (dtb[i] >= 5 && dtb[i] < 7)
        {
            xeploai[i] = 'C';
        }
        else
        {
            xeploai[i] = 'D';
        }
        //xet dieu kien tiep tuc hoac dung nhap thong tin 
        cout << " lua chon :  tiep tuc nhap : nhan so 1 -- hoac -- dung nhap : nhan so 0 : ";
        cin >> luachon1;
        cout << "\n";
        if (luachon1 == 0)
        {
            cout << " ban muon in danh dach sinh vien vua nhao theo dang nao : \n";
            cout << " sap xep diem trung binh tu thap den cao => nhan so : 1\n";
            cout << " sap xep diem trung binh tu cao den thap => nhan so : 2\n";
            cout << " sap xep theo thu tu bang chu cai => nhan so : 3\n";
            cout << " xin moi ban nhap lua chon : ";
            cin >> luachon2;
            cout << "\n";
            //sap xep diem trung binh tu thap den cao
            if (luachon2 == 1)
            {
                for (int k = 0; k < i; k++)
                {
                    for (int j = k + 1; j <= i; j++)
                    {
                        if (dtb[k] > dtb[j])
                        {
                            swap(dtb[k], dtb[j]);
                            swap(hovaten[k], hovaten[j]);
                            swap(toan[k], toan[j]);
                            swap(ly[k], ly[j]);
                            swap(hoa[k], hoa[j]);
                            swap(xeploai[k], xeploai[j]);
                        }
                    }
                }
                cout << "-------------------danh sach hoc sinh ---------------------\n";
                for (int k = 0; k <= i; k++)
                {
                    cout << "hovaten : " << hovaten[k] << ", diem toan : " << toan[k] << ", diem ly : " << ly[k] << ", diem hoa : " << hoa[k] << " dtb : " << dtb[k] << "xep loai : " << xeploai[i] << "\n";
                }
                break;
            }
            //sap xep diem trung binh tu cao den thap
            if (luachon2 == 2)
            {
                for (int k = 0; k <= i; k++)
                {
                    for (int j = k + 1; j <= i; j++)
                    {
                        if (dtb[k] < dtb[j])
                        {
                            swap(dtb[k], dtb[j]);
                            swap(hovaten[k], hovaten[j]);
                            swap(toan[k], toan[j]);
                            swap(ly[k], ly[j]);
                            swap(hoa[k], hoa[j]);
                            swap(xeploai[k], xeploai[j]);
                        }
                    }
                }
                cout << "-------------------danh sach hoc sinh ---------------------\n";
                for (int k = 0; k <= i; k++)
                {
                    cout << "hovaten : " << hovaten[k] << ", diem toan : " << toan[k] << ", diem ly : " << ly[k] << ", diem hoa : " << hoa[k] << " dtb : " << dtb[k] << "xep loai : " << xeploai[i] << "\n";
                }
                break;
            }
        }
    }
    return 0;
}

