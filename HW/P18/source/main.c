#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *in, *out;
	int cht;
	char str[100];
	fopen_s(&in,"welcome.txt", "r");
	fopen_s(&out,"output.txt", "w");
	while (!feof(in))
	{
		cht = fscanf(in, "%s", str);
		if (cht > 0)
			fprintf(out,"%s\n",str);
	}
	fclose(in);
	fclose(out);	
	system("pause");
	return 0;
}