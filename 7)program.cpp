#include<conio.h>
#include<iostream>

using namespace std;

class Record
{
   private:
      int code;
      string name;
      int price;
   protected:
    void bubbleSort(int s[],int n)
   {
        int i,j;
        Record temp;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n-1-i;j++)
            {
                if(s[j].price>s[j+1].price)
                {
                    temp=s[j];
                    s[j]=s[j+1];
                    s[j+1]=temp;
                }
            }
        }
    }
   public:

};
void bubbleSort(int s[],int n);
int main()
{
    Record stnd[50];


}


