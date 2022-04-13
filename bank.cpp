 #include <stdio.h>
 int main (){
 	int S = 4000;
	 int year;
	 printf ("nhap year= ") ;
	 scanf ("%d ",&year) ;
	 
	 int i=0;
	 
	 while(i < year ) {
	 	// logic khi yes
		 int L = S * 8/100;
		 S += L;
		 i++;
		  
		  
	 }
	    //  logic khi no 
	    printf ("S= %f \n ",S) ;
}
