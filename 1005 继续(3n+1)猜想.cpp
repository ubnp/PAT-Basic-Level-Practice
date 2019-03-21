/* 1005 继续(3n+1)猜想

*/ 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool cmp(int a,int b){  //sort 非升序排序 
	return a>b;
}
int main(){
	int K,temp,flag=0;	
	cin>>K;
	int n[10000]={0};  //用作标记 
	vector<int> v;    //容器大小可以变化 ，存储输入的数值 
	for(int i=0;i<K;i++){
		cin>>temp;
		v.push_back(temp) ;  //向 vector 结构中添加temp元素 
		while(temp!=1){
			if(temp%2==0)   //even number
				temp/=2;
			else             // odd number
				temp=(3*temp+1)/2;
			if(n[temp]==0){   //标记覆盖值 
				n[temp]=1;
			}	
					
		}
	}
	sort(v.begin() ,v.end() ,cmp);  //从大到小排序 
	for(int i=0;i<v.size() ;i++){
		if(n[v[i]]==0){   
			if(flag==1){
				cout<<" ";
			}					 
			cout<<v[i];    //输出关键值 
			flag=1;
		}
	}
	return 0;
}
