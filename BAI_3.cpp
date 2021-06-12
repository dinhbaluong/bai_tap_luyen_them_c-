// BAI_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*Câu 3: Viết một chương trình bằng C ++ để tạo ra một mô hình giống như một kim tự tháp với các số tăng lên 1. 
Ví dụ:
Input: 4
Output:                                                                                      
       1                                                               
      2 3                                                              
     4 5 6                                                             
    7 8 9 10 */

#include <iostream>
using namespace std;
int main()
{
    int n, counter = 1, m;
    cout << " nhap gia tri n = ";
    cin >> n;
    cout << "\n";
    m = n;
    for (int i = 1; i <= n; i++)
    {
        int z = 0;
        for (int j = 0; j < i; j++)
        {
            if (z == 0)
            {
                for (int k = 0; k < m; k++)
                {
                    if (counter >= 1 && counter <= 10)
                    {
                        cout << "     ";
                    }
                    else if (counter > 10 && counter <= 99)
                    {
                        cout << "     ";
                    }
                }
                z = 1;
                m--;
            }
            if (counter >= 1 && counter <= 10)
            {
                cout << counter << "         ";
            }
            else if (counter > 10 && counter <= 99)
            {
                cout << counter << "        ";
            }
            counter++;
        }
        cout << "\n";
    }
}
