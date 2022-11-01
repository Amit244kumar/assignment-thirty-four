#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main()
{

    string line;
    ofstream fout;
    fout.open("D:/my documents/program in c,c++ and ds/2)program of c++/test.txt",ios::out);
    if(fout)
    {
       cin>>line;
       fout<<line;
       ifstream fin;
       fin.open("D:/my documents/program in c,c++ and ds/2)program of c++/test.txt");
       fin>>line;
       cout<<"Your name contain "<<strlen(line)<<" character";
    }
    return 1;
}
