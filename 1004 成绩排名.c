/* name id两个变量是定义的二维数组。name[i] id[i]都是一个一维数组，
一维数组名可以直接当首地址的指针用，但score本身就是一维数组，score[i]就是一个元素
，如果你要给这个元素赋值就要取其地址。
*/
/* 也可以写成score+i，表示给第i个元素赋值，score是数组名做指针+i表示指针往后跳i位，一样可以不用&符号
*/
#include<stdio.h>

int main(){
	int n;
	int max=-1,min=101,maxIndex = 0,minIndex = 0 ;
	char name[101][100];
	char id[101][100];
	int  score[101];
	scanf("%d",&n);
	
	for(int i =0;i<n;i++){
		scanf("%s %s %d",name[i],id[i],&score[i]);
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
