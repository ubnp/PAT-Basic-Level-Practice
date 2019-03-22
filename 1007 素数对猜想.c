
#include<stdio.h>
#include<math.h>
int isPrime(int x); 
int main(){
	int n,cnt = 0,sum = 0;
	int Prime[100000]={0};
	scanf("%d",&n);

	for(int i=2;i<=n;i++){  //计算并存储比n小的素数 2-n i		
		if(isPrime(i)){     //判断 i 是否为素数 
    		Prime[cnt++] = i;
    		//printf("%d ",i) ;
    	}
	}
	for(int i = 0;i<cnt;i++){
		if(Prime[i+1]-Prime[i] == 2){
			//printf("%d-%d = %d\n",Prime[i+1],Prime[i],Prime[i+1]-Prime[i]) ;
			sum++;
		}			
	}
	printf("%d",sum);
	return 0;
}

int isPrime(int x){  //去掉偶数后，从3到sqrt(x）,每次加2，测试是否可以整除 
	int ret = 1;
	int i;
	if(x == 1||(x%2 == 0 && x != 2))   //若x等于1或者是偶数，则x不是素数 
   	    ret = 0;  
	for(i=3;i<=sqrt(x);i+=2){
		if(x%i==0){
			ret = 0;
			break;
		}
	}
	return ret;
}
