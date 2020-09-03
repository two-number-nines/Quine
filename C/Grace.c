#include <stdio.h>
// comment
#define FILE fopen("./Grace_kid.c", "ab+")
#define DATA "#include <stdio.h>%c// comment%c#define FILE fopen(%c./Grace_kid.c%c, %cab+%c)%c#define DATA %c%s%c%c#define NOMAIN(FILE) int main(){fprintf(FILE, DATA, 10, 10, 34, 34, 34, 34, 10, 34, DATA, 34, 10, 10); return(0);}%cNOMAIN(FILE)"
#define NOMAIN(FILE) int main(){fprintf(FILE, DATA, 10, 10, 34, 34, 34, 34, 10, 34, DATA, 34, 10, 10); return(0);}
NOMAIN(FILE)