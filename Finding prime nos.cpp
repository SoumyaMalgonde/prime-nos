#include <iostream.h>
#include<math.h>
int isprime(int);


 int main()
 {
 	int n;
 	cin>>n;
 	for(int i=2;i<=n;i++)
 	if(isprime(i))
 	cout<<i<<endl;
 return 0;
 }

int isprime(int n)
{
for(int i=2;i<=pow(n,0.5);i++)
if(n%i==0)
return 0;
return 1;
}


