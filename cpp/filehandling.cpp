// #include <iostream>
// #include <string>
// #include <fstream>
// using namespace std;
// int main()
// {
//     int marks;
//     cin >> marks;
//     string name;
//     cin >> name;
//     ofstream student;
//     student.open("student.text", ios::app);
//     student << marks << endl;
//     student << name;
//     student.close();
//     cout << "Added data successfully";
//     return 0;
// }

// print first later
// #include <iostream>
// #include <fstream>
// using namespace std;
// int main()
// {
//     ofstream college("notice.txt");
//     college << "Welcome to C++ Programming";
//     college.close();
//     ifstream st("notice.txt");
//     char ch;
//     st.get(ch);
//     cout << ch;
//     st.close();
//     return 0;
// }

// print full code
// #include <iostream>
// #include <fstream>
// #include <string>
// using namespace std;
// int main()
// {
//     ofstream college("notice.txt");
//     college << "Welcome to C++ Programming";
//     college.close();
//     ifstream st("notice.txt");
//     string s;
//     getline(st, s);
//     cout << s;
//     st.close();
//     return 0;
// }

// #include <iostream>
// #include <fstream>
// #include <string>
// using namespace std;

// int main()
// {
//     ifstream student("student.txt");

//     string name;

//     while (getline(student, name))
//     {
//         cout << name << endl;
//     }

//     student.close();

//     return 0;
// }
#include <iostream>
#include <fstream>
using namespace std;
struct student
{
    int roll;
    int marks;
};
int main()
{
    student s1 = {102, 90};
    ofstream st("result.dat", ios::binary);
    st.write((char *)&s1, sizeof(s1));
    st.close();
    student s2;
    ifstream fin("result.dat", ios::binary);
    fin.read((char *)&s2, sizeof(s2));
    cout << "Roll Number: " << s2.roll << endl;
    cout << "Marks: " << s2.marks;
    fin.close();
    return 0;
}
