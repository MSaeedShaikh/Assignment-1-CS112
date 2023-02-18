#include <iostream>
using namespace std;

enum ELevel {Undergraduate=1, Masters=2, Doctorate=3};
enum Department {CS=1, CE=2, ES=3, ME=4, EE=5};
enum std_grade {A=1, B=2, C=3, D=4, F=5};

struct address{
    string house;
    string city;
    string country;
    void inline EnterAddress(){
        cout<<"Enter House No.: ";
        cin>>house;
        cout<<"Enter City: ";
        cin>>city;
        cout<<"Enter Country: ";
        cin>>country;
    }
};

struct Person{
    string name;
    int age;
    address address;
    ELevel education;
    void inline EnterName(){
        cout<<"Enter Name: ";
        cin>>name;
    }
    void inline EnterAge(){
        cout<<"Enter Age: ";
        cin>>age;
    }
    void inline EnterAddress(){
        address.EnterAddress();
    }
    void inline EnterEducation(){
        int temp;
        cout<<"Enter Education Level(1 for Undergraduate, 2 for Masters, 3 for Doctorate): ";
        cin>>temp;
        switch(temp){
            case(1):
            education=Undergraduate;
            break;
            case(2):
            education=Masters;
            break;
            case(3):
            education=Doctorate;
            break;
        }
    }
    void inline EnterPerson(){
        EnterName();
        EnterAge();
        EnterAddress();
        EnterEducation();
    }
    void inline EditPerson(){
        int temp;
        cout<<"What would you like to change?(1 for Name, 2 for Age, 3 for Address, 4 for Education Level): ";
        cin>>temp;
        switch(temp){
            case(1):
            EnterName();
            break;
            case(2):
            EnterAge();
            break;
            case(3):
            EnterAddress();
            case(4):
            EnterEducation();
            break;
        }
    }
};

struct Student{
    int roll_no;
    Person person;
    Department department;
    void inline EnterRollNo(){
        cout<<"Enter Roll No. of Student: ";
        cin>>roll_no;
    }
    void inline EnterPerson(){
        person.EnterPerson();
    }
    void inline EnterDepartment(){
        int temp;
        cout<<"Enter Department (CS=1, CE=2, ES=3, ME=4, EE=5): ";
        cin>>temp;
        switch(temp){
            case(1):
            department=CS;
            break;
            case(2):
            department=CE;
            break;
            case(3):
            department=ES;
            break;
            case(4):
            department=ME;
            break;
            case(5):
            department=EE;
            break;
        }
    }
    void inline EnterStudent(){
        EnterRollNo();
        EnterPerson();
        EnterDepartment();
    }
    void inline EditStudent(){
        int temp;
        cout<<"What would you like to change?(1 for Roll No., 2 for Personal Details, 3 for Department): ";
        cin>>temp;
        switch(temp){
            case(1):
            EnterRollNo();
            break;
            case(2):
            person.EditPerson();
            break;
            case(3):
            EnterDepartment();
        }
    }
};


struct Teacher{
    int id;
    Person person;
    int salary;
    Department department;
    void inline EnterId(){
        cout<<"Enter Admin Id: ";
        cin>>id;
    }
    void inline EnterPerson(){
        person.EnterPerson();
    }
    void inline EnterSalary(){
        cout<<"Enter Salary: ";
        cin>>salary;
    }
    void inline EnterDepartment(){
        int temp;
        cout<<"Enter Department (CS=1, CE=2, ES=3, ME=4, EE=5): ";
        cin>>temp;
        switch(temp){
            case(1):
            department=CS;
            break;
            case(2):
            department=CE;
            break;
            case(3):
            department=ES;
            break;
            case(4):
            department=ME;
            break;
            case(5):
            department=EE;
            break;
        }
    }
    void inline EditTeacher(){
        int temp;
        cout<<"What would you like to change?(1 for Id., 2 for Personal Details, 3 for Salary, 4 for Department): ";
        cin>>temp;
        switch(temp){
            case(1):
            EnterId();
            break;
            case(2):
            person.EditPerson();
            break;
            case(3):
            EnterSalary();
            case(4):
            EnterDepartment();
            break;
        }
    }
    void inline EnterTeacher(){
        EnterId();
        EnterPerson();
        EnterSalary();
        EnterDepartment();
    }
};


struct Admin{
    int id;
    Person person;
    int salary;
    void inline EnterId(){
        cout<<"Enter Admin Id: ";
        cin>>id;
    }
    void inline EnterPerson(){
        person.EnterPerson();
    }
    void inline EnterSalary(){
        cout<<"Enter Salary: ";
        cin>>salary;
    }
    void inline EnterAdmin(){
        EnterId();
        EnterPerson();
        EnterSalary();
    }
    void inline EditAdmin(){
        int temp;
        cout<<"What would you like to change?(1 for Id., 2 for Personal Details, 3 for Salary): ";
        cin>>temp;
        switch(temp){
            case(1):
            EnterId();
            break;
            case(2):
            person.EditPerson();
            break;
            case(3):
            EnterSalary();
        }
    }
};

struct Grade{
    std_grade grade;
    int marks;
    void inline EnterGrade(){
        int temp;
        cout<<"Enter Grade(A=1, B=2, C=3, D=4, F=5): ";
        cin>>temp;
        switch(temp){
            case(1):
            grade=A;
            break;
            case(2):
            grade=B;
            break;
            case(3):
            grade=C;
            break;
            case(4):
            grade=D;
            break;
            case(5):
            grade=F;
            break;
        }
    }
    void inline EnterMarks(){
        cout<<"Enter Marks: ";
        cin>>marks;
    }
};

struct Course{
    string name;
    string code;
    int TId;
    int EStudents[50] = {0};
    int EStudentsNo = 0;
    int DStudents[50] = {0};
    int DStudentsNo = 0;
    Grade SGrades[50] = {F, 0};
    void inline EnterName(){
        cout<<"Enter course name: ";
        cin>>name;
    }
    void inline EnterCode(){
        cout<<"Enter course code: ";
        cin>>code;
    }
    void inline EnterId(){
        cout<<"Enter Teacher Id: ";
        cin>>TId;
    }
    void inline EnterCourse(){
        EnterName();
        EnterCode();
        EnterId();
    }
    void inline EditCourse(){
        int temp;
        cout<<"What would you like to change?(1 for Course Name, 2 for Course Code, 3 for Teacher Id): ";
        cin>>temp;
        switch(temp){
            case(1):
            EnterName();
            break;
            case(2):
            EnterCode();
            break;
            case(3):
            EnterId();
            break;
        }
    }
    void inline EnterStudent(){
        cout<<"Enter student to be enrolled Roll no: ";
        cin>>EStudents[EStudentsNo++];
    }
    int FindStudent(int RollNo){
        int x=0;
        for(int i=0; i<EStudentsNo; i++){
            if(EStudents[i]==RollNo){
                return x;
            }
            x++;
        }
        return -1;
    }
    void inline DropStudent(int RollNo){
        int index = FindStudent(RollNo);
        DStudents[DStudentsNo]=EStudents[index];
        for(int i=index; i<EStudentsNo; i++){
            EStudents[i]=EStudents[i+1];
            SGrades[i]=SGrades[i+1];
        }
        EStudentsNo--;
        DStudentsNo++;
    }
};