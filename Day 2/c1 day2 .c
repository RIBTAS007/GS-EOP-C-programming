#include <stdio.h>

int main(void) 
{
	int i_var;
	float f_var;
	double d_var;
	char c_var;
	
	printf("sizeof(i_var) = %d bytes\n",sizeof(i_var));
	printf("sizeof(f_var) = %d bytes\n",sizeof(f_var));
	printf("sizeof(d_var) = %d bytes\n",sizeof(d_var));
	printf("sizeof(c_var) = %d bytes\n",sizeof(c_var));
	
	return 0;
}