#include<iostream>
#include<math.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int m,n,pos,p,d=0,c=0,e=0,g=0,mi;

cin >> m>> n;char a[m][n];
for(int i=0;i<m;i++)
for(int j=0;j<n;j++)

	cin >>a[i][j];
	
	for(int i=0;i<m;i++){
	d=0;
for(int j=0;j<n;j++)
{
	if(a[i][j]=='S')
	{
		d=1;
		break;
	}
}
if(d==0)
{
	c=c+n;
	e++;
}
}

	for(int i=0;i<n;i++){
	d=0;
for(int j=0;j<m;j++)
{
	if(a[j][i]=='S')
	{
		d=1;
		break;
	}
}
if(d==0)
{
	c=c+m;
	g++;
}
}

cout << c-(e*g);
return 0;
}
