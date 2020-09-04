// int main()
// {
// 	int x = 5;
// 	char *s = "";
// 	fprintf();
// 	system("gcc ./Sully_x.c -o Sully_x && ./Sully_x");
// }

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
	char *s = "#include <stdlib.h>%c#include <stdio.h>%c#include <strings.h>%cint main(){int x = %d;char str[20];bzero(str, 20);sprintf(str, %c./Sully_%cd.c%c, x);FILE *f = fopen(str, %cab+%c);char *s = %c%s%c;fprintf(f, s, 10, 10, 10, --x, 34, 37, 34, 34, 34, 34, s, 34, 34, 37, 37, 37, 34);fclose(f);if (x > 0){char str1[100];bzero(str1, 100);sprintf(str1, %cgcc ./Sully_%cd.c -o Sully_%cd && ./Sully_%cd%c, x, x, x);system(str1);}}";
	fprintf(f, s, 10, 10, 10, --x, 34, 37, 34, 34, 34, 34, s, 34, 34, 37, 37, 37, 34);
	fclose(f);
	if (x > 0)
	{
		char str1[100];
		bzero(str1, 100);
		sprintf(str1, "gcc ./Sully_%d.c -o Sully_%d && ./Sully_%d", x, x, x);
		// system(str1);
	}
}


// #include <stdlib.h>
// #include <stdio.h>
// #include <strings.h>
// int main()
// {
// 	int x = 5;
// 	char str[20];
// 	bzero(str, 20);
// 	sprintf(str, "./Sully_%d.c", x);
// 	FILE *f = fopen(str, "ab+");
// 	char *s = "#include <stdlib.h>%c#include <stdio.h>%c#include <strings.h>%cint main(){int x = %d;char str[20];bzero(str, 20);sprintf(str, %c./Sully_%d.c%c, x);FILE *f = fopen(str, %cab+%c);char *s = %c%s%c;fprintf(f, s, 10, 10, 10, --x, 34, x, 34, 34, 34, 34, 34, s, 34, 34, x, x, x, 34);fclose(f);if (x > 0){char str1[100];bzero(str1, 100);sprintf(str1, %cgcc ./Sully_%d.c -o Sully_%d && ./Sully_%d%c, x, x, x);system(str1);}}";
// 	printf(s, 10, 10, 10, x, 34, x, 34, 34, 34, 34, s, 34, 34, x, x, x, 34);
// 	fclose(f);
// 	if (x > 0)
// 	{
// 		char str1[100];
// 		bzero(str1, 100);
// 		// sprintf(str1, "gcc ./Sully_%d.c -o Sully_%d && ./Sully_%d", x, x, x);
// 		// system(str1);
// 	}
// }
