#include<iostream>
Using namespace std;
int main()
{
int data[5];
Cout<<"Enter elements:";
for(int i=0;i<5;++i)
Cin>>data[i];
Cout<<"You entered:";
for(int i=0;i<5;++i)
Cout<<endl<<*(data+i);
Return 0;
}
