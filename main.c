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

//Program �al��t���nda ka� tane sayi girilsin �eklinde soru sorulacak o kadar say� klavyeden girilir
//(ka��nc� say� girildi�i de belirtilecek) buna g�re bu say�lardan ka� tanesi tek ka� tanesi �ift say� ise
//bu tek ve �ift say�lar�n adet say�lar�n� alt alta yazd�r�n�z.

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
