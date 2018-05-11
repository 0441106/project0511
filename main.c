#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,s;
	s=0;
	for(i=0;i<11;i++){
		s=s+i;
	}
	printf("s=%d\n",s);
	return 0;
}
