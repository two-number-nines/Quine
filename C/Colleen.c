#include <stdio.h>

// comment
void mandatory_function(void){}

int main(void) {
	// comment
	mandatory_function();
	char *s = "#include <stdio.h>%c%c// comment%cvoid mandatory_function(void){}%c%cint main(void) {%c%c// comment%c%cmandatory_function();%c%cchar *s = %c%s%c;%c%cprintf(s, 10, 10, 10, 10, 10, 10, 9, 10, 9, 10, 9, 34, s, 34, 10, 9, 10);%c}";
	printf(s, 10, 10, 10, 10, 10, 10, 9, 10, 9, 10, 9, 34, s, 34, 10, 9, 10);
}