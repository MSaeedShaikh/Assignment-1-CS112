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
