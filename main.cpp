#include<iostream>

using namespace std;

#define N 8
#define M 4
int joseph(int n,int m)
{
	if(n==1)
		return 0;
	else
		return (joseph(n-1,m)+m)%n;
}
void main()
{
	int a[N];
	int n=N,k=N;
	int i,p,num=0;
	
	cout<<joseph(8,4)<<endl;
	for(i=0;i<N;i++)
		a[i]=1;
    p=0;
	while(k!=1)
	{
		if(a[p])
		   num++;
		if(num==M)
		{
			num=0;
			a[p]=0;
			k--;
		}
		p=(p+1)%n;
	}

	for(i=0;i<N;i++)
	 if(a[i]) cout<<i<<endl;
	
}

