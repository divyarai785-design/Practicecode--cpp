//*Bubble sort :- *//
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[5];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = 0; j < n - 1 - i; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 swap(arr[j], arr[j + 1]);
//             }
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;

// array delete first element //
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[7];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     for (int i = 0; i < n - 1; i++)
//     {
//         arr[i] = arr[i + 1];
//     }
//     n--;
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

// array delete last element //
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[7];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     n--;
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

// first occrence//
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int temp;
//     cin >> temp;
//     int index = -1;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == temp)
//         {
//             index = i;
//             break;
//         }
//     }
//     if (index != -1)
//     {
//         cout << "Element is found index  " << index << " ";
//     }
//     else
//     {
//         cout << "element is not found";
//     }
//     return 0;
// }

// last occrence
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int temp;
//     cin >> temp;
//     int index = -1;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == temp)
//         {
//             index = i;
//         }
//     }
//     if (index != -1)
//     {
//         cout << "Element is found index  " << index << " ";
//     }
//     else
//     {
//         cout << "element is not found";
//     }
//     return 0;
// }
// selection sort //
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     for (int i = 0; i < n - 1; i++)
//     {
//         int index = i;
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[j] < arr[index])
//             {
//                 index = j;
//             }
//         }
//         swap(arr[i], arr[index]);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

// incerstion sort
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> n;
//     }
//     for (int i = 1; i < n; i++)
//     {
//         int key = arr[i];
//         int j = i - 1;
//         while (j >= 0 && arr[j] > key)
//         {
//             arr[j + 1] = arr[j];
//             j--;
//         }
//         arr[j + 1] = key;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }
// #include <iostream>
// using namespace std;
// class base
// {
//     int a;

// public:
//     int b;
//     void inp()
//     {
//         cout << "enter a and b : ";
//         cin >> a >> b;
//     }
//     int geta()
//     {
//         return a;
//     }
// };
// class derived : public base
// {
//     int c;

// public:
//     void mul()
//     {
//         c = geta() * b;
//     }
//     void disp()
//     {
//         cout << "a = " << geta() << endl;
//         cout << "b = " << b << endl;
//         cout << "c = " << c << endl;
//     }
// };
// int main()
// {
//     derived d;
//     d.inp();
//     d.mul();
//     d.disp();
//     return 0;
// }