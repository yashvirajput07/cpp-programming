s#include <iostream>
using namespace std;

int main()
{
    float s1, s2, s3, s4, s5;
    float cgpa;
    
    cout << "Enter grade point of subject 1:";
    cin >> s1;
    
        cout << "Enter grade point of subject 2:";
    cin >> s2;
    
        cout << "Enter grade point of subject 3:";
    cin >> s3;
    
        cout << "Enter grade point of subject 4:";
    cin >> s4;
    
        cout << "Enter grade point of subject 5:";
    cin >> s5;
    
    cgpa = (s1 + s2 + s3 + s4 + s5) / 5;
    
    cout << "Your CGPA is:" << cgpa;
    
    return 0;
}