#include<bits/stdc++.h>
#include<climits>
#include<string>
#include<algorithm>
#include<conio.h>

using namespace std;

struct date
{
    int d,m,y;
};

struct employee
{
    char name[30];
    int id, salary;
    struct date birth, reg;
} e[60];



void register_emp(struct employee ee[],int x)
{ 
    for (int i=0;i<x;i++)
    {
        cout<<"\t Enter Name \t";
        cin>>ee[i].name;
        cout<<"\t Enter Salary \t";
        cin>>ee[i].salary;
        ee[i].id = ee[i].name[3] + ee[i].name[1];
        cout<<"\t Enter date of Birth in DD//MM//YYYY Format \t";
        cin>>ee[i].birth.d>>ee[i].birth.m>>ee[i].birth.y;
        cout<<"\t Enter date of registration in DD//MM//YYYY Format \t";
        cin>>ee[i].reg.d>>ee[i].reg.m>>ee[i].reg.y;
    }
}

void show_emp(struct employee eee[],int x)
{ 
    for (int i=0;i<x;i++)
    {
        cout<<"\n\t Name: #"<<i+1<<"\t";
        puts(eee[i].name);
        cout<<"\n\t Salary: \t";
        cout<<eee[i].salary;
        cout<<"\n\t ID: \t";
        cout<<eee[i].id;
        cout<<"\n\t Date of Birth in DD//MM//YYYY Format \t";
        cout<<eee[i].birth.d<<"-"<<eee[i].birth.m<<"-"<<eee[i].birth.y;
        cout<<"\n\t Date of registration in DD//MM//YYYY Format \t";
        cout<<eee[i].reg.d<<"-"<<eee[i].reg.m<<"-"<<eee[i].reg.y;
    }
}

int main()
{
    int n,c,nr;
    n=0;
    do
    {
        cout<<"\n\t Enter Choice 1) Regester Employees  \t 2) Show Employees \t 0) Exit\n \t";
        cin>>c;

        switch (c)
        {
            case 1:
            cout<<"\n\t Enter number of employees to be entered \t";
            cin>>nr;
            register_emp(e,nr);
            break;

            case 2:
            show_emp(e,n);
            break;

            default:
            cout<<"\n\t Error \t";
            break;
        }
        n+=nr;

    }while (c != 0);
    getch();
    return 0;

}
 
