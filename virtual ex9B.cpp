#include<iostream>
using namespace std;
class Person{
public:
	char name[10];
	char add[50];
	
	int mob_no;	
	void getdata(){
		cout<<"enter name:"<<endl;
		cin>>name;
		cout<<"enter address:"<<endl;
		cin>>add;
		cout<<"enter contact no:"<<endl;
		cin>>mob_no;				
	}	
};
/*class Emp{
	string post[50];
	int salary;
};*/
class Emp: virtual public Person{
	string post[20];
	int salary;
	public: void display(){
		cout<<"enter post"<<endl;
		cin>>post;
		cout<<"enter salary"<<endl;
		cin>>salary;
	}
};
class Customer:virtual public Person{
	string product[100];
	int cost;
	void getdata2(){
		cout<<"enter the product"<<endl;
		cin>>product;
		cout<<"enter the cost"<<endl;
		cin>>cost;
	}
};
class Emp_Cus : virtual public Emp,public Customer{
	int bill_id;	
};


int main(){
	Emp_Cus e1;
	e1.getdata();
}
