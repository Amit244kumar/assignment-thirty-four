#include<conio.h>
#include<iostream>
#include<fstream>
using namespace std;

class Employ
{
   private:
      int empno;
      char name[10];
   public:
    void addEmploye()
    {
        ofstream fout;
        fout.open("emp.txt",ios::app|ios::out);
        cout<<"Enter employ no  : ";
        cin>>empno;
        cin.ignore();
        cout<<"Enter employ name : ";
        cin>>name;
        fout<<empno<<endl;
        fout<<name<<endl;
        fout.close();
        cout<<"Add successfully ";

    }
    void display()
    {
        ifstream fin;
        fin.open("emp.txt");
        fin>>empno;
        cout<<"Employ Details"<<endl<<endl;
        cout<<"Employ no    : "<<empno<<endl;
        //cout<<fin.eof();
        while(!fin.eof())
        {
            fin>>name;
            cout<<"Employ name  : "<<name<<endl;
            fin>>empno;
            cout<<"Employ no    : "<<empno<<endl;

        }
        fin.close();
    }

};

int main()
{
    Employ e1;
    e1.display();
    getch();
    return 0;
}
