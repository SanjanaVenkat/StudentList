#include <iostream>
#include <vector>

using namespace std;

struct Student {
  char firstname[30];
  char lastname[30];
  int id;
  float gpa;
};

char response[10];

void printStudents(struct Student);
void addStudent(struct Student);
void deleteStudent(struct Student);
void quit(struct Student);

vector<Student*>* studentlist;

void addStudent(struct Student) {
  cout << "Test add" << endl;
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

int main() {
  do {
  cout << "Enter ADD, PRINT, DELETE, or QUIT" << endl;
  cin >> response;
  }
  while (response == "ADD"); {
    cout << "Adding student" << endl;
    addStudent();
  }
  
  if (response == "PRINT") {
    cout << "Printing students" << endl;
    printStudents();
    }
  
   if (response == "DELETE") {
   cout << "Deleting student" << endl;
    }

   if (response == "QUIT") {
     cout << "Quiting" << endl;
   }
   vector <Student*>* studentlist = new vector<Student*>();
}
//for ADD
//void addStudent(struct Student) {
  //cout << "Test Add" << endl;
  //Student student;
   //cout << "Enter student first name" << endl;
   //cin >> student.firstname;
   //cout << "Enter student last name" << endl;
   //cin >> student.lastname;
   //cout << "Enter student ID" << endl;
   //cin >> student.id;
   //cout << "Enter student GPA" << endl;
   // cin >> student.gpa;
   //}

  //for PRINT
  void printStudents(struct Student) {
  Student student;
  cout << student.firstname << " " << student.lastname <<" ID:" << student.id << " GPA:";
  cout << student.gpa << endl;
  }

