#include<iostream>
using namespace std;

class Rbi{
	private :
		int rate=7;
	public :
	void getRbi(){
			
	}
};
class Sbi:public Rbi
{
	private :
		int rate=7;
	public :
	void getROI(){
		cout<<"sbi bank rate of intrest : "<<rate<<" % "<<endl;
	}
};
class Bob:public Rbi
{
	private :
		int rate=7;
	public :
	void getROI(){
		cout<<"Bob bank rate of intrest : "<<rate<<" % "<<endl;
	}
};
class Icici:public Rbi
{
	private :
		int rate=7;
	public :
	void getROI(){
		cout<<"ICICI bank rate of intrest :" <<rate<<" % "<<endl;
	}
};
int main(){
	
	int rate;
	
	cout<<"enter your rate:-";
	cin>>rate;

	Sbi s1;
	Bob b1;
	Icici i1;
	
	s1.getROI();
	b1.getROI();
	i1.getROI();
	
	return 0;

}
