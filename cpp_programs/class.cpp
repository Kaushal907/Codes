#include<iostream>
using namespace std;

class Circle
{
	private:
    	float r,a,c;

	public:

    	void accept()
    	{
    		cout<<"Enter radius : ";
    		cin>>r;
    	}
        
    	void area()
    	{
    	    a = 3.14 * r * r;
    	}
    
    	void circ()
    	{
        	c= 2 * 3.14 * r;
    	}
    
    	void display(){
    		cout<<"Area is : "<<a<<endl;
    		cout<<"Circumference is : "<<c<<endl;
    	}
};

int main()
{
	Circle ob;
	ob.accept();
	ob.display();


	return 0;
}