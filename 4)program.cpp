#include<conio.h>
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string line;
    ofstream fout;
    ifstream fin;
    fin.open("D:/my documents/program in c,c++ and ds/2)program of c++/text.txt");
    fout.open("D:/my documents/program in c,c++ and ds/2)program of c++/temp.txt",ios::app|ios::out);
    fin>>line;
    cin>>line;
    cout<<line;
    fout<<line<<endl;
    cout<<"Data copy";
    getch();
    return 0;
}

