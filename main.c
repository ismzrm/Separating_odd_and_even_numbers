#include <stdio.h>
#include <stdlib.h>
#define yazdir printf

int main(int argc, char *argv[])
{
/*
int a=15; 
a++; a=a+1; a+=1;
yazdir("%d",a);
*/

//Program çalýþtýðýnda kaç tane sayi girilsin þeklinde soru sorulacak o kadar sayý klavyeden girilir
//(kaçýncý sayý girildiði de belirtilecek) buna göre bu sayýlardan kaç tanesi tek kaç tanesi çift sayý ise
//bu tek ve çift sayýlarýn adet sayýlarýný alt alta yazdýrýnýz.

int tek=0,cift=0,adet,i,sayilar[999];
printf("Kac tane sayi girilsin: "); scanf("%d",&adet);
for (i=1; i<=adet; i++)
{
printf("%d. sayiyi giriniz: ",i);scanf("%d",&sayilar[i]);
}
for (i=1; i<=adet; i++)
{
if(sayilar[i] % 2 == 1)
tek+=1;
else
cift+=1;
}
printf("Tek sayi adeti: %d\n",tek);
printf("Cift sayi adeti: %d",cift);
	
getch();
}
