#include<iostream>
using namespace std;
class opover
{

	public:
	int a;
	float b;
	opover()
	{
		a=0;
		b=0;
	}
	opover(int i,float j)
	{
		a=i;
		b=j;
	}
	opover operator++()
	{
		opover t;
		t.a=++a;
		t.b=++b;
		return t;
	}
	opover operator++(int x)
	{
		opover t;
		t.a=a++;
		t.b=b++;
		return t;
	}
	void display()
	{
		cout<<"\na="<<a<<"\tb="<<b<<endl;
	}
};
int main()
{
	opover op1(4,5.6),op2(6,3.7),op3;
	op1.display();
	op2.display();

	cout<<"After Pre increment\n";
	op3=++op1;
	op3.display();
	op1.display();

	cout<<"After Post increment\n";
	op3=op1++;
	op3.display();
	op1.display();
	return 0;
}
/*
Output:
a=4     b=5.6

a=6     b=3.7
After Pre increment

a=5     b=6.6

a=5     b=6.6
After Post increment

a=5     b=6.6

a=6     b=7.6
*/