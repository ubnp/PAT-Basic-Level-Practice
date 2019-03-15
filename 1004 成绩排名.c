#include<stdio.h>

int main(){
	int n;
	int max=-1,min=101,maxIndex = 0,minIndex = 0 ;
	char name[101][100];
	char id[101][100];
	int  score[101];
	scanf("%d",&n);
	
	for(int i =0;i<n;i++){
		scanf("%s %s %d",name[i],id[i],&score[i]);   //这里需要用 & 有疑问
		if(max<score[i]){
			max = score[i];
			maxIndex = i;
		}
		if(min>score[i]){
			min = score[i];
			minIndex = i;
		}		
	}

	printf("%s %s\n",name[maxIndex],id[maxIndex]);
	printf("%s %s\n",name[minIndex],id[minIndex]);
	
	return 0;  
} 
