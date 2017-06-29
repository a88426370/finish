#include <stdio.h>

void printtri(void);

int n=0;

int main(void){
	while(scanf("%d",&n)!=EOF){
		printtri();
	}
}
void printtri(void){
	for(int x=0;x<n;x++){//work n time
		int A=0,F=0;
		scanf("%d%d",&A,&F);
		for(int y=0;y<F;y++){ //work F time
			for(int i=0;i<A;i++){
				for(int j=0;j<=i;j++){
					printf("%d",i+1);
				}
				printf("\n");
			}
			for(int i=1;i<A;i++){
				for(int j=A-1;j>=i;j--){
					printf("%d",A-i);
				}
				printf("\n");
			}
			printf("\n");
		}
	}	
}
