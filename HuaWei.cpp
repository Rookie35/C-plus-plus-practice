//华为笔试第1题 
#include<stdio.h>
#include<string.h>
int main()
{
	
	char arr[1000];
	char ans[1000];
	
	int len=0;
	int n;
	scanf("%d",&n);
	scanf("%s",arr);

	for(int i=0;i<100;i++)
	{
		if(arr[i]=='\0')
		{
			break;	
		}
		len++;
	}
	
	int i=0;
	while(n--)
	{
		if(arr[i]=='0')
		{
			int j;
			for(j=i+1;j<i+9;j++)
			{
				ans[j-1]=arr[i+9-j];
				
			}
			ans[j-1]=' ';
		}
		if(arr[i]=='1') 
		{
			int j;
			for(j=i+1;j<i+9;j++)
			{
				ans[j-1]=arr[j];
			}
			ans[j-1]=' ';
		}
		i+=9;
	}

	printf("%s\n",arr);
	printf("%s\n",ans);
	printf("%d\n",len);
	printf("%d\n",strlen(arr));

	return 0;
 } 
