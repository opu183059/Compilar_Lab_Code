// to accept languages using rules 'a*b+'

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
		else if (state==0||state==1 && s[i]=='b')
		state=1;
		else if (state==1 && s[i]=='a')
		{
			state=2;
			break;
		}
		else if (s[i] != 'a' || s[i] != 'b')
		{
			state=2;
			break;
		}
	}
	if (state==1) printf("\n %s is accepted under rule 'a*b+'", s);
	else printf("\n %s is not accepted under rule 'a*b+'", s);
}
