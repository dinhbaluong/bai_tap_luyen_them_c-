// BAI_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*Câu 1: Viết chương trình C ++ để tìm phần tử xuất hiện nhiều nhất trong một mảng các số nguyên*/

#include <iostream>
using namespace std;
int main()
{
    int mang[50], n, max = 0, k = 0;
    cout << " nhap gia tri n = ";
    cin >> n;
    cout << "\n";
    cout << " nhap mang : \n";
    for (int i = 0; i < n; i++)
    {
        cout << "mang[" << i << "] = ";
        cin >> mang[i];
        cout << "\n";
    }
    cout << "xuat mang : ";
    for (int i = 0; i < n; i++)
    {
        cout << mang[i] << "\t";
    }
    //tim phan tu xuat hien nhieu nhat o trong mang :
    cout << " phan tu xuat hien nhieu nhat o trong mang la : ";
    // tim max la so lan xaut hien nhieu nhat cua 1 phan tu nao do o trong mang;
    for (int i = 0; i < n; i++)
    {
        int counter = 0;
        for (int j = 0; j < n; j++)
        {
            if (mang[i] == mang[j])
            {
                counter++;
            }
        }
        if (counter > max)
        {
            max = counter;
        }
    }
    // sau khi tim duoc max la so lan xuat hien nhieu nhat cua phan tu nao do trong mang => ta di xet lai xem phan tu nao co so lan xuat hien = max thi phan tu do xuat hien nhieu nhat
    for (int i = 0; i < n; i++)
    {
        if (k == mang[i])
        {
            continue;
        }
        int counter = 0;
        for (int j = 0; j < n; j++)
        {
            if (mang[i] == mang[j])
            {
                counter++;
            }
        }
        if (counter == max)
        {
            k = mang[i];
            cout << mang[i]<<"\t";
        }
    }
    return 0;
}

