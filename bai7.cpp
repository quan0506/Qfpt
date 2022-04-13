#include <stdio.h>
int main(){
	int n;
	do{
	printf("nhap so n: ") ;
	scanf("%d",&n);
	} while(n<=0) ;
	

	for(int i=0;i<n;i++) {
		if(i%2!=0) {	
		int i2 = i;
		int t=0;
		while (i2!=0) {
			t=t*10+i2%10;
			i2/=10; 
		}
		printf ("so dao nguoc: %d\n",t) ;
}
}
}
		 
	

    
		
