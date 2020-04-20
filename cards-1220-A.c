//Author:Rohit kumar varma
#include<stdio.h>
#include<string.h>
int main(){
	int z=0,e=0,r=0,o=0,n=0;
	int len;
	scanf("%d",&len);
	char str1[len];
	scanf("%s",str1);
	int i;

	for(i=0;i<len;i++){
		if(str1[i]=='z'){
			z = z+1;

		}
		else if(str1[i] == 'e'){
			e=e+1;
		}
		else if(str1[i] == 'r'){
			r=r+1;
		}
		else if(str1[i] == 'o'){
			o=o+1;
		}
		else if(str1[i] == 'n'){
			n=n+1;
		}

	}
	int array[o];
	for(i=0;i<(o-z);i++){
		array[i]=1;
	}
	for(i=o-z;i<o;i++){
		array[i]=0;
	}
	for(i=0;i<o;i++){
		printf("%d ",array[i]);
	}


	return 0;



}