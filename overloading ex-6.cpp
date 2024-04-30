#include<iostream>
using namespace std;

class Addition
{
public:
void add(int a,int b)
{
int sum=a+b;
cout<<sum<<endl;
}
public:
void add(int a,int b,int c)
{
int sum=a+b+c;
cout<<sum<<endl;
}
public:
void add(int f,int g,int h,int i)
{
int sum=f+g+h+i;
cout<<sum<<endl;
}
};
int main()
{
Addition obj;
obj.add(2,3);
obj.add(3,4,5);
obj.add(5,6,7,8);
}
