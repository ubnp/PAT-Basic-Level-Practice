/*1003 我要通过！
PAT 找出规律：P前面的A个数  *  P和T中间的A个数  =  T后面A的个数
来源-> https://blog.csdn.net/xxhxhxx_/article/details/79597773
*/
#include<stdio.h>
#include<string.h>
int main() {
	int n;
	char str[100];
	scanf("%d",&n);
	while(n--) {
		scanf("%s",str);
		int flag=0;
		int i,Pindex=-1,Tindex=-1,pcount=0,tcount=0;
		for(i =0; i<strlen(str); i++) {
			if(str[i]!='P'&&str[i]!='A'&&str[i]!='T') { //只检测P、A、T
				break;
			}
			if(str[i]=='P') {
				Pindex=i;   //P的位置指针
				pcount++;
				if(pcount>1) { //检测 P 是否多次出现
					break;
				}
			}
			if(str[i]=='T') {
				Tindex=i;    //T的位置指针
				tcount++;
				if(tcount>1) { //检测 T 是否多次出现
					break;
				}
			}   
		}
		if(((strlen(str)-Tindex-1) == Pindex*(Tindex-Pindex-1))&&(Tindex-Pindex-1)!=0)	{
			flag = 1;
		}
		if(flag) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}

	}

	return 0;
}
