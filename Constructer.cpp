#include <iostream>
using namespace std;
//constructer
class Nokta{
	private:
		int x;
		int y;
	public:
		
		Nokta();
		Nokta(int ,int);
		
		int getX();
		int getY();
		
		void setX(int);
		void setY(int);
};

Nokta::Nokta() //parametresiz constructer
{
	x = 2;
	y = 5;
}

Nokta::Nokta(int x,int y) //parametreli constructer
{
	this->x = x;
	this->y = y;
}
int Nokta::getX()
{
	return x;
}

int Nokta::getY()
{
	return y;
}


int main() 
{
	Nokta n1;
	Nokta n2(5,10);
	
	cout << n1.getX() <<"   "<<  n1.getY() << endl;
	cout << n2.getX() <<"   "<<  n2.getY() << endl;
}
