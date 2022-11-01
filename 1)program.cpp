#include<conio.h>
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream fout;
    fout.open("D:/my documents/program in c,c++ and ds/2)program of c++/test.txt",ios::out);
    if(fout)
    {
        cout<<"file created successfully";
    }
    else{
        cout<<"file fails to create";
    }
    getch();
    return 0;
}
