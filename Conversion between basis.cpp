
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int todecimal(int,int);
int tobase(int,int);
char decimaltohexa1(int);
char decimaltohexa2(int,int);
char decimaltohexa3(int,int);
int main(){
	int base1,number,base2;
	int a,i,l,s=0;
	int n=0,b=1,o,m=0,y;
	char hexa[8]={0};
	char numero[8]={0};
	printf("hello!\n");
	do{
		n=0,b=1,m=0,s=0;
		printf("If you want to exit type -1 ,otherwise give a number to convert: \n");
		scanf("%s",&numero);
		if(numero[0]=='-'&&numero[1]=='1'){
			break;
		}
		printf("What is the base of this number ?\n");
		printf("type 1 if the number is base decimale\n");
		printf("type 2 if the number is binary base\n");
		printf("type 3 if the number is octal base\n");
		printf("type 4 if the number is base hexadecimal\n");
		scanf("%d",&base1);
		switch(base1){
			
			case 1:    
			printf("witch base do you want to covert it?\n");
			printf("type 1 if the conversion will be to the binary base\n");
			printf("type 2 if the conversion will be to octal base\n");
			printf("type 3 if the conversion will be to the hexadecimal base\n");
			scanf("%d",&base2);
			switch(base2){
				case 1:  number=atoi(numero);   printf("(%d)decimal=(%d)binary\n",number,tobase(number,2));          ;break;
				case 2:    number=atoi(numero);   printf("(%d)decimal=(%d)octal\n",number,tobase(number,8));           ;break;
				case 3:    number=atoi(numero);   decimaltohexa1(number);break;
			};break;
			case 2:     
			printf("witch base do you want to covert it?\n");
			printf("type 1 if the conversion will be to decimal base\n");
			printf("type 2 if the conversion will be to octal base\n");
			printf("type 3 if the conversion will be to the hexadecimal base\n");
			scanf("%d",&base2); 
			switch(base2){
				case 1:number=atoi(numero);   printf("(%d)binary=(%d)decimal\n",number,todecimal(number,2));             ;break;
				case 2:number=atoi(numero);   printf("(%d)binary=(%d)octal\n",number,tobase(todecimal(number,2),8));     ;break;
				case 3:number=atoi(numero);            decimaltohexa2(todecimal(number,2),number)                                                                  ;break;
			};break;
			case 3:       
			printf("witch base do you want to covert it?\n");
			printf("type 1 if the conversion will be to decimal base\n");
			printf("type 2 if the conversion will be to the binary base\n");
			printf("type 3 if the conversion will be to the hexadecimal base\n");
			scanf("%d",&base2);     
			switch(base2){
				case 1: number=atoi(numero);     printf("(%d)octal=(%d)decimal\n",number,todecimal(number,8));           ;break;
				case 2: number=atoi(numero);     printf("(%d)octal=(%d)binary\n",number,tobase(todecimal(number,8),2));  ;break;
				case 3: number=atoi(numero);           decimaltohexa3(todecimal(number,8),number)                               ;break;
			};break;
			case 4:      
			printf("witch base do you want to covert it?\n");
			printf("type 1 if the conversion will be to decimal base\n");
			printf("type 2 if the conversion will be to the binary base\n");
			printf("type 3 if the conversion will be to octal base\n");
			scanf("%d",&base2);    
			switch(base2){
				case 1:                l=strlen(numero);
	for(i=0;i<=7;i++){
		switch(numero[i]){
			case'A':number=10; s=s+(number*pow(16,l-1))           ;break;
			case'B':number=11;  s=s+(number*pow(16,l-1))          ;break;
			case'C':number=12;   s=s+(number*pow(16,l-1))         ;break;
			case'D':number=13;   s=s+(number*pow(16,l-1))         ;break;
			case'E':number=14;    s=s+(number*pow(16,l-1))        ;break;
			case'F':number=15;    s=s+(number*pow(16,l-1))        ;break;
			case'0':number=0;    s=s+(number*pow(16,l-1))        ;break;
			case'1':number=1;    s=s+(number*pow(16,l-1))        ;break;
			case'2':number=2;    s=s+(number*pow(16,l-1))        ;break;
			case'3':number=3;    s=s+(number*pow(16,l-1))        ;break;
			case'4':number=4;    s=s+(number*pow(16,l-1))        ;break;
			case'5':number=5;    s=s+(number*pow(16,l-1))        ;break;
			case'6':number=6;    s=s+(number*pow(16,l-1))        ;break;
			case'7':number=7;    s=s+(number*pow(16,l-1))        ;break;
			case'8':number=8;    s=s+(number*pow(16,l-1))        ;break;
			case'9':number=9;    s=s+(number*pow(16,l-1))        ;break;	
		}l--;
	}printf("(%s) in hexadecimal = (%d) decimal\n",numero,s);     ;break;
				case 2:  l=strlen(numero);
	for(i=0;i<=7;i++){
		switch(numero[i]){
			case'A':number=10; s=s+(number*pow(16,l-1))           ;break;
			case'B':number=11;  s=s+(number*pow(16,l-1))          ;break;
			case'C':number=12;   s=s+(number*pow(16,l-1))         ;break;
			case'D':number=13;   s=s+(number*pow(16,l-1))         ;break;
			case'E':number=14;    s=s+(number*pow(16,l-1))        ;break;
			case'F':number=15;    s=s+(number*pow(16,l-1))        ;break;
			case'0':number=0;    s=s+(number*pow(16,l-1))        ;break;
			case'1':number=1;    s=s+(number*pow(16,l-1))        ;break;
			case'2':number=2;    s=s+(number*pow(16,l-1))        ;break;
			case'3':number=3;    s=s+(number*pow(16,l-1))        ;break;
			case'4':number=4;    s=s+(number*pow(16,l-1))        ;break;
			case'5':number=5;    s=s+(number*pow(16,l-1))        ;break;
			case'6':number=6;    s=s+(number*pow(16,l-1))        ;break;
			case'7':number=7;    s=s+(number*pow(16,l-1))        ;break;
			case'8':number=8;    s=s+(number*pow(16,l-1))        ;break;
			case'9':number=9;    s=s+(number*pow(16,l-1))        ;break;}l--;}
while(n!=9){
		o=s%2;
		s=s/2;m=m+(o*b);b=b*10;
		n=n+1;} printf("(%s) in hexadecimal = (%d) in binary\n",numero,m);             ;break;
				case 3:      l=strlen(numero);
	for(i=0;i<=7;i++){
		switch(numero[i]){
			case'A':number=10; s=s+(number*pow(16,l-1))           ;break;
			case'B':number=11;  s=s+(number*pow(16,l-1))          ;break;
			case'C':number=12;   s=s+(number*pow(16,l-1))         ;break;
			case'D':number=13;   s=s+(number*pow(16,l-1))         ;break;
			case'E':number=14;    s=s+(number*pow(16,l-1))        ;break;
			case'F':number=15;    s=s+(number*pow(16,l-1))        ;break;
			case'0':number=0;    s=s+(number*pow(16,l-1))        ;break;
			case'1':number=1;    s=s+(number*pow(16,l-1))        ;break;
			case'2':number=2;    s=s+(number*pow(16,l-1))        ;break;
			case'3':number=3;    s=s+(number*pow(16,l-1))        ;break;
			case'4':number=4;    s=s+(number*pow(16,l-1))        ;break;
			case'5':number=5;    s=s+(number*pow(16,l-1))        ;break;
			case'6':number=6;    s=s+(number*pow(16,l-1))        ;break;
			case'7':number=7;    s=s+(number*pow(16,l-1))        ;break;
			case'8':number=8;    s=s+(number*pow(16,l-1))        ;break;
			case'9':number=9;    s=s+(number*pow(16,l-1))        ;break;}l--;}
while(n!=9){
		o=s%8;
		s=s/8;m=m+(o*b);b=b*10;
		n=n+1;} printf("(%s) in hexadecimal = (%d) in octal\n",numero,m);      ;break;
			};break;
		}	
	}while(numero[0]!='-'&&numero[1]!='1');
	printf("Thanks!...");

	return 0;
}
 int todecimal(int num,int b){
	int r,t,s;
	s=0;t=1;
	while(num!=0){
		r=num%10;
		num=num/10;
		s=s+(r*t);
		t=t*b;
	}
	return s;
}
int tobase(int num,int b){
	int m,o,t,n;
	t=1;m=0;
	while(num!=0){
		o=num%b;
		num=num/b;
		m=m+(o*t);
		t=t*10;
	}
	return m;
}
char decimaltohexa1(int a){
		int y,m,o,b,i,n,k=0;
	char hexadecimal[8];
	char hexa[8]={0};
	
	y=a;
	n=0;
	b=1;
	i=0;	
	while(a!=0){
		o=a%16;
		a=a/16;
		
		switch(o){
			case 0: hexadecimal[i]='0';break;
			case 1: hexadecimal[i]='1';break;
			case 2: hexadecimal[i]='2';break;
			case 3: hexadecimal[i]='3';break;
			case 4: hexadecimal[i]='4';break;
			case 5: hexadecimal[i]='5';break;
			case 6: hexadecimal[i]='6';break;
			case 7: hexadecimal[i]='7';break;
			case 8: hexadecimal[i]='8';break;
			case 9: hexadecimal[i]='9';break;
			case 10: hexadecimal[i]='A';break;
			case 11: hexadecimal[i]='B';break;
			case 12: hexadecimal[i]='C';break;
			case 13: hexadecimal[i]='D';break;
			case 14: hexadecimal[i]='E';break;
			case 15: hexadecimal[i]='F';break;
		}
		i++;
		
	}
	int l=strlen(hexadecimal);
	for(int j=l-1;j>=0;j--){
		hexa[k]=hexadecimal[j];
		k++;
	}
	printf("(%d) in decimal = (%s) in hexadecimal\n",y,hexa);
}
char decimaltohexa2(int a,int x){
		int y,m,o,b,i,n,k=0;
	char hexadecimal[8];
	char hexa[8]={0};
	
	y=a;
	n=0;
	b=1;
	i=0;	
	while(a!=0){
		o=a%16;
		a=a/16;
		
		switch(o){
			case 0: hexadecimal[i]='0';break;
			case 1: hexadecimal[i]='1';break;
			case 2: hexadecimal[i]='2';break;
			case 3: hexadecimal[i]='3';break;
			case 4: hexadecimal[i]='4';break;
			case 5: hexadecimal[i]='5';break;
			case 6: hexadecimal[i]='6';break;
			case 7: hexadecimal[i]='7';break;
			case 8: hexadecimal[i]='8';break;
			case 9: hexadecimal[i]='9';break;
			case 10: hexadecimal[i]='A';break;
			case 11: hexadecimal[i]='B';break;
			case 12: hexadecimal[i]='C';break;
			case 13: hexadecimal[i]='D';break;
			case 14: hexadecimal[i]='E';break;
			case 15: hexadecimal[i]='F';break;
		}
		i++;
		
	}
	int l=strlen(hexadecimal);
	for(int j=l-1;j>=0;j--){
		hexa[k]=hexadecimal[j];
		k++;
	}
	printf("(%d) in binary = (%s) in hexadecimal\n",x,hexa);
}
char decimaltohexa3(int a,int x){
		int y,m,o,b,i,n,k=0;
	char hexadecimal[8];
	char hexa[8]={0};
	y=a;
	n=0;
	b=1;
	i=0;	
	while(a!=0){
		o=a%16;
		a=a/16;
		
		switch(o){
			case 0: hexadecimal[i]='0';break;
			case 1: hexadecimal[i]='1';break;
			case 2: hexadecimal[i]='2';break;
			case 3: hexadecimal[i]='3';break;
			case 4: hexadecimal[i]='4';break;
			case 5: hexadecimal[i]='5';break;
			case 6: hexadecimal[i]='6';break;
			case 7: hexadecimal[i]='7';break;
			case 8: hexadecimal[i]='8';break;
			case 9: hexadecimal[i]='9';break;
			case 10: hexadecimal[i]='A';break;
			case 11: hexadecimal[i]='B';break;
			case 12: hexadecimal[i]='C';break;
			case 13: hexadecimal[i]='D';break;
			case 14: hexadecimal[i]='E';break;
			case 15: hexadecimal[i]='F';break;
		}
		i++;
		
	}
	int l=strlen(hexadecimal);
	for(int j=l-1;j>=0;j--){
		hexa[k]=hexadecimal[j];
		k++;
	}
	printf("(%d) in octal = (%s) in hexadecimal\n",x,hexa);
}
