#include "2022421_1_2.h"
using namespace std;

Student S[100];
int SNo=0;
Teacher T[20];
int TNo = 0;
Admin Ad[10];
int ANo = 0;
Course Co[20];
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
    int index = FindStudent(RollNo);
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
    int index = FindTeacher(id);
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
    int index = FindAdmin(id);
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

int main(){
    return 0;
}