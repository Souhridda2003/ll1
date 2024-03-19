#include<iostream>
#include<string>
using namespace std;
class student{ //user defined data type
    public:
        string name;
        int roll;
        float marks;
        // student(string n,int r,float m){
        //     name=n;
        //     roll=r;
        //     marks=m;
        // }
        student(string name,int roll){
            this->name=name;
            this->roll=roll;
        }
};
void change(student* s){
    s->name="Rishav";
}
int main(){
    // student s("souhridda",52,98);
    // student* ptr=&s;
    student *s=new student("Souhridda",52);
    // s.name = "souhridda Karmakar";
    // s.roll= 52;
    // s.marks=98;
    // cout<<s.name<<endl;
    // change(s);
    // cout<<s.name<<endl;
    // int x=6;
    // int* p=&x;
    // *p=10;
    // cout<<x;
    cout<<s->name<<endl;
    // (*ptr).name="rishav";
    // ptr->name="Rishav";
    change(s);
    cout<<s->name<<endl;
}