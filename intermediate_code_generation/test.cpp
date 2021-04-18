#include <iostream.h>
int main()
{
	 int a=3;
 	 int b=4;
	 int i=0;
	 int n=10;
	if(a<10)
	{
		cout<<"el"<<endl;
	}
	else
	{
		cout<<"L"<<endl;
	}
	do
	{
		a=a+1;
		a=a*a;
		i++;
	}while(a<n);
	int c=a;
	return 0;

}
