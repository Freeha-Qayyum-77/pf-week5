#include<iostream>
#include<cmath>
using namespace std;

void positiveDisc(float a, float b,float discriminant);
void equalZero(float a,float b, float discriminant);
void negativeDisc(float a,float b,float discriminant);

main()
{
	float a,b,c, discriminant;
	cout<<"Enter the value of a: "; 
	cin>>a;

	cout<<"Enter the value of b: ";
	cin>>b;

	cout<<"Enter the value of c: ";
	cin>>c;

	discriminant= pow(b,2) - (4 * a* c);
	positiveDisc(a,b,discriminant);
	equalZero(a,b,discriminant);
	negativeDisc(a,b,discriminant);
}


void positiveDisc(float a, float b,float discriminant)
{
	if(discriminant > 0)
	{
		float root1, root2;
		root1 = (-b + sqrt(discriminant))/(2*a);
		root2 = (-b - sqrt(discriminant))/(2*a);
		cout<<"Solutions: x = " <<root1 <<" and x= " <<root2;
	}
}

void equalZero(float a,float b, float discriminant)
{ 
	if(discriminant == 0)
	{
		float root;
		root=(-b/(2*a));
		cout<<"Solution = x " <<root;
	}
}

void negativeDisc(float a,float b,float discriminant)
{
	if(discriminant > 0)
	{ 
		float root1, root2;
		root1= (-b/(2*a));
		root2=(sqrt(-discriminant)/(2*a));
		cout<<"Complex Solutions: x = "<<root1 <<"+" <<root2 <<"i and x = " <<root1 <<"-" <<root2 <<"i";
	}

}


