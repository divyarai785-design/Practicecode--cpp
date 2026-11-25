// print the given patteren
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter number of rows: ";
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         cout << "*****" << endl;
//     }
//     return 0;
// }

// print n number of row or colom
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter number of rows: ";
//     cin >> n;
//     int m;
//     cout << "enter number of rows: ";
//     cin >> m;
//     for (int i = 1; i <= n; i++) //rows
//     {
//         for (int j = 1; j <= m; j++)  //colom
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// print the given pattern
// ****
// ****
// ****
// ****  (solid square)
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter number of rows: ";
//     cin >> n;
//     for (int i = 1; i <= n; i++) // rows
//     {
//         for (int j = 1; j <= n; j++) // colom
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     return 0;
// }/

// question 2 (in copy)
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter the side of square: ";
//     cin >> n;
//     for (int i = 1; i <= n; i++) // rows
//     {
//         for (int j = 1; j <= n; j++) // colom
//         {
//             cout << j << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// // question 3 (in copy)
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter the side of square: ";
//     cin >> n;
//     for (int i = 1; i <= n; i++) // rows
//     {
//         for (int j = 1; j <= n; j++) // colom
//         {
//             cout << i << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// alpthbetsquare
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter the side of square: ";
//     cin >> n;
//     for (int i = 1; i <= n; i++) // rows
//     {
//         for (int j = 1; j <= n; j++) // colom
//         {
//             cout << (char)(j + 64) << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// question 5 (in copy)
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter the side of square: ";
//     cin >> n;
//     for (int i = 1; i <= n; i++) // rows
//     {
//         for (int j = 1; j <= n; j++) // colom
//         {
//             cout << (char)(i + 64) << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// question 6(in copy)
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter the side of square: ";
//     cin >> n;
//     for (int i = 1; i <= n; i++) // rows
//     {
//         for (int j = 1; j <= n; j++) // colom
//         {
//             cout << (char)(i + 96) << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// question 7(in copy) * trangle
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter the side of square: ";
//     cin >> n;
//     for (int i = 1; i <= n; i++) // rows
//     {
//         for (int j = 1; j <= i; j++) // colom
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// question 8 number trangle
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter the side of square: ";
//     cin >> n;
//     for (int i = 1; i <= n; i++) // rows
//     {
//         for (int j = 1; j <= i; j++) // colom
//         {
//             cout << j << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// QUESTION 9(IN COPY )
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n; // Total rows
//     cout << "enter the number: ";
//     cin >> n;
//     for (int i = 1; i <= n; i++) // Rows
//     {
//         if (i % 2 != 0) // Odd row
//         {
//             for (int j = 1; j <= i; j++)
//             {
//                 cout << j << " "; // Print numbers
//             }
//         }
//         else // Even row
//         {
//             for (int j = 1; j <= i; j++)
//             {
//                 cout << char('A' + j - 1) << " ";
//             }
//         }

//         cout << endl;
//     }

//     return 0;
// }

// question 10 (ulta star triangle)
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter the number ";
//     cin >> n;
//     for (int i = n; i >= 1; i--)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// question 11 in copy
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter the number ";
//     cin >> n;
//     for (int i = n; i >= 1; i--)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << j;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// 12 question in copy
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number ";
    cin >> n;
    for (int i = 1; i >= n; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
    return 0;
}