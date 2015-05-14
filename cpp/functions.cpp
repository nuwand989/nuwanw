#include<iostream>
using namespace std;

void sayThanks(string sName , bool bNormal ) 
{
 if(bNormal)      
 {
	cout<<"Thanks "<<sName<<endl;
	
}
else
{
cout<<"Thanks\n";
}
}

int main()
{
	sayThanks("nuwan", true);
	sayThanks("nuwan", false);
	return 0;
}

