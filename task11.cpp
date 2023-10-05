#include <iostream>
using namespace std;

void calculatePoolState(int volume, int pipe1 ,int pipe2 ,float hours);

main()
{	int volume,pipe1,pipe2;
	float hours;
	cout<<"Enter volume of the pool in liters: ";
	cin>>volume;

	cout<<"Enter flow rate of the first pipe per hour: ";
	cin>>pipe1;

	cout<<"Enter flow rate of the second pipe per hour: ";
	cin>>pipe2;

	cout<<"Enter hours that the worker is absent: ";
	cin>>hours;

	calculatePoolState(volume,pipe1,pipe2,hours);
}
void calculatePoolState(int volume,int pipe1,int pipe2,float hours)
{	
	int volumebypipe1, volumebypipe2, totalfilled;
	volumebypipe1= pipe1*hours;
	volumebypipe2= pipe2*hours;
	totalfilled= volumebypipe1+volumebypipe2;

	if(volume>=totalfilled)
	{
	int percentpipe1, percentpipe2, totalpercent;
	percentpipe1= volumebypipe1*100/(totalfilled);
	percentpipe2= volumebypipe2*100/(totalfilled);
	totalpercent= totalfilled*100/(volume);
	cout << "The pool is " << totalpercent << "% full. Pipe 1: " << percentpipe1 << "%. Pipe 2: "<< percentpipe2 <<"%." ;
	}

	if(volume<totalfilled)
	{
	float overflow;
	overflow= totalfilled-volume;
	cout << "For " << hours << " hours, the pool overflows with " << overflow << " liters.";
	}
}