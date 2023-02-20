#include "2022421_1_2.h"
using namespace std;

Student S[10];
int SNo=0;
Teacher T[5];
int TNo = 0;
Admin Ad[3];
int ANo = 0;
Course Co[5];
int CNo = 0;

int inline FindStudent(int RollNo){
    int x=0;
    for(int i=0; i<SNo; i++){
        if(S[i].roll_no==RollNo){
            return x;
        }
        x++;
    }
    return -1;
}

int inline FindTeacher(int Id){
    int x=0;
    for(int i=0; i<TNo; i++){
        if(T[i].id==Id){
            return x;
        }
        x++;
    }
    return -1;
}

int inline FindAdmin(int Id){
    int x=0;
    for(int i=0; i<ANo; i++){
        if(Ad[i].id==Id){
            return x;
        }
        x++;
    }
    return -1;
}

int inline FindCourse(string code){
    int x=0;
    for(int i=0; i<CNo; i++){
        if(Co[i].code==code){
            return x;
        }
        x++;
    }
    return -1;
}

void inline NewStudent(){
    S[SNo].EnterStudent();
    SNo++;
}

void inline EditStudent(){
    int RollNo, i;
    cout<<"Enter Roll No of Student to Edit: ";
    cin>>RollNo;
    i = FindStudent(RollNo);
    if(i!=-1){
        S[i].EditStudent();
    }
    else{
        cout<<"This Student is not valid"<<endl;
    }
}

void inline RemoveStudent(){
    int RollNo, index;
    cout<<"Enter Roll No of Student to Remove: ";
    cin>>RollNo;
    index = FindStudent(RollNo);
    if(index!=-1){
        for(int i=index; i<SNo; i++){
            S[i]=S[i+1];
        }
        SNo--;
    }
    else{
        cout<<"This student is not valid"<<endl;
    }
}

void inline StudentDetails(){
    Student temp;
    for (int i=0; i<SNo; i++){
        temp=S[i];
        cout<<"Roll #: "<<temp.roll_no<<", Name: "<<temp.person.name<<", Age: "<<temp.person.age;
        cout<<", Address: "<<temp.person.address.house<<", "<<temp.person.address.city<<", "<<temp.person.address.country<<", Department: ";
        switch(temp.department){
            case(1):
            cout<<"CS"<<endl;
            break;
            case(2):
            cout<<"CE"<<endl;
            break;
            case(3):
            cout<<"ES"<<endl;
            break;
            case(4):
            cout<<"ME"<<endl;
            break;
            case(5):
            cout<<"EE"<<endl;
            break;
        }
    }
}

void StudentOut(int rollno){
    Student temp = S[FindStudent(rollno)];
    cout<<"Roll #: "<<temp.roll_no<<", Name: "<<temp.person.name<<", Age: "<<temp.person.age;
    cout<<", Address: "<<temp.person.address.house<<", "<<temp.person.address.city<<", "<<temp.person.address.country<<", Department: ";
    switch(temp.department){
        case(1):
        cout<<"CS"<<endl;
        break;
        case(2):
        cout<<"CE"<<endl;
        break;
        case(3):
        cout<<"ES"<<endl;
        break;
        case(4):
        cout<<"ME"<<endl;
        break;
        case(5):
        cout<<"EE"<<endl;
        break;
    }
}

void inline NewTeacher(){
    T[TNo].EnterTeacher();
    TNo++;
}

void inline EditTeacher(){
    int id, i;
    cout<<"Enter Id of teacher to Edit: ";
    cin>>id;
    i = FindTeacher(id);
    if(i!=-1){
        T[i].EditTeacher();
    }
    else{
        cout<<"This teacher is not valid"<<endl;
    }
}

void inline RemoveTeacher(){
    int id, index;
    cout<<"Enter id of teacher to Remove: ";
    cin>>id;
    index = FindTeacher(id);
    if(index!=-1){
        for(int i=index; i<TNo; i++){
            T[i]=T[i+1];
        }
        TNo--;
    }
    else{
        cout<<"This teacher is not valid"<<endl;
    }
}


void inline TeacherDetails(){
    Teacher temp;
    for (int i=0; i<SNo; i++){
        temp=T[i];
        cout<<"Id #: "<<temp.id<<", Name: "<<temp.person.name<<", Age: "<<temp.person.age;
        cout<<", Address: "<<temp.person.address.house<<", "<<temp.person.address.city<<", "<<temp.person.address.country<<"Salary: "<<temp.salary<<", Department: ";
        switch(temp.department){
            case(1):
            cout<<"CS"<<endl;
            break;
            case(2):
            cout<<"CE"<<endl;
            break;
            case(3):
            cout<<"ES"<<endl;
            break;
            case(4):
            cout<<"ME"<<endl;
            break;
            case(5):
            cout<<"EE"<<endl;
            break;
        }
    }
}

void inline TeacherOut(int id){
    Teacher temp = T[FindTeacher(id)];
    cout<<"Id #: "<<temp.id<<", Name: "<<temp.person.name<<", Age: "<<temp.person.age;
    cout<<", Address: "<<temp.person.address.house<<", "<<temp.person.address.city<<", "<<temp.person.address.country<<"Salary: "<<temp.salary<<", Department: ";
    switch(temp.department){
        case(1):
        cout<<"CS"<<endl;
        break;
        case(2):
        cout<<"CE"<<endl;
        break;
        case(3):
        cout<<"ES"<<endl;
        break;
        case(4):
        cout<<"ME"<<endl;
        break;
        case(5):
        cout<<"EE"<<endl;
        break;
    }
}

void inline NewAdmin(){
    Ad[ANo].EnterAdmin();
    ANo++;
}

void inline EditAdmin(){
    int id, i;
    cout<<"Enter Id of admin to Edit: ";
    cin>>id;
    i = FindAdmin(id);
    if(i!=-1){
        Ad[i].EditAdmin();
    }
    else{
        cout<<"This admin is not valid"<<endl;
    }
}

void inline RemoveAdmin(){
    int id, index;
    cout<<"Enter id of admin to Remove: ";
    cin>>id;
    index = FindAdmin(id);
    if(index!=-1){
        for(int i=index; i<ANo; i++){
            Ad[i]=Ad[i+1];
        }
        ANo--;
    }
    else{
        cout<<"This admin is not valid"<<endl;
    }
}

void inline NewCourse(){
    Co[CNo].EnterCourse();
    CNo++;
}

void inline EditCourse(){
    int index;
    string code;
    cout<<"Enter Course code: ";
    cin>>code;
    index = FindCourse(code);
    if(index!=-1){
        Co[index].EditCourse();
    }
    else{
        cout<<"Course does not exist"<<endl;
    }
}

void inline RemoveCourse(){
    int index;
    string code;
    cout<<"Enter Course code: ";
    cin>>code;
    index = FindCourse(code);
    if(index!=-1){
        for(int i=index; i<CNo; i++){
            Co[i]=Co[i+1];
        }
        CNo--;
    }
    else{
        cout<<"Course does not exist"<<endl;
    }
}

void inline AllocCourse(){
    string code;
    int Tid, Ci, Ti;
    cout<<"Enter Course code: ";
    cin>>code;
    Ci = FindCourse(code);
    if(Ci!=-1){
        cout<<"Enter Teacher Id: ";
        cin>>Tid;
        Ti=FindTeacher(Tid);
        if(Ti!=-1){
            Co[Ci].TId=Tid;
        }
        else{
            cout<<"Teacher does not exist"<<endl;
        }
    }
    else{
        cout<<"Course does not exist"<<endl;
    }
}

void inline DeallocCourse(){
    string code;
    int Ci;
    cout<<"Enter Course code: ";
    cin>>code;
    Ci = FindCourse(code);
    if(Ci!=-1){
        Co[Ci].TId=0;
    }
    else{
        cout<<"Course does not exist"<<endl;
    }
}

void inline CourseDetails(){
    Course temp;
    for(int i=0; i<CNo; i++){
        temp=Co[i];
        cout<<"Name: "<<temp.name<<", Code: "<<temp.code;
        if(temp.TId==0){
            cout<<", Unallocated to teacher"<<endl;
        }
        else{
            cout<<", Allocated to Teacher Id: "<<temp.TId<<endl;
        }
    }
}

void inline StudentECourses(int rollno){
    string code;
    int Ci, Si;
    Student temp = S[FindStudent(rollno)];
    for(int i=0; i<temp.ENo; i++){
        code = temp.ECourses[i];
        Ci=FindCourse(code);
        Si=Co[Ci].FindStudent(rollno);
        if(Co[Ci].SGrades[Si].grade==U){
            cout<<"Course Id: "<<code<<endl;
        }
    }
}

void inline StudentCCourses(int rollno){
    string code;
    int Ci, Si;
    Student temp = S[FindStudent(rollno)];
    for(int i=0; i<temp.ENo; i++){
        code = temp.ECourses[i];
        Ci=FindCourse(code);
        Si=Co[Ci].FindStudent(rollno);
        if(Co[Ci].SGrades[Si].grade!=U){
            cout<<"Course ID: "<<code<<endl;
            cout<<"Grade in Course "<<code<<": ";
            switch(Co[Ci].SGrades[Si].grade){
                case(1):
                cout<<'A';
                break;
                case(2):
                cout<<'B';
                break;
                case(3):
                cout<<'C';
                break;
                case(4):
                cout<<'D';
                break;
                case(5):
                cout<<'F';
                break;
            }
            cout<<", Marks: "<<Co[Ci].SGrades[Si].marks<<endl;
        }
    }
}

void inline StudentDCourses(int rollno){
    int Ci, Si;
    Student temp = S[FindStudent(rollno)];
    for(int i=0; i<temp.DNo; i++){
        cout<<"Course ID: "<<temp.DCourses[i]<<endl;
    }
}

void inline StudentTeacherView(int rollno){
    string code;
    int Ci, Ti;
    Student temp = S[FindStudent(rollno)];
    for(int i=0; i<temp.ENo; i++){
        code = temp.ECourses[i];
        Ci=FindCourse(code);
        cout<<"Course Code: "<<code<<", ";
        Ti=Co[Ci].TId;
        if(Ti!=0){
            cout<<"Teacher Id: "<<Ti<<endl;
        }
        else{
            cout<<"no allocated Teacher"<<endl;
        }
    }
}

void inline EnrollStudent(int rollno){
    string code;
    int Ci;
    cout<<"Enter code of course to enroll: ";
    cin>>code;
    Ci=FindCourse(code);
    if(Ci!=-1){
        Co[Ci].EnterStudent(rollno);
        S[rollno].ECourses[S[rollno].ENo]=code;
        S[rollno].ENo++;
    }
    else{
        cout<<"This course does not  exist";
    }
}

void inline DropStudent(){
    int rollno, Si, Ci;
    bool dropped;
    string code;
    cout<<"Enter Student Roll No.: ";
    cin>>rollno;
    Si=FindStudent(rollno);
    if(Si!=-1){
        cout<<"Enter Course code: ";
        cin>>code;
        Ci=FindCourse(code);
        if(Ci!=-1){
            dropped = Co[Ci].DropStudent(rollno);
            if(dropped){
                int temp;
                temp=S[Si].FindCourse(code);
                S[Si].DCourses[S[Si].DNo]=S[Si].ECourses[temp];
                for(int i=temp; i<S[Si].ENo; i++){
                    S[Si].ECourses[i]=S[Si].ECourses[i+1];
                }
                S[Si].ENo--;
                S[Si].DNo++;
            }
        }
        else{
            cout<<"No such course"<<endl;
        }
    }
    else{
        cout<<"No such student"<<endl;
    }
}

void inline ViewTeacherCourses(int id){
    Course temp;
    cout<<"Teacher course codes are: ";
    for(int i=0; i<CNo; i++){
        temp=Co[i];
        if(temp.TId==id){
            cout<<temp.code<<", ";
        }
    }
    cout<<"\b\b"<<endl;
}

void inline SInCourse(int id){
    Course temp;
    string code;
    int Ci;
    cout<<"Enter course code: ";
    cin>>code;
    Ci=FindCourse(code);
    if(Ci!=-1){
        temp=Co[Ci];
        if(temp.TId==id){
            cout<<"Student enrolled Roll No.: ";
            for(int i=0; i<temp.EStudentsNo; i++){
                cout<<temp.EStudents[i]<<", ";
            }
            cout<<"\b\b"<<endl;
        }
        else{
            cout<<"Not your course"<<endl;
        }
    }
    else{
        cout<<"No such course"<<endl;
    }
}

void inline GradeStudent(int id){
    Course temp;
    string code;
    int Ci, Si, rollno;
    cout<<"Enter course code: ";
    cin>>code;
    Ci=FindCourse(code);
    if(Ci!=-1){
        temp=Co[Ci];
        if(temp.TId==id){
            cout<<"Enter Student RollNo: ";
            cin>>rollno;
            Si = temp.FindStudent(rollno);
            if(Si!=-1){
                Co[Ci].EnterGrades(Si);
            }
            else{
                cout<<"No such Student in course"<<endl;
            }
        }
        else{
            cout<<"Not your course"<<endl;
        }
    }
    else{
        cout<<"No such course"<<endl;
    }
}

void inline AllGradesCourse(int id){
    Course temp;
    string code;
    int Ci;
    cout<<"Enter course code: ";
    cin>>code;
    Ci=FindCourse(code);
    if(Ci!=-1){
        temp=Co[Ci];
        if(temp.TId==id){
            cout<<"Student enrolled Roll No.: ";
            for(int i=0; i<temp.EStudentsNo; i++){
                cout<<temp.EStudents[i]<<", Grade:  ";
                switch(temp.SGrades[i].grade){
                    case(1):
                    cout<<"A";
                    break;
                    case(2):
                    cout<<"B";
                    break;
                    case(3):
                    cout<<"C";
                    break;
                    case(4):
                    cout<<"D";
                    break;
                    case(5):
                    cout<<"F";
                    break;
                    case(6):
                    cout<<"Ungraded";
                    break;
                }
                cout<<endl;
            }
        }
        else{
            cout<<"Not your course"<<endl;
        }
    }
    else{
        cout<<"No such course"<<endl;
    }
}

void inline TopStudent(int id){
    Course temp;
    string code;
    int Ci, max, Si;
    max=0;
    Si=0;
    cout<<"Enter course code: ";
    cin>>code;
    Ci=FindCourse(code);
    if(Ci!=-1){
        temp=Co[Ci];
        if(temp.TId==id){
            for(int i=0; i<temp.EStudentsNo; i++){
                if(temp.SGrades[i].marks>=max){
                    max=temp.SGrades[i].marks;
                    Si=i;
                }
            }
            cout<<"Student Roll No with highest marks is "<<temp.EStudents[Si]<<endl;
        }
        else{
            cout<<"Not your course"<<endl;
        }
    }
    else{
        cout<<"No such course"<<endl;
    }
}

int main(){
    Ad[0].id=1;
    Ad[0].person.name="Saeed";
    Ad[0].person.age=20;
    Ad[0].person.address={"Plot 120/5", "Karachi", "Pakistan"};
    ANo++;
    S[0].roll_no=32;
    S[0].person.name="Affan";
    S[0].person.age=18;
    S[0].person.address={"Plot 119/5", "Karachi", "Pakistan"};
    S[0].department=CE;
    SNo++;
    T[0].id=14;
    T[0].person.name="Ahmed";
    T[0].person.age=34;
    T[0].person.address={"Plot 101/5", "Karachi", "Pakistan"};
    T[0].department=CS;
    T[0].salary=400000;
    TNo++;
    Co[0].name="Computer Science";
    Co[0].code="CS101";
    CNo++;
    int id, user, choice;
    while(true){
        cout<<"Enter 1 for admin login, 2 for teacher login, and 3 for student login: ";
        cin>>user;
        if(user==1 || user==2 || user==3){
            break;
        }
        cout<<"Invalid entry, Please try again"<<endl;
    }
    if(user==1){
        while(true){
            cout<<"Enter your id: ";
            cin>>id;
            if(FindAdmin(id)!=-1){
                break;
            }
            cout<<"Invalid Id, please try again"<<endl;
        }
        while(true){
            while(true){
            cout<<"Enter 1 for student operations, 2 for teacher operations, 3 for course operations, and 0 to exit: ";
            cin>>choice;
            if(choice==1 || choice==2 || choice==3 || choice==0){
                break;
            }
            cout<<"Invalid entry, Please try again"<<endl;
            }
            if(choice==0){
                break;
            }
            if(choice==1){
                while(true){
                    while(true){
                    cout<<"Enter 1 to add a new student, 2 to remove a student, 3 to edit a student, 4 to check reccord of all students, 5 to unenroll a student, and 0 to go back: ";
                    cin>>choice;
                    if(choice==1 || choice==2 || choice==3 || choice==4 || choice==5 || choice==0){
                        break;
                    }
                    cout<<"Invalid entry, Please try again"<<endl;
                    }
                    if(choice==0){
                        break;
                    }
                    if(choice==1){
                        NewStudent();
                    }
                    if(choice==2){
                        RemoveStudent();
                    }
                    if(choice==3){
                        EditStudent();
                    }
                    if(choice==4){
                        StudentDetails();
                    }
                    if(choice==5){
                        DropStudent();
                    }
                }
            }
            if(choice==2){
                while(true){
                    while(true){
                    cout<<"Enter 1 to add a new teacher, 2 to remove a teacher, 3 to edit a teacher, 4 to check reccord of all teachers, and 0 to go back: ";
                    cin>>choice;
                    if(choice==1 || choice==2 || choice==3 || choice==4 || choice==0){
                        break;
                    }
                    cout<<"Invalid entry, Please try again"<<endl;
                    }
                    if(choice==0){
                        break;
                    }
                    if(choice==1){
                        NewTeacher();
                    }
                    if(choice==2){
                        RemoveTeacher();
                    }
                    if(choice==3){
                        EditTeacher();
                    }
                    if(choice==4){
                        TeacherDetails();
                    }
                }
            }
            if(choice==3){
                while(true){
                    while(true){
                    cout<<"Enter 1 to add a new course, 2 to remove a course, 3 to edit a course, 4 to check reccord of all courses, 5 to allocate a course, 6 to deallocate a course, and 0 to go back: ";
                    cin>>choice;
                    if(choice==1 || choice==2 || choice==3 || choice==4 || choice==5 || choice==6 || choice==0){
                        break;
                    }
                    cout<<"Invalid entry, Please try again"<<endl;
                    }
                    if(choice==0){
                        break;
                    }
                    if(choice==1){
                        NewCourse();
                    }
                    if(choice==2){
                        RemoveCourse();
                    }
                    if(choice==3){
                        EditCourse();
                    }
                    if(choice==4){
                        CourseDetails();
                    }
                    if(choice==5){
                        AllocCourse();
                    }
                    if(choice==6){
                        DeallocCourse();
                    }
                }
            }
        }
    }
    if(user==2){
        while(true){
            cout<<"Enter your id: ";
            cin>>id;
            if(FindTeacher(id)!=-1){
                break;
            }
            cout<<"Invalid Id, please try again"<<endl;
        }
        while(true){
            while(true){
                cout<<"Enter 1 for personal details, 2 for your courses, 3 for list of students in a course, 4 for grading students, 5 for student grades in a course, 6 for top marked student in course, and 0 to exit: ";
                cin>>choice;
                if(choice==1 || choice==2 || choice==3 || choice==4 || choice==5 || choice==6 || choice==0){
                    break;
                }
                cout<<"Invalid entry, Please try again"<<endl;
            }
            if(choice==0){
                break;
            }
            if(choice==1){
                TeacherOut(id);
            }
            if(choice==2){
                ViewTeacherCourses(id);
            }
            if(choice==3){
                SInCourse(id);
            }
            if(choice==4){
                GradeStudent(id);
            }
            if(choice==5){
                AllGradesCourse(id);
            }
            if(choice==6){
                TopStudent(id);
            }
        }
    }
    if(user==3){
        while(true){
            cout<<"Enter your Roll No: ";
            cin>>id;
            if(FindStudent(id)!=-1){
                break;
            }
            cout<<"Invalid Id, please try again"<<endl;
        }
        while(true){
            while(true){
                cout<<"Enter 1 for personal details, 2 to enroll in a course, 3 for grades, 4 for list of teachers, 5 for enrolled courses, 6 for dropped courses, 7 for completed courses, and 0 to exit: ";
                cin>>choice;
                if(choice==1 || choice==2 || choice==3 || choice==4 || choice==5 || choice==6 || choice==7 || choice==0){
                    break;
                }
                cout<<"Invalid entry, Please try again"<<endl;
            }
            if(choice==0){
                break;
            }
            if(choice==1){
                StudentOut(id);
            }
            if(choice==2){
                EnrollStudent(id);
            }
            if(choice==3){
                StudentCCourses(id);
            }
            if(choice==4){
                StudentTeacherView(id);
            }
            if(choice==5){
                StudentECourses(id);
            }
            if(choice==6){
                StudentDCourses(id);
            }
            if(choice==7){
                StudentCCourses(id);
            }
        }
    }
    return 0;
}