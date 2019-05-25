#include<iostream>
#include<math.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
long long int cp(long long int a,long long int b);
int main() {
	long long int m,n,pos,p,d=0,c=0,e=0,g=0,mi;long long int x,y,z;

cin >> m>> n;
for(long long int i=m;i<=n;i++)
{
	
	for(long long int j=i+1;j<=n;j++)
	{
		x=cp(i,j);
		if(x==1)
		{
			for(long long int k=j+1;k<=n;k++)
			{
				y=cp(j,k);
				if(y==1)
				
					z=cp(i,k);
				if(z!=1)
				{
					cout<< i << " "<< j <<" "<< k;
					return 0;
				}
			}
		}
	}
}
cout <<-1;
return 0;
}
long long int cp(long long int A, long long int B) {
    if(B==0)
        return A;
    else
        return cp(B, A % B);
}
