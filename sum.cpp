#include<iostream>
using namespace std;
class chat{
	public:
		int a,b,total,choise;
		chat(){
			cout<<"=====calculator=====";
			cout<<"\n1.addition";
			cout<<"\n2.subtrion";
			cout<<"\n3.multiplication";
			cout<<"\n4.division";
			cout<<"\nenter your choise";
			cin>>choise;
			cout<<"enter a and b value"<<endl;
			cin>>a>>b;
			
			switch(choise)
			{
				case 1:total=a+b;
				cout<<"total is"<<total<<endl;
				
				case 2:total=a-b;
				cout<<"total is:"<<total<<endl;
				
				case 3:total=a*b;
				cout<<"total is:"<<total<<endl;
				
				case 4:total=a/b;
				cout<<"total is:"<<total<<endl;
			}
		}
		
};
main()
{
	chat c1;
}
