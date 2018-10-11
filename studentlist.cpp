#include <iostream>
#include <vector>

using namespace std;

struct Student {
  char firstname[30];
  char lastname[30];
  int id;
  float gpa;
};

void printStudents(struct Student);
void addStudent(struct Student);
void deleteStudent(struct Student);
void quit(struct Student);

int response = 0;

vector<Student*>* studentlist;

int main() {
  cout << "Enter ADD, PRINT, DELETE, or QUIT" << endl;
  cin >> response;
  if (response = "ADD") {
  addStudent;
  cout << student;
  }
  if (response = "PRINT") {
    printStudents;
  }
  vector <Student*>* studentlist = new vector<Student*>();
  void addStudent(struct Student) {
  Student student;
  cout << "Enter student first name" << endl;
  cin >> student.firstname;
  cout << "Enter student last name" << endl;
  cin >> student.lastname;
  cout << "Enter student ID" << endl;
  cin >> student.id;
  cout << "Enter student GPA" << endl;
  cin >> student.gpa;
  }

  //for PRINT
  void printStudents(struct Student) {
  Student student;
  cout << student.firstname << " " << student.lastname <<" ID:" << student.id << " GPA:";
  cout << student.gpa << endl;
  }
  return 0;
}
