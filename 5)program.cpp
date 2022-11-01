#include<conio.h>
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string line;
    ifstream fin1,fin2;
    ofstream fout;
    fin1.open("D:/my documents/program in c,c++ and ds/2)program of c++/test.txt");
    fin2.open("D:/my documents/program in c,c++ and ds/2)program of c++/temp.txt");
    fout.open("D:/my documents/program in c,c++ and ds/2)program of c++/merge.txt");
    getline(fin1,line);
    fout<<line<<endl;
    while(fin1.eof())
    {
        getline(fin1,line);
        fout<<line;
    }
    getline(fin2,line);
    fout<<line;
    while(fin1.eof())
    {
        getline(fin2,line);
        fout<<line;
    }
    cout<<"file merged";
}
