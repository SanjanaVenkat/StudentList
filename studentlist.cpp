#include <iostream>
#include <vector>

using namespace std;

char response[10];

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

void addStudent(vector <Student*>* studentlist) {
  //cout << "Test add" << endl;
  Student* student = new Student();
  cout << "Enter student first name" << endl;
  cin >> student->firstname;
  cout << "Enter student last name" << endl;
  cin >> student->lastname;
  cout << "Enter student ID" << endl;
  cin >> student->id;
  cout << "Enter student GPA" << endl;
  cin >> student->gpa;
  cout << student->firstname << " " << student->lastname << ", " <<
  student->id << ", " << student->gpa << endl;
  studentlist->push_back(student);
}

void printStudents(vector <Student*>* studentlist) {
  //cout << "Test print" << endl;
  for (int i = 0; i < studentlist->size(); i++) {
    Student* s = (*studentlist)[i];
    cout << s->firstname << " " << s->lastname << ", " << s->id << ", " << s->gpa <<endl;
  }
}


int main() {
  vector <Student*>* studentlist = new vector<Student*>();
  while(1) {
      cout << "Enter ADD, PRINT, DELETE, or QUIT" << endl;
      cin >> response;
      while (response[0] == 'A' && response[1] == 'D' && response[2] == 'D') {
	cout << "Adding" << endl;
	addStudent(studentlist);
	cout << "Enter ADD, PRINT, DELETE, or QUIT" << endl;
      cin >> response;
	}
      while (response[0] == 'P' && response[1] == 'R' && response[2] == 'I' && response[3] == 'N' && response[4] == 'T') {
      printStudents(studentlist);
cout << "Enter ADD, PRINT, DELETE, or QUIT" << endl;
 cin >> response;
      }
      cout << "Deleting loop running" << endl;
      cout << "Quitting" << endl;
      return 0;
  }
    

}

