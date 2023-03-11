#include<iostream>
using namespace std;

int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		long long  x,ans=0;
		scanf("%lld",&x);
		if (x>=10)
		{
			ans=x/10;
			x=x%10;
		}
		if (x>=9)
			ans++;
		printf("%lld\n",ans);
	}
	return 0;	
} 