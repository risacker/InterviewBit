#include<iostream>
#include<string>
using namespace std;

// Create Structure named 'student'
struct student{
    string name = "Robin";
    int rollno = 11;
    int marks = 86;
}s1;
int main()  {
    // Your code goes here
    
    
    // Don't change the below code
    cout<<s1.name<<endl;
    cout<<s1.rollno<<endl;
    cout<<s1.marks<<endl;
    return 0;
}