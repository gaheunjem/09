#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i;
	int a[5] = {1,2,3,4,5};
	int b[5] = {1,2,9,4,5};

	
	for(i=0;i<5;i++)
	{
		if (a[i] != b[i])
		{
			printf("%d is different\n", i);
		}
	}

	
	return 0;
}
