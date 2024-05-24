#include <iostream>

using namespace std;

/*
below 25 - F
25 to 44 - E
45 to 49 - D
50 to 59 - C
60 to 79 - B
80 to 100 - A
*/

/*
age < 18
print -> not eligible for job
age >= 18
print ->  eligible for job
age >= 55 and age <= 57
print ->  eligible for job, but retirement soon
age > 57
print -> retirement time
*/

void get_grade(int marks)
{
    if (marks < 25)
        cout << "F" << endl;
    else if (marks < 44)
        cout << "E" << endl;
    else if (marks < 49)
        cout << "D" << endl;
    else if (marks < 59)
        cout << "C" << endl;
    else if (marks < 79)
        cout << "B" << endl;
    else if (marks < 100)
        cout << "A" << endl;
}

void get_job(int age)
{
    if (age < 18)
        cout << "not eligible for job.";
    else if (age <= 57)
    {
        cout << "eligible for job";
        if (age >= 55)
        {
            cout << ", but retirement soon.";
        }
    }
    else
        cout << "retirement soon.";
}

int main()
{
    int marks;
    cout << "Enter your marks : ";
    cin >> marks;
    get_grade(marks);
    int age;
    cout << "Age : ";
    cin >> age;
    get_job(age);
    return 0;
}