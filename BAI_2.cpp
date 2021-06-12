// BAI_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*Câu 2: Viết một chương trình trong C ++ để tạo ra một mô hình như tam giác vuông bằng cách sử dụng số sẽ lặp lại số cho hàng đó. 
Ví dụ 
Input: 5
Output:                                                                                      
1                                                                                                             
22                                                                                                      
333                                                                                                         
4444                                                                                                         
55555 */

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << " nhap gia tri n = ";
    cin >> n;
    cout << "\n";
    //xuat ra  mo hinh tam giac vuong
    cout << " mo hinh tam giac vuong tuong ung voi n = " << n << " la : ";
    cout << "\n";
    for (int i = 1; i <= n; i++)// xet ca so chay tu 1->n
    {
        for (int j = 0; j < i; j++)// xet vong lap cho moi so 
        {
            cout << i;
        }
        cout << "\n";
    }
    return 0;
}
