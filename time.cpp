#include <iostream>
using namespace std;

class Time
{
	int hour;
	int min;
	int sec;
	public:
	void get()
	{
		cout<<"Enter hour: ";
		cin>>hour;
		cout<<"Enter minutes: ";
		cin>>min;
		cout<<"Enter Seconds: ";
		cin>>sec;
		
	}
	void display()
	{
		cout<<"Time ="<<hour<<":"<<min<<":"<<sec<<endl;
		
	}
	void sum(Time t1,Time t2)
	{
		sec=t1.sec+t2.sec;
		min=sec/60;
		sec=sec%60;
		min=min+t1.min+t2.min;
		hour=min/60;
		min=min%60;
		hour=hour+t1.hour+t2.hour;
		
		
	}
};

int main()
{
	Time t1,t2,t3;
	cout<<"Enter details of first time:"<<endl;
	t1.get();
	
	cout<<"Enter details of second time: "<<endl;
	t2.get();
	
	cout<<"The time entered are:"<<endl;
	t1.display();
	t2.display();
	
	t3.sum(t1,t2);
	cout<<"The sum of time is:"<<endl;
	t3.display();
	return 0;
	
}
