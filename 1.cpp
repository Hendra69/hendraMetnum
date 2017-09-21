#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<windows.h>

 int hasil;
 int x;
 int p;
 int q;
 int r;
 
 int tambah(int p ,int q)
 {
 	hasil=p+q;
 	return hasil;
 }
 int kurang(int p,int q)
 {
 	hasil=p-q;
 	return hasil;
 }
 int kali(int p, int q)
 {
 	hasil=p*q;
 	return hasil;
 }
 
 int pangkat(int p, int q){
 	int hasil;
 	
 	hasil=pow(p,q);
 	return hasil;
 }
 void fungsi(int p,int q);	

 
int  main()
 {
 	int pil=1,p1,q1;
 	int hasil;
 	
	 while(pil!=5)
 	{
 		menu:
 		printf(" Kalkulator Apa Ada Nyaa ");
 		printf("\n Metode Numerik ");
 		printf("\n Hendra Abdul Rohman ");
 		printf("\n 3411151132");
 		printf("\n SIE C");
		printf("\n\n1. Penjumlahan");
		printf("\n\n2. Pengurangan");
		printf("\n\n3. Perkalian");
		printf("\n\n4. Pangkat");
		printf("\n\n5. Fungsi");
		printf("\n\nPilih: ");
		scanf("%d",&pil);
		switch(pil)
		{
			case 1 : system("cls");
					 printf("masukan nilai p: ");
					 scanf("%d",&p1);
					 printf("masukkan nilai q: ");
					 scanf("%d",&q1); 
					 hasil=tambah(p1,q1);
					 printf("Hasil dari p+q adalah %d",hasil);
					 printf("\n");
					 getch();
					 system("cls");
					 goto menu;
					 
					 
			case 2 : system("cls");
					 printf("masukkan nilai p:");
					 scanf("%d",&p1);
					 printf("masukkan nilai q:");
				     scanf("%d",&q1); 
					 hasil=kurang(p1,q1);
					 printf("Hasil p-q adalah %d",hasil);
					 printf("\n");
					 getch();
					 system("cls");
					 goto menu;
					 
			case 3 : system("cls");
					 printf("masukkan nilai p:");
					 scanf("%d",&p1);
					 printf("masukkan nilai q:");
				     scanf("%d",&q1); 
					 hasil=kali(p1,q1);
					 printf("Hasil p*q adalah %d",hasil);
					 printf("\n");
					 getch();
					 system("cls");
					 goto menu;
					 
			case 4 : system("cls");
   					 printf("masukan nilai p: ");
   					 scanf("%d",&p1);
   					 printf("masukan nilai q: ");
   					 scanf("%d",&q1);
   					 hasil = pangkat(p1,q1);
   					 printf("Hasil p^q adalah %d",hasil);  				 
					 getch();
					 system("cls");
					 goto menu;
					 
			case 5 : printf("Operasi hitung F(X)");
	                        printf("\n******************************************\n");
				            printf("masukan bilangan p : ");
                            scanf("%d",&p1);
                            printf("masukan bilangan q : ");
                            scanf("%d",&q1);
                            
							for (r=p1;r<=q1;r++){
						        printf ("\nJika p = %d \n",& r);
	                            hasil=((2 * (pow(r,2)) - ( 3 * r) + 1));
	                            printf("\nf(%d)=2(%d)^2 - 4(%d) + 1= %d", r, r, r, hasil);
	                            printf("\n**************************************\n");
						    }
						    
						    getch();
						    system("cls");
						    goto menu;
						    
						    getch();
						    system("cls");
						    goto menu;
		  	
			  default : printf("Mohon maaf Pilihan yang anda masukan tidak ada dalam menu");
			  getch();
			  system("cls"); 
			  goto menu;
			
			
			
		}
 	}
 		
 	
 }
  void fungsi(int p,int q)
 {	
 	int r,hasi22;
 	
 	for(r=p;r<=q;r++);{
 	hasi22=(2*(r*2))-(3*r)+1;
 	printf("Hasil:%d\n",hasi22);
 	}
 	
 }
 
