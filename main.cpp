#include "student.h"
#include <string.h>
#include <iostream>
using namespace std;
int main()
{
    student a[3];
    {
        for(int i=0; i<3; i++)
        {
            a[i].get_all();
        }
    }
    cout<<"sorted by name!!!";
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(a[i].next(a[j]))
            {
                student swap("", "", 0,0);
                swap.copy(a[i]);
                a[i].copy(a[j]);
                a[j].copy(swap);
            }
        }

    }
    for(int i=0; i<3; i++)
    {
        cout<<endl;
        a[i].show();
    }
    cout<<"sorted by course!!!";
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(a[i].greatThan(a[j]))
            {
                student swap("", "", 0, 0);
                swap.copy(a[i]);
                a[i].copy(a[j]);
                a[j].copy(swap);
            }
            else if(a[i].isEqual(a[j]))
            {
                if(a[i].next(a[j]))
                {
                    student swap("", "", 0,0);
                    swap.copy(a[i]);
                    a[i].copy(a[j]);
                    a[j].copy(swap);
                }

            }
        }
    }
            for(int i=0; i<3; i++)
            {
                cout<<endl;
                a[i].show();
            }
        return 0;
    }

