/* CMD BANK
Yunus Emre Aydýnlý
22.08.2020 00:11 */
#include<stdio.h>
#include<locale.h>
#include<conio.h>   

int language;
int main() {
	
	// setlocale(LC_ALL,"turkish");

	int pass, x=10;	

	printf("\t\t\t\t\t --------------------------------------- \n");
	printf("\t\t\t\t\t *           Inserting the card...     *\n");
	printf("\t\t\t\t\t --------------------------------------- \n\n");
	sleep(2);
	system("CLS");
	printf("\t\t\t\t\t --------------------------------------- \n");
	printf("\t\t\t\t\t *           Inserting the card...     *\n");
	printf("\t\t\t\t\t *  The card is approved, please wait. *\n");
	printf("\t\t\t\t\t --------------------------------------- \n\n");
	sleep(2);
	system("CLS");
	
	printf("\t\t\t\t\t ---------------------------------------- \n");
	printf("\t\t\t\t\t *           WELCOME TO CMD BANK!       *\n");
	printf("\t\t\t\t\t ---------------------------------------- \n\n");
	 	
 	printf("\t\t\t\t\t        Please choose your language!    \n");
	printf("\t\t\t\t\t  (English = 1 / Turkish = 2 / EXIT: 3): ");
 	scanf("%d", &language);

 	if (language == 1) {
 			printf("\n\t\t\t\t\tApplication language is English. Please wait...");
 		
	 } else if (language == 2) {
	 		printf("\n\t\t\t\t\tUygulama dili Turkce yapiliyor. Lutfen Bekleyiniz...");
	 } 
	   else if (language == 3) {
	   	return 0;
	   }
	 else {
	 	system("CLS");
	 	//printf("\n\n\n\n\n\n\n\n\n\n\n\n"); //bunu açarsan hata mesajý ortalanýr.
	 	printf("\t\t\t\t ---------------------------------------------------------\n");
		printf("\t\t\t\t *  Error! Please enter the numbers requested from you.  *\n");
		printf("\t\t\t\t ---------------------------------------------------------");
	 	sleep(1);
	 	system("CLS");
	 	
	return main();
	 }
 
 		sleep(1);
	   	system("CLS");

	while (x != 0) {
		if(language == 1 ) {
			system("CLS");
			printf("\t\t\t\t\t ---------------------------------------- \n");
			printf("\t\t\t\t\t *           WELCOME TO CMD BANK!       *\n");
			printf("\t\t\t\t\t ---------------------------------------- \n\n");
			printf("\t\t\t\t\t\a Enter your password: ");

	   }
		else {
			system("CLS");
			printf("\t\t\t\t\t ---------------------------------------- \n");
			printf("\t\t\t\t\t *        CMD BANKASINA HOSGELDINIZ!    *\n");
			printf("\t\t\t\t\t ---------------------------------------- \n\n");
			printf("\t\t\t\t\t\a Parolanizi giriniz: ");

		}
		scanf("%d", &pass);	
		if (pass == 123) {
		if(language == 1 ) {
			printf("\n\t\t\t\t\t Logging in...\n");

		}
		else {
			printf("\n\t\t\t\t\t Giris yapiliyor...\n");

		}
		x=0;
		if(language == 1) {
			printf("\t\t\t\t\t Please wait...");
			sleep(1);
	   		system("CLS");
		}
		
		else {
			printf("\t\t\t\t\t Lutfen Bekleyiniz...");
			sleep(1);
	   		system("CLS");
		}	
	}
	    else {
	    if(language == 1) {
	    	printf("\n\t\t\t\t\t Wrong password, try another password."); 
			sleep(1);
	    	system("CLS");
		}
		else {
			printf("\n\t\t\t\t\t Yanlis sifre, baska bir sifre deneyin.");
			sleep(1);
			system("CLS"); 
		}  
	}
   }

	system("CLS");
	calistir();
	
	return 0;
}

void calistir() {
	int islem;
	int bakiye = 1000;
	int tutar;
	
	if(language == 1) {
		printf("\t\t\t\t\t ----------------------------------------\n");
		printf("\t\t\t\t\t *           WELCOME TO CMD BANK!       *\n");
		printf("\t\t\t\t\t ----------------------------------------\n\n");
	}
	else {
		printf("\t\t\t\t\t ----------------------------------------\n");
		printf("\t\t\t\t\t *        CMD BANKASINA HOSGELDINIZ!    *\n");
		printf("\t\t\t\t\t ----------------------------------------\n");
	  //printf("\t\t\t\t\t  |\t\t\t\t\t     |\n");

	}

	if(language == 1) {
		printf("\n\t\t\t\t\t\t\t  TRANSACTIONS\n\n");				
		printf("\t\t\t\t\t  -------------------------------------- \n");
		printf("\t\t\t\t\t | [1] Withdraw money                   |\n");
		printf("\t\t\t\t\t | [2] Deposit                          |\n");
		printf("\t\t\t\t\t | [3] Making Money Transfer            |\n");
		printf("\t\t\t\t\t | [4] Balance Query                    |\n");
		printf("\t\t\t\t\t | [5] Card Refund                      |\n");
		printf("\t\t\t\t\t  -------------------------------------- \n\n");
	}
	else {
		printf("\n\t\t\t\t\t\t\t  ISLEMLER\n\n");				
		printf("\t\t\t\t\t  -------------------------------------- \n");
		printf("\t\t\t\t\t | [1] Para Cekme                       |\n");
		printf("\t\t\t\t\t | [2] Para Yatirma                     |\n");	
		printf("\t\t\t\t\t | [3] Havale Yapma                     |\n");
		printf("\t\t\t\t\t | [4] Bakiye Sorgulama                 |\n");
		printf("\t\t\t\t\t | [5] Kart Iade                        |\n");
		printf("\t\t\t\t\t  -------------------------------------- \n\n");
	}
	
	if(language == 1) {
		printf("\t\t\t\t\t  Select the action: ");
	}
	else {
		printf("\t\t\t\t\t  Islem seciniz: ");
	}
	scanf("%d", &islem);
	
	switch(islem) {
		
		//1. TR: Para çekme - EN: Withdraw money
		case 1 :
			if(language == 1) {
				printf("\n\t\t\t\t\t ----------------------------------------\n\n");
				printf("\t\t\t\t\t  Your balance           :  %d\n", bakiye);
			}
			else {
				printf("\n\t\t\t\t\t ----------------------------------------\n\n");
				printf("\t\t\t\t\t  Bakiyeniz        :  %d\n", bakiye);
			}
			if(language == 1) {
				printf("\t\t\t\t\t  Amount to withdraw     :  ");
			}
			else {
				printf("\t\t\t\t\t  Cekilecek miktar :  ");
			}
			scanf("%d", &tutar);
				if (tutar > bakiye) {
					if(language == 1) {
						printf("\t\t\t\t\t\a  Insufficient balance!\n");
						sleep(1);
						system("CLS");
						calistir();
				}
				else {
						printf("\n\t\t\t\t\t\a  Yetersiz Bakiye!\n");
	   					sleep(1);
						system("CLS");
						calistir();
				}
			}
			bakiye -= tutar;
			if(language == 1) {
				printf("\t\t\t\t\t  Your remaining balance : %d", bakiye);
				printf("\n\n\t\t\t\t\t ----------------------------------------\n");
			}
			else {
				printf("\t\t\t\t\t  Kalan Bakiyeniz  :  %d", bakiye);
				printf("\n\n\t\t\t\t\t ----------------------------------------");
			}
		break;
		
		//2. TR: Para yatýrma - EN: Deposit money
		case 2 :
			if(language == 1) {
				printf("\n\t\t\t\t\t ----------------------------------------\n\n");
				printf("\t\t\t\t\t  Your balance           : %d\n", bakiye);
			}
			else {
				printf("\n\t\t\t\t\t ----------------------------------------\n\n");
				printf("\t\t\t\t\t  Bakiyeniz         : %d\n", bakiye);
			}
			if(language == 1) {
				printf("\t\t\t\t\t  Amount to be deposited : ");
			}
			else {
				printf("\t\t\t\t\t  Yatirilacak tutar : ");
			}
			scanf("%d", &tutar);
			bakiye += tutar;
			if(language == 1) {
				printf("\t\t\t\t\t  Your curret balance    : %d", bakiye);
		    	printf("\n\n\t\t\t\t\t ----------------------------------------\n");
			}
			else {
				printf("\t\t\t\t\t  Guncel bakiyeniz  : %d", bakiye);
				printf("\n\n\t\t\t\t\t ----------------------------------------");
			}
		break;
		
		//TR: Havale yapma - EN: Making a transfer
		case 3 :
			if(language == 1) {
				printf("\n\t\t\t\t\t ----------------------------------------\n\n");
				printf("\t\t\t\t\t  Your balance             : %d\n", bakiye);
			}
			else {
				printf("\n\t\t\t\t\t ----------------------------------------\n\n");
				printf("\t\t\t\t\t  Bakiyeniz              : %d\n", bakiye);
			}
			if(language == 1) {
				printf("\t\t\t\t\t  Amount to be transferred : ");
			}
			else {
				printf("\t\t\t\t\t  Havale yapilacak tutar : ");
			}
			scanf("%d", &tutar);
				if (tutar > bakiye) {
					if(language == 1) {
						printf("\t\t\t\t\t\a  Insufficient balance!\n");
						sleep(1);
						system("CLS");
						calistir();
					}
					else {
						printf("\n\t\t\t\t\t\a  Yetersiz Bakiye!\n");
						sleep(1);
						system("CLS");
						calistir();
					}
				}
			bakiye -= tutar;
			if(language == 1) {
				printf("\t\t\t\t\t  Your remaining balance   : %d", bakiye);
				printf("\n\n\t\t\t\t\t ----------------------------------------");
			}
			else {
				printf("\t\t\t\t\t  Kalan Bakiyeniz        : %d", bakiye);
				printf("\n\n\t\t\t\t\t ----------------------------------------");
			}
		break;
			
		//TR: Bakiye sorgulama - EN: Balance query
		case 4 :
			if(language == 1) {
				printf("\n\t\t\t\t\t ----------------------------------------\n\n");
				printf("\t\t\t\t\t  Your balance           :  %d\n", bakiye);
				printf("\n\t\t\t\t\t ----------------------------------------");
			}
			else {
				printf("\n\t\t\t\t\t ----------------------------------------\n\n");
				printf("\t\t\t\t\t  Bakiyeniz              : %d\n", bakiye);
				printf("\n\t\t\t\t\t ----------------------------------------");
			}
		break;
		
		//TR: Kard iade - EN: Card returns
		case 5 :
			if(language == 1) {
				printf("\n\t\t\t\t\t ----------------------------------------\n\n");
				printf("\t\t\t\t\t The card has been returned. ");
				printf("\n\n\t\t\t\t\t ----------------------------------------");
				return;
			}
			else {			
				printf("\n\t\t\t\t\t ----------------------------------------\n\n");
				printf("\t\t\t\t\t  Kart iade edildi.");
				printf("\n\n\t\t\t\t\t ----------------------------------------");
	    		return;
			}
			break;
			
		//TR: Yanlýþ sayý girimi - EN: Wrong number entry
		default :
			if(language == 1) {
				system("CLS");
				printf("\n\n\n\n\n\n\n\n\n\n\n");
				printf("\t\t\t\t ---------------------------------------------------------\n");
				printf("\t\t\t\t *  Error! Please enter the numbers requested from you.  *\n");
				printf("\t\t\t\t ---------------------------------------------------------\n");
			}
			else {
				system("CLS");
				printf("\n\n\n\n\n\n\n\n\n\n\n");
			 	printf("\t\t\t\t ---------------------------------------------------------\n");
				printf("\t\t\t\t *   Hata! Lutfen sizden istenen numaralari giriniz.     *\n");
				printf("\t\t\t\t ---------------------------------------------------------\n");
			}
			break;
	}
	
	int durum; 
		if(language == 1) {
			printf("\n\n\t\t\t\t\t\a Do you want to leave the Virtual Bank?\n\t\t\t\t\t\tYES = 1, TURN BACK = 2 : ");
		}
		else {
			printf("\n\n\t\t\t\t\t\a Sanal Bankadan ayrilmak istiyor musunuz?\n\t\t\t\t\t\tEVET = 1, GERI DON = 2 : ");
		}
	 	scanf("%d", &durum);
	if(durum == 2){
		 system("CLS");
		calistir();
	}	
}

