
/*SORU;
0 ile 100 aras�nda rasgele de�erlerden olu�turaca��n�z 100 adet tam say�y� bir diziye kaydederek,
 bu dizi i�erisindeki tamsay�lardan 5. biti 0 olanlar� olu�turaca��n�z dinamik bir dizi i�erisine 
 pointer i�lemeleri kullanarak aktar�n�z. 
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

main ()
{
   int *pointer,dizi[100],sayac=0,j=0;
    srand(time(NULL)); 
    
     //Rastgele Say�lar� Olu�turduk
 for(int i=0;i<100;i++){
       dizi[i]=rand()%100;
		if ((dizi[i]  & 1 << 5)==0)
		sayac++;	//5.biti 0 olanlar�n say�s�n� saya� de�i�keninde tutuyoruz.
}

	//Pointer i�in tutuca��m�z say� kadar bellekten yer ay�r�yoruz.
	pointer=(int *) malloc(sayac*sizeof(int));

printf(" 5.biti 0 olanlar\n--------------------\n");
	for (int k=0;k<100;k++)
  {
  //5.biti 0 olanlar� pointer a at�yoruz.
  	if ((dizi[k]  & 1 << 5)==0)
  	{
  		 *(pointer+j)=dizi[k];
  		 printf(" %d \n",*(pointer+j));
  		 j++;
	}
  } 
	//Ayr�lan alan� serbest b�rak�yoruz.
  free(pointer);
       
 
 
 
}

