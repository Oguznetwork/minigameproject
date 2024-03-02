#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int T= 1;
	int K= 2;
	int M= 3;
	int i;
	int oyuncu=0;
	int bilgisayar=0;
	int secim;
	srand(time(NULL));
	degeralma:
	printf("Tas:1 ,Kagit:2 ve Makas:3\n");
	
	for(i=0;i<5;i++)
	{
		printf("\n\n");
		printf("Seciminizi giriniz:");
		scanf("%d",&secim);
		int bilgisayar = rand()%3 +1;
		
		if(secim==1)
		{
			if(bilgisayar==1)
			{
				printf("Berabere Bitti !!!\n");
			}
			
			if(bilgisayar==2)
			{
				printf("Bilgisayar Kazandi !!! Kaybettiniz...\n");
				
				int bilgisayar=bilgisayar+1;
				
			}
			if(bilgisayar==3)
			{
				printf("Kazandiniz Tebrikler !!!\n");
				oyuncu=oyuncu+1;
			}		
		}

		else if(secim==2)
		{
			if(bilgisayar==1)
			{
				printf("Kazandiniz Tebrikler !!!\n");
				oyuncu=oyuncu+1;
			}
			if(bilgisayar==2)
			{
				printf("Berabere Bitti !!!\n");
			}
			if(bilgisayar==3)
			{
				printf("Bilgisayar Kazandi !!! Kaybettiniz...\n");
				bilgisayar=bilgisayar+1;
			}
			
		}
		
		
		
		else if(secim== 3)
		{
			if(bilgisayar==1)
			{
			
				printf("Bilgisayar Kazandi!!! Kaybettiniz...\n");
				bilgisayar=bilgisayar+1;
			}
			if(bilgisayar==2)
			{
				printf("Kazandiniz Tebrikler !!!\n");
				oyuncu=oyuncu+1;
				
			}
			
			if(bilgisayar==3)
			{
				printf("Beraber Bitti !!!\n");
			}
		}
			
			else{
				printf("Hatali Giris Yaptiniz .... Lutfen Tekrar Deneyiniz !!!\n");
				printf("Tekrar Denemek icin 1'e , oyundan cýkmak icin 0'a basiniz....''");
				int hataligiris;
				scanf("%d",&hataligiris);
				if(hataligiris==1)
				{
					goto degeralma;
				}
				else
				{
					break;
				}
			}
	}
	
	
	
	
		
			if(bilgisayar>oyuncu)
			{
			
			printf("Sonuc ::: Bilgisayar Kazandi...\n");
		}
			else if(oyuncu>bilgisayar){
				printf("Sonuc ::: Tebrikler Oyunu Kazandiz...\n");
			}
				
			else if(oyuncu==bilgisayar)
			{
				printf("Sonuc ::: Berabere Bitmiþtir !!!!!!!\n");
				}	
		


	return 0;
}
