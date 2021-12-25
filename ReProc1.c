// to accept languages using rules 'a*'

#include<stdio.h>
#include<string.h>

void main()
{
	int state=0, i, len;
	char s[20];
	printf("\nEnter a String:");
	gets(s);
	len= strlen(s);
	for(i=0; i<len; i++)
	{
		if (state==0 && s[i]=='a')
		state=0;
		else if (state==0 && s[i]!='a')
			{
			state=1;
			break;
		}
	
	}
	if (state==0) printf("\n %s is accepted under rule 'a*'", s);
	else printf("\n %s is not accepted under rule 'a*'", s);
}
