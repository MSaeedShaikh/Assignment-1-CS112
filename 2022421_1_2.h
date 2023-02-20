#include "2022421_1_3.h"

struct Course{
    string name;
    string code;
    int TId=0;
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
    void inline EnterCourse(){
        EnterName();
        EnterCode();
    }
    void inline EditCourse(){
        int temp;
        cout<<"What would you like to change?(1 for Course Name, 2 for Course Code): ";
        cin>>temp;
        switch(temp){
            case(1):
            EnterName();
            break;
            case(2):
            EnterCode();
            break;
        }
    }
    void inline EnterStudent(int rollno){
        EStudents[EStudentsNo++]=rollno;
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
    bool inline DropStudent(int RollNo){
        int index = FindStudent(RollNo);
        if(index!=-1){
            DStudents[DStudentsNo]=EStudents[index];
            for(int i=index; i<EStudentsNo; i++){
                EStudents[i]=EStudents[i+1];
                SGrades[i]=SGrades[i+1];
            }
            EStudentsNo--;
            DStudentsNo++;
            return true;
        }
        else{
            cout<<"Student not in course"<<endl;
            return false;
        }
    }
    void inline EnterGrades(int index){
        SGrades[index].EnterGrade();
        SGrades[index].EnterMarks();
    }
    void inline StudentDetails(){
        int index, RollNo;
        string temp;
        cout<<"Enter Roll No of Student: ";
        cin>>RollNo;
        index = FindStudent(RollNo);
        if(index!=-1){
            cout<<"Student Roll No.: "<<EStudents[index];
            if(SGrades[index].grade==U){
                cout<<" Ungraded"<<endl;
            }
            else{
                switch(SGrades[index].grade){
                    case(1):
                    temp = 'A';
                    break;
                    case(2):
                    temp = 'B';
                    break;
                    case(3):
                    temp = 'C';
                    break;
                    case(4):
                    temp='D';
                    break;
                    case(5):
                    temp = 'F';
                    break;
                }
                cout<<" Grades: "<<temp<<"and Marks: "<<SGrades[index].marks<<endl;
            }
        }
        else{
            cout<<"Student not in course"<<endl;
        }
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
                    case(1):
                    temp = 'A';
                    break;
                    case(2):
                    temp = 'B';
                    break;
                    case(3):
                    temp = 'C';
                    break;
                    case(4):
                    temp='D';
                    break;
                    case(5):
                    temp = 'F';
                    break;
                }
                cout<<" Grades: "<<temp<<"and Marks: "<<SGrades[i].marks<<endl;
            }
        }
    }
};