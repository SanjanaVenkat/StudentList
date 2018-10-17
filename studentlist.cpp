#include <iostream>
#include <vector>

using namespace std;

struct Student {
  char firstname[30];
  char lastname[30];
  int id;
  float gpa;
};

char response[6];

void printStudents(struct Student);
void addStudent(struct Student);
void deleteStudent(struct Student);
void quitStudentlist();

vector<Student*>* studentlist;

void addStudent() {
  cout << "Test add" << endl;
  //Student student;
  //cout << "Enter student first name" << endl;
  //cin >> student.firstname;
  //cout << "Enter student last name" << endl;
  //cin >> student.lastname;
  //cout << "Enter student ID" << endl;
  //cin >> student.id;
  //cout << "Enter student GPA" << endl;
  //cin >> student.gpa;
}

void printStudents() {
  cout << "Test print" << endl;
  //Student student;
  //cout << student.firstname << student.lastname << " ID:" << student.id << " GPA:" << student.gpa << endl;
}


int main() {
  do {
  cout << "Enter ADD, PRINT, DELETE, or QUIT" << endl;
  cin >> response;
  }
  
  while (response == "ADD" && response == "PRINT" && response == "DELETE" && response == "QUIT"); {
    cout << "Entered loop" << endl;
    if (response == "ADD") {
      cout << "Adding loop running" << endl;
      addStudent();
    }
    if (response == "PRINT") {
      cout << "Printing loop running" << endl;
      printStudents();
    }
    if (response == "DELETE") {
      cout << "Deleting loop running" << endl;
    }
    if (response == "QUIT") {
      cout << "Quitting" << endl;
      return 0;
    }
    else {
      cout << "Invalid input" << endl;
    }
  }
  
    
   vector <Student*>* studentlist = new vector<Student*>();
}

