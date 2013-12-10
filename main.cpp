#include<iostream>
#include<assert.h>

using namespace std;


int joseph(int n,int m)
{
	if(n==1)
		return 0;
	else
		return (joseph(n-1,m)+m)%n;
}
int joseph_iter(int n,int m)
{
	int s=0;
	for(int i=2;i<=n;i++)
		s=(s+m)%i;
	return s;
}

int joseph_simu(int n,int m)
{
    int *a = new int[n];
	assert(a!=NULL);

	int p=0;
	int k=n;
	int num=0;
     
	for(int i=0;i<n;i++)
		a[i]=1;
   
	while(k!=1)
	{
		if(a[p])
		   num++;
		if(num==m)
		{
			num=0;
			a[p]=0;
			k--;
		}
		p=(p+1)%n;
	}

	for(i=0;i<n;i++)
	 if(a[i]) return i;
	return -1;
}
int main()
{
	cout<<joseph(8,4)<<endl;
	cout<<joseph_iter(8,4)<<endl;
    cout<<joseph_simu(8,4)<<endl;
	return 0;
}

