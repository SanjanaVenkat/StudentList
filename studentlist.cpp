#include <iostream>

using namespace std;

struct Student {
  char firstname[30];
  char lastname[30];
  int id;
  float gpa;
  int response;
};



int main()
{
  
  Student student;
  cout << "Enter student first name" << endl;
  cin >> student.firstname;
  cout << "Enter student last name" << endl;
  cin >> student.lastname;
  cout << "Enter student ID" << endl;
  cin >> student.id;
  cout << "Enter student GPA" << endl;
  cin >> student.gpa;
  cout << student.firstname << " " << student.lastname <<" ID:" << student.id << " GPA:";
  cout << student.gpa << endl;
  return 0;
}
