#include <stdio.h>

int main()
{
	int a, b, c, d;
	float h;
	char nama[50];
	printf("nama");
	scanf("%[^\n]c",&nama);
	printf("==============================\n");
	printf("masukkan nilai kalkulus");
	scanf("%d",&a);
	printf("masukka nilai bahasa inggris");
	scanf("%d",&b);
	printf("nilai kepala otak kau itu");
	scanf("%d",&c);
	printf("nilai matematika");
	scanf("%d",&d);
	printf("==============================\n");
	
	h =(a+b+c+d)/ 4;
	
	if(h>=75)
	{
		printf("YEAYYYYYY KAMU LULUS\n");
	}
	else
	{
		printf("YAHHHHHH GAGAL\n");
	}
	printf("======================================\n");
	printf("MADE BY : BON BON\n");
	printf("NIM 	: 202110370311395\n");
	printf("KELAS	: I\n");
	printf("======================================\n");
	
		
	}
	