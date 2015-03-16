
#include<stdio.h>
int valid(char code[]);

int main(){
	char code[7];
	printf("Please enter a postal code:");
	scanf("%s",code);
	
	int validity = valid(code);
	
		
	printf("%d\n", validity);
	
	return 0;
}

int valid(char code[])
{
	int valid;
	if (('a' <= code[0] && code[0] <= 'z') || ('A' <= code[0] && code[0] <= 'Z'))
	{
		if ('0' <= code[1] && code[1] <= '9')
		{
			if (('a' <= code[2] && code[2] <= 'z') || ('A' <= code[2] && code[2] <= 'Z'))
			{
				if ('0' <= code[3] && code[3] <= '9')
				{
					if (('a' <= code[4] && code[4] <= 'z') || ('A' <= code[4] && code[4] <= 'Z'))
					{
						if ('0' <= code[5] && code[5] <= '9')
						{
							valid=1;
						}
						else
							valid=0;
					}
					else
						valid=0;
				}
				else
					valid=0;
			}
			else
				valid=0;
		}
		else
			valid=0;
	}
	else
		valid=0;

	return valid;

}

