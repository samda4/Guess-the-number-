#include <iostream>
#include <cstring>
#include <stdio.h>
using namespace std;

const int n = 2;
class ajilchin
{
private:
    int id;
    char *ner;
    char *alban_tushaal;
    float ajillasan_tsag;
    int tsalin;
    float ajiltan_tsalin();
public:
    void get();
    void set_all(char n[], char i[], float b, int c);
    void delgetsleh();
    float tsalin_bodoh();
    bool tsalin_nemegduuleh(float a);
    float getWage();
    char *ner_awah();
    int id_awah();
    ajilchin();
    ajilchin(char n[], char i[], float b, int c);
    ~ajilchin();
    bool daraah(ajilchin &);
    void huulah(ajilchin &);
};
ajilchin::ajilchin()
{
    ner = new char[20];
    strcpy(ner, "");
    alban_tushaal = new char[20];
    strcpy(alban_tushaal, "");
    id=0;
    ajillasan_tsag=0;
}
ajilchin::ajilchin(char n[], char i[], float b, int c)
{
    ner = new char[strlen(n)+1];
    strcpy(ner, n);
    alban_tushaal = new char[strlen(i)+1];
    strcpy(alban_tushaal, i);
    id=c;
    ajillasan_tsag=b;
}

void ajilchin::get()
{

    cout << "Ner: ";
    cin >> ner;
    cout << "alban tushaal: ";
    cin >> alban_tushaal;
    cout << "ajillasan tsag: ";
    cin >> ajillasan_tsag;
    cout << "ID:";
    cin >> id;
}

void ajilchin::delgetsleh()
{
    cout << "\nner: " << ner << endl;
    cout << "id: "<< id << endl;
    cout << "alban tushaal: "<< alban_tushaal << endl;
    cout << "ajillasan tsag++: "<< ajillasan_tsag << endl;
    cout << "tsalin**: "<< tsalin << endl;

}

float ajilchin::tsalin_bodoh()
{
    int tsal=2000;
    if(strcmp(alban_tushaal,"zahiral"))
    {
        if(ajillasan_tsag>=0 && ajillasan_tsag <=24)
        {
            tsalin = ajillasan_tsag * tsal;
        }
    }
    else
    {
        ajiltan_tsalin();
    }

}

float ajilchin::ajiltan_tsalin()
{
    int tsal = 5000;
    if (strcmp(alban_tushaal, "ajiltan"))
    {
        if (ajillasan_tsag >= 0 && ajillasan_tsag <= 24)
        {
            tsalin = tsal * ajillasan_tsag;
        }
    }
}

bool ajilchin::tsalin_nemegduuleh(float a)
{
    if(a>=0 && a<=24)
    {
        ajillasan_tsag= ajillasan_tsag + a;
        return 1;
    }
    else
    {
        return 0;
    }
}
bool ajilchin::daraah(ajilchin &emp){
    if(strcmp(ner,emp.ner_awah())<0)
        return true;
    else
        return false;
}
void ajilchin::set_all(char n[], char i[], float b, int c){
    ner = new char[strlen(n)+1];
    strcpy(ner, n);
    alban_tushaal = new char[strlen(i)+1];
    strcpy(alban_tushaal, i);
    ajillasan_tsag=b;
    id=c;
}
void ajilchin::huulah(ajilchin &emp){
set_all(emp.ner,emp.alban_tushaal,emp.ajillasan_tsag,emp.id);
}
float ajilchin::getWage()
{
    return tsalin;
}
char* ajilchin::ner_awah()
{
    return ner;
}
int ajilchin::id_awah()
{
    return id;
}
ajilchin::~ajilchin()
{
    delete ner;
    delete alban_tushaal;

}

int main ()
{

    ajilchin  emp[n];
    {
        for(int k=0; k<n; k++)
        {
            emp[k].get();
            if(k>=1)
            {
                int m=k;
                for(; m>0; m--)
                {
                    if(emp[k].id_awah()==emp[m-1].id_awah())
                    {
                        cout<<"ID dawhtsaj bna!!!"<<endl;
                        cout<<"SHINE AJILCHIN burtge!!!"<<endl;
                        k--;
                        break;
                    }
                }
            }
        }
        for(int k=0; k<n; k++)
        {
            emp[k].tsalin_bodoh();
        }
    for(int k=0; k<n; k++){
        for(int j=0; j<n; j++){
            if(emp[k].daraah(emp[j])){
                ajilchin swap("", "", 0, 0);
                swap.huulah(emp[k]);
                emp[k].huulah(emp[j]);
                emp[j].huulah(swap);
            }
        }
    }

        for(int k=0; k<n; k++)
        {
            emp[k].delgetsleh();
        }

    }

}

