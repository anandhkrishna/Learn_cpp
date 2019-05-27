// C++ program to demonstrate constructors 

#include <bits/stdc++.h> 
using namespace std; 

class Calculator 
{ 
	public: 

	// In default calculator display is 0
	float display = 0;

	Calculator (){} 
	
	Calculator (float disp) 
	{ 
		display = disp;
	}

	void addition (float x)
	{
		display += x;
	}

	float getDisplay(){
		return display;
	}
	
	void sub (float y)
	{
		 display -= y;
	}
	
	void mul(float x)
	{
		display *= x;
	}

	void div(float x)
	{
		display /= x;
	}

};


int main() { 
	Calculator obj;
	obj.addition (5);
	cout << "Current Display is : " << obj.display << endl;  
	return 0;
}; 
