#include "student.h"
#include <string.h>
#include <iostream>
using namespace std;
int student::count = 0;
void student::set_id(char *a)
{
    id=new char[strlen(a)+1];
    strcpy(name,a);
}
void student::set_name(char *b)
{
    id=new char[strlen(b)+1];
    strcpy(name,b);
}
void student::set_gpa(float c)
{
    if(gpa>=0 && gpa<=4)
    {
        gpa=c;
    }
    else
    {
        gpa=0;
    }
}
void student::set_course(int d)
{
    if(course>=1 && course<=8)
    {
        course=d;
    }
    else
    {
        course=1;
    }
}
char* student::get_name()
{
    return name;
}
char* student::get_id()
{
    return id;
}
float student::get_gpa()
{
    return gpa;
}
int student::get_course()
{
    return course;
}
int student::get_count(){
    return count;
}
void student::get_all()
{
    cout<<"name:";
    cin>>name;
    cout<<"ID:";
    cin>>id;
    cout<<"course:";
    cin>>course;
    cout<<"gpa:";
    cin>>gpa;
}
void student::show()
{
    cout<<"name:"<<name<<endl;
    cout<<"ID:"<<id<<endl;
    cout<<"course:"<<course<<endl;
    cout<<"gpa:"<<gpa<<endl;
}
void student::show_static(){
    cout<<"count:"<<count<<endl;
}
bool student::greatThan(student &a)
{
    if(course>a.get_course())
        return true;
    else
        return false;
}
bool student::lessThan(student &a)
{
    return !greatThan(a);
}
bool student::isEqual(student &a)
{
    if(course==a.get_course())
        return true;
    else
        return false;

}
bool student::next(student &a)
{
    if(strcmp(name,a.get_name())<0)
        return true;
    else
        return false;
}
bool student::prev(student &a)
{
    return !next(a);
}
student::student()
{
    name = new char[20];
    strcpy(name, "");
    id = new char[20];
    strcpy(id, "");
    course=1;
    gpa=0.0;
    count++;
}
student::student(student &a)
{
    delete name;
    delete id;

    this->name = a.name;
    this->id = a.id;

    this->course = a.course;
    this->gpa = a.gpa;

}
void student::copy(student &a)
{
    set_all(a.name,a.id,a.gpa,a.course);
}
student::student(char *a, char *b, float c, int d)
{
    this->name = new char[strlen(a)+1];
    strcpy(this->name, a);

    this->id= new char[strlen(b)+1];
    strcpy(this->id, b);

    this->gpa = c;
    this->course = d;
}
void student::set_all(char *a, char *b, float c, int d)
{
    this->name = new char[strlen(a)+1];
    strcpy(this->name, a);

    this->id= new char[strlen(b)+1];
    strcpy(this->id, b);

    this->gpa = c;
    this->course = d;
}
student::~student()
{
    delete name;
    delete id;
}

