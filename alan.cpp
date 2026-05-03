//üçgen dikdörtgen ve kare hesabý

#include<stdio.h>

int main()

{
	int a,b,sec,c;
	printf("\n 1-ucgen alani");
	printf("\n 2-kare alani");
	printf("\n 3-dikdorten alani\n");
	printf("bir ile uc arasinda secim yapiniz \n");
	scanf("%d",&sec);
	
	if (sec==1) {
		printf("ucgenin tabanini giriniz : ");
		scanf("%d",&a);
		printf("ucgenin yuksekligini giriniz : ");
		scanf("%d",&b);
		c=a*b/2;
		printf("ucgenin alani : %d",c);	
		
	}
	 
	if (sec==2) {
		printf("karenin kenarini giriniz : ");
		scanf("%d",&a);
		c=a*a;
		printf("karenin alani : %d",c);	
	}
	
	if (sec==3) {
		printf("dikdorten uzun kenarini giriniz : ");
		scanf("%d",&a);
	    printf("diktorgen kisa kenar giriniz : ");
	    scanf("%d",&b);
	    c=a*b;
		printf("dikdörtgen alani : %d",c);	}
	
	
return 0;	
}
