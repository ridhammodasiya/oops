#include<iostream>
using namespace std;
class criceter{
	public:
		int age;
		char name[40];
		
		void inputdata(){
		cout<<"enter criceter name:";
		cin>>name;
		cout<<"enter criceter age:";
		cin>>age;
			
		
		
		
		} 
};

class batsman:public criceter{
	public:
		int totalrun,bestperformance,totalinn,totalno;
		float averagerun;
		
		void inputbatsmandata(){
		inputdata();	
		
		cout<<"enter total run:";
		cin>>totalrun;
		cout<<"enter best performance:";
		cin>>bestperformance;
		cout<<"enter total inning:";
		cin>>totalinn;
		cout<<"enter total not out:";
		cin>>totalno;
	    }
	    void calculateaverageruns(){
	    	if(bestperformance!=0)
	    	{
	    		averagerun=(float)totalrun / (totalinn - totalno); 
			}
			else
			{
				averagerun=(float)0.0;
			}
	    }
	    void display(){
	    cout << "\nBatsman Details" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age <<" Years" <<endl;
        cout << "Total Runs: " << totalrun << endl;
        cout << "Average Runs: " << averagerun << endl;
        cout << "Best Performance: "<< bestperformance << endl;	
	    	
	    	
	    	
	
	
	
	
		}
};

int main()
{
	batsman bm;
	
	bm.inputbatsmandata();
	bm.calculateaverageruns();
	bm.display();
}


