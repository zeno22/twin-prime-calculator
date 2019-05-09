#include<stdio.h>


int main(void) {
	int a,p=0,i,j,m,t,z=-1,l,v,n=0;
	int kev[500000];         //modifier
	printf("Enter Range: ");
	scanf("%d",&v);
	for(i=5;i<=v;i++){     //modifier
		p=0;
	
		for(j=2;j<i;j++){
			a=i%j;
			if(a!=0){
				p=p+1;
			}
			if((p+2)==i){
				z=z+1;
				kev[z]=i;
			}
				}
		}
	printf("\n>>>  Twin Prime Locator v1.0  <<< \n      \n******************* \n\n");
	printf("This program is a numerical proof of the TWIN PRIME CONJUNCTURE upto half a million.");
	printf("\n\n*******************\n");
	printf("\n \nPrime Numbers Generated: \n");
	if(v>=2){
		printf("2 3 ");}
	else {
		printf(" ");
	}
	for(m=0;m<z;m++){
		printf(" %d ", kev[m]);
	}
	printf("\n\n*******************\n");
	if(v>=7){
	printf("\n 3 and 5 ---Gotcha!");
	}
	for(l=0;l<z;l++){
		if((kev[(l+1)]-(kev[l]))==2)
		{
			printf("\n %d and %d ---Gotcha!",kev[l],kev[(l+1)]);
			n=n+1;
		}
	}
	printf("\n\nTotal pairs : %d\n",(n+1));
	
	printf("\n\n*******************\n");
	printf("\nCreated by zeno22\n");

	
	return 0;

}
