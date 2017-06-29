#include <stdio.h>
#include <string.h>

void countword(void);
int isword(char);

int count=0;
char str[1023]={0};
int arr[1023]={0};

int main(void){
	while(fgets(str,sizeof(str),stdin)){
		countword();
		str[0]='\0';
	}
}
void countword(void){
	int lastone_long=0;
	int lastone_index=0;

	for(int i=0;i<strlen(str);i++){
		arr[i]+=isword(str[i]);
		if(isword(str[i])==1){
			lastone_long = i - lastone_index;
			lastone_index = i;
			if(lastone_long > 1){
				count++;
			}
		}
	}

	printf("%d\n",count+1);
	count=0;
}
int isword(char st){
	if(st >= 'a' && st <= 'z' || st >= 'A' && st <= 'Z')
		return 1;
	else
		return 0;
}
