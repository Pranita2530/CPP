#include<iostream>
using namespace std;

struct product{
	int index;
	char name[10];

};

class staticlist
{	
	struct product p1;
	public:
		bool isfull()
		{
			if(p1.index>=10)
			{
				return true;
			}
		}
		void insert(char name1[],int index1)
		{
			if(isfull())
			{
				cout<<"list is full";
			}
			else
			{
				p1.index=index1;
				p1.name[]=name1[];
			}
		} 
};
int main()
{	
	staticlist st;
	st.isfull();
	st.insert("Pen",1);


}
