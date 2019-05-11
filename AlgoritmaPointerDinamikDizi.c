
/*SORU;
0 ile 100 arasýnda rasgele deðerlerden oluþturacaðýnýz 100 adet tam sayýyý bir diziye kaydederek,
 bu dizi içerisindeki tamsayýlardan 5. biti 0 olanlarý oluþturacaðýnýz dinamik bir dizi içerisine 
 pointer iþlemeleri kullanarak aktarýnýz. 
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

main ()
{
   int *pointer,dizi[100],sayac=0,j=0;
    srand(time(NULL)); 
    
     //Rastgele Sayýlarý Oluþturduk
 for(int i=0;i<100;i++){
       dizi[i]=rand()%100;
		if ((dizi[i]  & 1 << 5)==0)
		sayac++;	//5.biti 0 olanlarýn sayýsýný sayaç deðiþkeninde tutuyoruz.
}

	//Pointer için tutucaðýmýz sayý kadar bellekten yer ayýrýyoruz.
	pointer=(int *) malloc(sayac*sizeof(int));

printf(" 5.biti 0 olanlar\n--------------------\n");
	for (int k=0;k<100;k++)
  {
  //5.biti 0 olanlarý pointer a atýyoruz.
  	if ((dizi[k]  & 1 << 5)==0)
  	{
  		 *(pointer+j)=dizi[k];
  		 printf(" %d \n",*(pointer+j));
  		 j++;
	}
  } 
	//Ayrýlan alaný serbest býrakýyoruz.
  free(pointer);
       
 
 
 
}

