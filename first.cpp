#include<iostream>
#include<string.h>
using namespace std;
class student{
	public:
		void let()
		{
			struct student{
				char name;
				int roll;
			};
			struct student arr[5];
			int i;
			cout<<"enter your name"<<endl;
			for(i=1;i<=5;i++)
			{
				cin>>arr[i].name;
			}
			cout<<"enter your roll"<<endl;
			for(i=1;i<=5;i++)
			{
				cin>>arr[i].roll;
			}
		}
};
int main()
{
	student s1;
	s1.let();
}
