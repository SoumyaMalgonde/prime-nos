#include <iostream>
#include<math.h>
int isprime(int);


 int main()
 {
 	int n;
 	cin>>n;
 	for(int i=2;i<=n;i++)
 	if(isprime(n))
 	cout<<i<<endl;
 	
 }

int isprime(int n)
{
for(int i=0;i<pow(n,0.5);i++)
if(n%i==0)
return 0;
return 1;
}


