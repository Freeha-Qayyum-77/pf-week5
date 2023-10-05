#include <iostream>
#include <cmath>
using namespace std;
float roots(float val1,float val2,float val3,float val4);
float roots1(float val1,float val2,float val3,float val4);
float roots2(float val1,float val2,float val3,float val4);
float roots3(float val1,float val2,float val3,float val4);
float roots4(float val1,float val2,float val3,float val4);
float roots5(float val1,float val2,float val3,float val4);
float roots6(float val1,float val2,float val3,float val4);
main()
{
    float a,c,d,b,e,rootss,rootss1,rootss2,rootss3,rootss4,rootss5,rootss6;
    string i;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    cout<<"Enter the value of c: ";
    cin>>c;
    i=i;
    d= (b*b)-4*a*c;
    rootss=roots(a,b,c,d);
    rootss1=roots1(a,b,c,d);
    rootss2=roots2(a,b,c,d);
    rootss3=roots3(a,b,c,d);
    rootss4=roots4(a,b,c,d);
    rootss5=roots5(a,b,c,d);
    rootss6=roots6(a,b,c,d);
    if(d>0)
    cout<<"Solutions: x = "<<rootss<<" and x = "<<rootss1;
     if(d<0)
    cout<<"Complex Solutions: x = "<<rootss3<<" + "<<rootss5<<"i"<<" and x = "<<rootss4<<" - "<<rootss6<<"i";
    if(d==0)
    cout<<"Solution: x = "<<rootss2;
}
float roots(float val1,float val2,float val3,float val4)
{
    
        return((-val2+sqrt(val4))/(2*val1));
}
float roots1(float val1,float val2,float val3,float val4)
{
        return((-val2-sqrt(val4))/(2*val1));
}
float roots3(float val1,float val2,float val3,float val4)
{
    
        return(-val2/(2*val1));
}
float roots4(float val1,float val2,float val3,float val4)
{
        return(-val2/(2*val1));
}
float roots5(float val1,float val2,float val3,float val4)
{
    
        return((sqrt(-val4))/(2*val1));
}
float roots6(float val1,float val2,float val3,float val4)
{
        return(sqrt(-val4)/(2*val1));
}
float roots2(float val1,float val2,float val3,float val4)
{
        return(-val2/(2*val1));
}