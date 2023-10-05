#include<iostream>
#include<cmath>
using namespace std;
main()
{
 	double base, angle, radian, result;
	cout<<"Enter the distance from the base of the tree (in feet): ";
	cin>>base;
	cout<<"Enter the angle of elevation (in degrees): ";
	cin>>angle;
	radian= angle/57.2958;
	tan(radian);
	result= tan(radian)*base;
	cout<<"The height of the tree is: "<<result <<" feet";



}