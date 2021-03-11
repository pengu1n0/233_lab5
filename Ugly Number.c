#include<stdio.h>
int main()
{
	int n,i,j=0,a=0,b[3]={2,3,5},sum;
	scanf("%d",&n);
	for(i=1;1;i++)
	{
		sum=i;
		while(j!=3)
		{
			if(sum%b[j]==0)
            {
                sum/=b[j];
            }
            else
                j++;
		}
		j=0;
        if(sum==1)
        {
            a++;
            if(a==n)
            {
                printf("%d",i);
                break;
            }
        }
	}
	
	
		
}
