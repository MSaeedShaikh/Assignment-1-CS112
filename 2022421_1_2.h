#include "2022421_1_1.h"

enum std_grade {A=1, B=2, C=3, D=4, F=5, U=6};

struct Grade{
    std_grade grade;
    int marks;
    void inline EnterGrade(){
        int temp;
        cout<<"Enter Grade for this course(A=1, B=2, C=3, D=4, F=5): ";
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
        cout<<"Enter Marks for this course: ";
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
    Grade SGrades[50] = {U, 0};
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
        if(index!=-1){
            DStudents[DStudentsNo]=EStudents[index];
            for(int i=index; i<EStudentsNo; i++){
                EStudents[i]=EStudents[i+1];
                SGrades[i]=SGrades[i+1];
            }
            EStudentsNo--;
            DStudentsNo++;
        }
        else{
            cout<<"This Student is not present in this course"<<endl;
        }
    }
    void inline EnterGrades(int RollNo){
        int index = FindStudent(RollNo);
        SGrades[index].EnterGrade();
        SGrades[index].EnterMarks();
    }
    void inline CourseDetails(){
        char temp;
        for(int i=0; i<EStudentsNo; i++){
            cout<<"Student Roll No.: "<<EStudents[i];
            if(SGrades[i].grade==U){
                cout<<" Ungraded"<<endl;
            }
            else{
                switch(SGrades[i].grade){
                    case(A):
                    temp = 'A';
                    break;
                    case(B):
                    temp = 'B';
                    break;
                    case(C):
                    temp = 'C';
                    break;
                    case(D):
                    temp='D';
                    break;
                    case(F):
                    temp = 'F';
                    break;
                }
                cout<<" Grades: "<<temp<<"and Marks: "<<SGrades[i].marks<<endl;
            }
        }
    }
};