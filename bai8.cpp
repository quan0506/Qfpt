#include <stdio.h> 
int main() {
	
	int  n;
	do {
	printf ("Nhap n=");
	scanf ("%d",&n);
	}while (n<=0);
    for(int i=2;i<n;i++){
    			int  c= 0 ;  
    			int t ; 
	while (t <=i/2) {
    	if ( i%t==0){
	        c++;
    		 break; 
   		}
        t++;
	}
	 if(c==0){
		 	printf ( "%d  day la so nguyen to ",i);
		
	  } 
    }
}
		
    	 
