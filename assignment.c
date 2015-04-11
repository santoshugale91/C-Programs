
#include<stdio.h>
#include<string.h>
int main()
{
	char data[100],data1[164],i,j;
	int l,space,s1,cnt,s2;
	gets(data);
//	printf("\n Str is:=%s",data);
	l=strlen(data);
	space=64-l;
	if(space%2==0)
	{
		s1=space/2;
		s2=s1;
	}
	else
	{
		s1=space/2;
		s2=s1+1;
	}
	i=0;
		while(i<=s1-1)
		{
			data1[i]='_';
			i++;
		}
		cnt=0;
			while(cnt!=l)
		{
			data1[i]=data[cnt];
			cnt++;
			i++;
		}
	cnt=0;
		while(cnt!=s2)
		{
			data1[i]='_';
			i++;
			cnt++;
		}
		for(j=0;j<strlen(data1)-1;j++)
	printf("%c",data1[j]);
	return 0;
}
