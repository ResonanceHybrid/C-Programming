#include<iostream>
using namespace std;
class A
{
	protected: 
	int mark1;
	public:
		void get_A()
		{
			cout<<"Enter AA Marks";
			cin>>mark1;
		}
		void display_A()
		{
			cout<<"Mark1 = "<< mark1<<endl;
		}
};

class B
{
	protected:
		int mark2;
	public:
		void get_B()
		{
			cout<<"Enter B Marks";
			cin>>mark2;
		}
		void display_B()
		{
			cout<<"Mark2 = "<< mark2<<endl;
		}
};
class c: public A, public B
{
	private:
		int total;
	public:
		void calculate()
		{
			total = mark1 + mark2;
		}
	void display()
		{
			display_A();
			display_B();
			cout<<"Total = "<< total<<endl;
		}
};

int main()
{
	c obj;
	obj.get_A();
	obj.get_B();
	obj.calculate();
	cout<<"Output:"<<endl;
	obj.display();
//	getch();
	
	return 0;
}
