/*  1002 写出这个数，求取一个数字每一位数字的和有一个常规的算法，
那就是用n%10取n的最小位数字，用n/10推进计算。但是对于此题而言，
输入样例：1234567890987654321123456789已超出了所有的整型变量的
表示范围，因此使用字符串来保存输入的自然数  */
/*二维字符数组一般用于存储和处理多个字符串，二维字符数组中的每一行
均可存储表示一个字符串。相当于s[0]=ling,s[0][0]=l s[0][0]=i ...  */
#include<stdio.h>
#include<string.h>
int main() {
	char n[100];
    char s[10][5]= {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	int num =0;
	
	scanf("%s",&n);
	int length = strlen(n);
	for(int i =0; i<length ;i++) {
		num +=(n[i]-'0');   //类型转换
	}
	//printf("%d\n",num); 
	if(num>=100) {
		printf("%s ",s[num/100]);
		printf("%s ",s[(num%100)/10]);
		printf("%s",s[num%10]);
	} else if(num>10) {
		printf("%s ",s[num/10]);
		printf("%s",s[num%10]);
	} else {
		printf("%s",s[num]);
	}
	return 0;
}
 
