#include<conio.h>
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string line;
    ofstream fout;
    ifstream fin;
    fout.open("D:/my documents/program in c,c++ and ds/2)program of c++/test.txt",ios::out|ios::app);
    fin.open("D:/my documents/program in c,c++ and ds/2)program of c++/test.txt");
    if(fout)
    {
        cout<<"file created successfully"<<endl;
        cout<<"Enter your data for exit enter 1"<<endl;
        while(1)
        {
            getline(cin,line);
            if(line=="1")
            {
                cout<<endl<<"Data is written in file";
                getch();
                return 0;
            }
            fout<<line<<endl;
        }
    }
    else{
        cout<<"file fails to create";

    }
    getch();
    return 0;
}
