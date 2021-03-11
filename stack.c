#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main ()
{
	int i = 0, j,n, s[100], num;
	char in[100];
	scanf("%d", &n);
	scanf(" %[^\n]", in);
	
	char *token = strtok(in, " ");
	for(j=0; j<n; j++) {
		if(strcmp(token, "+") == 0)
		{
			i--;
			num = s[i-1] + s[i];
			s[i] = 0;
			s[i-1] = num;
		}
		else if (strcmp(token, "-") == 0) {
			i--;
			num = s[i-1] - s[i];
			s[i] = 0;
			s[i-1] = num;
		} 
		else if (strcmp(token, "*") == 0) {
			i--;
			num = s[i-1] * s[i];
			s[i] = 0;
			s[i-1] = num;
		} else {
			s[i] = atoi(token);
			i++;
		}
		token = strtok(NULL, " ");
		}
	printf("%d", num);
	return 0;
}
