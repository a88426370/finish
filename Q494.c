#include <stdio.h>
#include <string.h>

int main(void){
	char str[1023]={0};
	int count=0;
	int notchar=0;
	while(fgets(str,sizeof(str),stdin)){
		for(int i=0;i<strlen(str);i++){
			if(str[i] == '\0'){
				break;
			}else if(str[i] == ' '){
				count++;
			}else if(str[i]=='.'&&str[i+1]=='.'&&str[i+2]=='.'){
				notchar++;		
			}
		}
		printf("%d\n",(count+1)-notchar);
		count=0;
		notchar=0;	
	}
}
