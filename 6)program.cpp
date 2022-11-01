#include<iostream>
#include<fstream>
#include<string.h>
#include<valarray>
using namespace std;
int countWord(char *s);
int main()
{
    int l=0,chrt=0,word=0,d=0;
    string line;
    ifstream fin;
    fin.open("D:/my documents/program in c,c++ and ds/2)program of c++/merge.txt");
    int i=0;
    while(fin.eof()==0)
    {
        getline(fin,line);
        l++;
        for(i=0;line[i];i++)
        {
            if((line[i]>=65 && line[i]<=90) || (line[i]>=97 && line[i]<=122))
                chrt++;
            else
                word++;
        }
        word++;
    }
    cout<<"file has "<<word<<" words "<<l<<" lines "<<chrt<<" character";
}
