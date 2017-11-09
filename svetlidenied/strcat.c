#include<stdio.h>



char* strcat( char* destination, const char* source );

int main(){
char destination[20],source[20];
	printf("dai1:   ");
	gets(destination);

	printf("dai2:   ");
	gets(source);


	char s[100];
	s=strcat(&destination,&source);
	printf("%s",s);
return 0;
}

char* strcat( char *destination, const char *source){
	int i=0,p=0;
	char c[100];
		for(i=0;destination[i]!="\0";i++){
			c[p]=destination[i];
			p++;
			}
		for(i=0;source[i]!="\0";i++){
			c[p]=source[i];
			p++;
			}
return c;
}
