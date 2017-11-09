#include<stdio.h>

unsigned int strlen( const char * );

int main(){
	const char thing[20];
	int c;
	
	printf("Vuvedi:");
	gets(thing);
	c=strlen(thing);
		printf("\n%d",c);
}

unsigned int strlen(const char *thing){
	
	int i=0,count = 0;
	for(i=0; thing[i]!='\0'; i++){
	 count++;
	}
	//	printf("%d", count);
		return count;

}
