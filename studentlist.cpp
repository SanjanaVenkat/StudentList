#include <iostream>
#include <vector>

using namespace std;

char response;

struct Student {
  char firstname[30];
  char lastname[30];
  int id;
  float gpa;
};


void printStudents(struct Student);
void addStudent(struct Student);
void deleteStudent(struct Student);
void quitStudentlist();

vector<Student*>* studentlist;

void addStudent() {
  //cout << "Test add" << endl;
  Student student;
  cout << "Enter student first name" << endl;
  cin >> student.firstname;
  cout << "Enter student last name" << endl;
  cin >> student.lastname;
  cout << "Enter student ID" << endl;
  cin >> student.id;
  cout << "Enter student GPA" << endl;
  cin >> student.gpa;
  cout << student.firstname << " " << student.lastname << ", " <<
 student.id << ", " << student.gpa << endl;
  studentlist.push_back(student);
}

void printStudents() {
  cout << "Test print" << endl;
  cout << studentlist << endl;

}


int main() {
  //  cout << "Enter A, P, D, or Q" << endl;

  
  //if (response == "A") {
      cout << "Adding loop running" << endl;
      addStudent();
      //  }
      //if (response == "P") {
      cout << "Printing loop running" << endl;
      printStudents();
      //}
      //if (response == "D") {
      cout << "Deleting loop running" << endl;
      //}
      //if (response == "Q") {
      cout << "Quitting" << endl;
      return 0;
      //}
  
    
   vector <Student*>* studentlist = new vector<Student*>();
}

