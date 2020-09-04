#include <stdlib.h>
#include <stdio.h>
#include <strings.h>
int main()
{
	int x = 5;
	char str[20];
	bzero(str, 20);
	sprintf(str, "./Sully_%d.c", x);
	FILE *f = fopen(str, "ab+");
	char *s = "#include <stdlib.h>%c#include <stdio.h>%c#include <strings.h>%cint main()%c{%c%cint x = %d;%c%cchar str[20];%c%cbzero(str, 20);%c%csprintf(str, %c./Sully_%cd.c%c, x);%c%cFILE *f = fopen(str, %cab+%c);%c%cchar *s = %c%s%c;%c%cfprintf(f, s, 10, 10, 10, 10, 10, 9, --x, 10, 9, 10, 9, 10, 9, 34, 37, 34, 10, 9, 34, 34, 10, 9, 34, s, 34, 10, 9, 10, 9, 10, 9, 10, 9, 10, 9, 9, 10, 9, 9, 10, 9, 9, 34, 37, 37, 37, 34, 10, 9, 9, 10, 9, 10);%c%cfclose(f);%c%cif (++x > 0)%c%c{%c%c%cchar str1[100];%c%c%cbzero(str1, 100);%c%c%csprintf(str1, %cgcc ./Sully_%cd.c -o Sully_%cd && ./Sully_%cd%c, x, x, x);%c%c%csystem(str1);%c%c}%c}";
	fprintf(f, s, 10, 10, 10, 10, 10, 9, --x, 10, 9, 10, 9, 10, 9, 34, 37, 34, 10, 9, 34, 34, 10, 9, 34, s, 34, 10, 9, 10, 9, 10, 9, 10, 9, 10, 9, 9, 10, 9, 9, 10, 9, 9, 34, 37, 37, 37, 34, 10, 9, 9, 10, 9, 10);
	fclose(f);
	if (++x > 0)
	{
		char str1[100];
		bzero(str1, 100);
		sprintf(str1, "gcc ./Sully_%d.c -o Sully_%d && ./Sully_%d", x, x, x);
		system(str1);
	}
}