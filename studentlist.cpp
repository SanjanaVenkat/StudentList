//Sanjana Venkat
//10.19.18
//Student list, where user can add, print, and delete students from a list using structs, vectors, and pointers
#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;
//initial variables for response of user and to keep running until quit
char response[20];
bool running = true;
//struct for student, holds their full name, student id, and gpa
struct Student {
  char firstname[30];
  char lastname[30];
  int id;
  float gpa;
};

//voids for three main functions of studentlist
void printStudents(struct Student);
void addStudent(struct Student);
void deleteStudent(struct Student);

//vector to hold structs of different students
vector<Student*>* studentlist;

//add student function
//reads in student information
//adds struct to studentlist vector
void addStudent(vector <Student*>* studentlist) {
  Student* student = new Student();
  cout << "Enter student first name" << endl;
  cin >> student->firstname;
  cout << "Enter student last name" << endl;
  cin >> student->lastname;
  cout << "Enter student ID" << endl;
  cin >> student->id;
  cout << "Enter student GPA" << endl;
  cin >> student->gpa;
  studentlist->push_back(student);
}

//function to print students
//prints out all students stored in studentlist
void printStudents(vector <Student*>* studentlist) {
  //cout << "Test print" << endl;
  for (int i = 0; i < studentlist->size(); i++) {
    Student* s = (*studentlist)[i];
    cout << s->firstname << " " << s->lastname << ", " << s->id << ", " << setprecision(3) << s->gpa <<endl;
  }
}

//reads in response of user
void getResponse(char response[10]) {
  cout << "Enter ADD, PRINT, DELETE, or QUIT" << endl;
  cin >> response;
  running == true;
}

int main() {
  //student list vector
  vector <Student*>* studentlist = new vector<Student*>();
  //gets first response of user
getResponse(response);
  while (running == true) {
    //runs if user enters add
    while (response[0] == 'A'|| response[0] == 'a' && response[1] == 'D' || response[1] == 'd' && response[2] == 'D' || response[2] == 'd') {
	cout << "Adding" << endl;
	addStudent(studentlist);
	getResponse(response);
	}
      //runs if user enters print
      while (response[0] == 'P'|| response[0] == 'p' && response[1] == 'R' || response[1] == 'r' && response[2] == 'I' || response[2] == 'i' && response[3] == 'N' || response[3] == 'n' && response[4] == 'T' || response[4] == 't')
     {
      printStudents(studentlist);
      getResponse(response);
           }
      //runs if user enters delete
      while (response[0] == 'D'|| response[0] == 'd' && response[1] == 'E' || response[1] == 'e' && response[2] == 'L' || response[2] == 'l' && response[3] == 'E' || response[3] == 'e' && response[4] == 'T' || response[4] == 't' && response[5] == 'E' || response[5] == 'e') {
      cout << "Deleting loop running" << endl;
      getResponse(response);
      
      }
      //quits if user enters quit
      if (response[0] == 'Q' || response[0] == 'q' && response[1] == 'U' || response[1] == 'u' && response[2] == 'I' || response[2] == 'i' && response[3] == 'T' || response[3] == 't') {
	cout << "Quitting" << endl;
	return 0;
      }
      else {
	cout << "Enter a valid response" << endl;
	getResponse(response);
      }
  }
    

}

