#include<stdio.h>
int i,j,s,k;
int main(){
	if(!(s[i]==c))
	for(j=i+1;s[j];j++)
	{
		if(s[i]==s[j])
		s[j]=c;
	}
	for(i=0;s[i];i++)
	{
		s[i]=s[i+k];
		if(s[i]==c)
		{
			k++;
			i--;
		}
	}
	printf("string after removing all duplicates");
	printf("%s",s);
	return 0;
}