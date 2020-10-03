#include<iostream>
using namespace std;
int main()
{
    int no_of_student , index ;
    cout << "ENTER NUMBER OF STUDENTS" << endl ;
    cin >> no_of_student;
    float *student_cgpa = new float[no_of_student ];

    cout << "Enter CGPA of Each student one by one" << endl;
    for ( int i=0 ; i<no_of_student ; i++ )
    {
        cin >> student_cgpa[i];
    }

    cout << "Enter the number of student to print his/her CGPA" << endl;
    cin  >>index ;
    cout << student_cgpa[index-1] << endl;

}
