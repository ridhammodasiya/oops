#include<iostream>
using namespace std;
class ram
{
	public:
		int l,w,area;
		void let()
		{
			cout<<"enter lenth value:";
			cin>>l;
			cout<<"enter width value:";
			cin>>w;
		} 
		
		
};
class rom:public ram{
	public:
		void met()
		{
		
		
			area=l*w;
			cout<<"area of Ractangle is:"<<area;
		}
		
};
int main()
{
	rom r1;
	r1.let();
	r1.met();
}

