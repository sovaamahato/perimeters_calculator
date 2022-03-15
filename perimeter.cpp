#include <iostream>
using namespace std;

class periMeter
{
	public:
		int peri(int a)
		{
			int result;
			result= 4*a;
			return result;
		}
		
		int peri(int a, int b)
		{
			int result;
			result= 2*(a+b);
			return result;
		}
		float peri(float a)
		{
			const float pi=3.14;
			int result;
			result= 2*pi*a;
			return result;
		}
};

int main()
{
//	periMeter square,circle,rect;
    periMeter obj1; 
	int result, result1;
	float result2;
	result=obj1.peri(7);
	result1=obj1.peri(2,4);
	result2=obj1.peri((float)4.1);
	cout<<"The perimeter of the square="<<result;
	cout<<"The perimeter of the rectangle="<<result1;
	cout<<"The perimeter of the circle="<<result2;
	return 0;
}
