#include <iostream>
using namespace std;

int main() 
{
int n,i,j; 
cout<<"Program Segitiga"<<endl;
cout<<"Nama    = Nurhidayat"<<endl;
cout<<"NIM     = 41517120059"<<endl;	
cout<<"masukan tinggi:";
cin>>n;
 
 for (i=0; i<n; i++) 
 {
    for (j=n-1; j>=i; j--)
     cout<<" ";
    for (j=0; j<2*i+1; j++)
     {
       if (i == 0 || i == n-1)
    		cout<<"*";
       else
        {
    		if (j == 0 || j == 2 * i)
    			cout<<"*";
	   		else
    			cout<<" ";
       }
    }
  cout<<"\n";
 }
 return 0;

}
