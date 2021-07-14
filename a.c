#ifndef _common_
#include<stdio.h>
#include<string.h>
#endif
/*search able find multiple matching in given string and return index numbertoo 0.003 second */
void search(char pat[],char string[]){
	int p=strlen(pat);
	int s=strlen(string);
	int a=p-1;
	for (int j=0;j<s;j++){
			if(pat[0]=string[j]){
				if(pat[a]=string[j+a]){}

		for(int i=0;i<p;i++){
			if (pat[i]==string[j+i]){/*d*/}else{break;}
			if(i==a){printf("found at index %d\n",j);}

		}
			
		}
	}
}
