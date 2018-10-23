//Sanjana Venkat
//10.19.18
//Student list, where user can add, print, and delete students from a list using structs, vectors, and pointers
#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

//struct for student, holds their full name, student id, and gpa
struct Student {
  char firstname[1000];
  char lastname[1000];
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
  for (int i = 0; i < studentlist->size(); i++) {
    Student* s = (*studentlist)[i];
    cout << s->firstname << " " << s->lastname << ", " << s->id << ", " << setprecision(3) << s->gpa <<endl;
  }
}

//function to delete a student
//prompts user to enter student id for student to delete
//deletes all data relating to student based on id
void deleteStudent(vector <Student*>* studentlist) {
  int studentid;
  int index;
  bool idexists = false;
  cout << "Enter student id" << endl;
  cin >> studentid;
   for (int i = 0; i < studentlist->size(); i++) {
    Student* s = (*studentlist)[i];
    if (s->id == studentid) {
      index = i;
      idexists = true;
      break;
    }
  }
   if (idexists == true) {
   studentlist->erase(studentlist->begin()+index);
   cout << "Deleted student" << endl;
   }
   //if id doesn't exist in student list, returns this message
   else {
     cout << "ID doesn't exist in student list" << endl;
   }
}

//reads in response of user
void getResponse(char response[10]) {
  bool running = true;
  cout << "Enter ADD, PRINT, DELETE, or QUIT" << endl;
  cin >> response;
  running == true;
}

int main() {
  //student list vector
  vector <Student*>* studentlist = new vector<Student*>();
  //initial variable for response of user 
char response[10];
 bool running = true;
  //gets first response of user
getResponse(response);
  while (running == true) {
    //runs if user enters add
    if (response[0] == 'A' && response[1] == 'D' && response[2] == 'D' ) {
	addStudent(studentlist);
	getResponse(response);
	}
      //runs if user enters print
     else if (response[0] == 'P' && response[1] == 'R' && response[2] == 'I' && response[3] == 'N' && response[4] == 'T')
     {
      printStudents(studentlist);
      getResponse(response);
           }
      //runs if user enters delete
    else  if (response[0] == 'D'&& response[1] == 'E' && response[2] == 'L' && response[3] == 'E' && response[4] == 'T' && response[5] == 'E') {
      deleteStudent(studentlist);
      getResponse(response);
      
      }
      //quits if user enters quit
    else if (response[0] == 'Q' && response[1] == 'U' && response[2] == 'I' && response[3] == 'T') {
      cout << "Quitting" << endl;
	return 0;
      }
      //if invalid response, prompts user for new response
    else {
      cout << "Enter a valid response" << endl;
      getResponse(response);
    }
  }
    

}

