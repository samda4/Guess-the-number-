#ifndef student_h
#define student_h

class student
{
    char* id;
    float gpa;
    static int count;

public:
    char* name;
    int course;

    void set_id(char a[]);
    void set_name(char b[]);
    void set_gpa(float);
    void set_course(int);
    char* get_name();
    char* get_id();
    float get_gpa();
    int get_course();
    int get_count();
    void get_all();
    void show();
    void show_static();

    bool greatThan(student &);
    bool lessThan(student &);
    bool isEqual(student &);
    bool prev(student &);
    bool next(student &);

    student();
    student(student &);
    void copy(student &);
    student(char a[], char b[], float c, int d);
    void set_all(char a[], char b[], float c, int d);
    ~student();
};
#endif
