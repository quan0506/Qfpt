#include <stdio.h>
int main(){
	int n;
	int S=0; 
	do{
	printf("nhap so n: ") ;
	scanf("%d",&n);
	} while(n<=0) ;
	

	for(int i=0;i<n;i++) {
		if(i%2!=0) ;
		printf (",%d",i) ;
		S=S+i;
	}
	printf ("tong cac uoc la :%d",n,) ;
}
	
