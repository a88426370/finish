#include <stdio.h>
#include <string.h>

#define key -7

int main(void){
	char str[1023]={0};
	
	while(fgets(str,sizeof(str),stdin){
		changeWord();	
		printf("\n");
		str[0]='\0';
	}

	return 0;
}
void changeWord(void){
	for(int i = 0;i <strlen(str);i++){
		if(str[i] == '\n' || str[i] == '\0')
			break;
		else{
			str[i]+=key;
			printf("%c",str[i]);
		}
}
	
