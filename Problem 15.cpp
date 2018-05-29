/*Tower of hanoi*/
#include<iostream>
using namespace std;

int moves(0);
void hanoi(int m,char a,char b,char c);
void hanoi(int m,char a,char b,char c){
    moves++;
    if(m==1)
        cout<<"moves disk "<<m<<"from "<<a<<"to "<<c<<endl;

        else{
            hanoi(m-1,a,c,b);
            {

              cout<<"moves disk "<<m<<"from "<<a<<"to "<<c<<endl;

               hanoi(m-1,b,a,c) ;

            }
    }
}

int main()
{
    int disk;

    cout<<"Enter the number of disks"<<endl;
    cin>>disk;
    hanoi(disk,'A', 'B', 'C');
    cout<<"Total movement:"<<moves<<endl;

}
