// #include<bits/stdc++.h>
#include<iostream>

using namespace std;
bool p[1000007];/*记录质数的数组*/
void eratos(int n) {//埃氏筛
	p[0]=p[1]=false;//0和1不是质数
	for(int i=2; i<=n; i++) p[i]=true; //初始化
	for(int i=2; i*i<=n; i++) {
		if(p[i]/*如果是质数*/) {
			for(int j=i*i; j<=n; j+=i) {//找到不超过n的数中含有因子i的数
				p[j]=false; //标记为合数
			}
		}
	}

}
int main() {
	int a,ans=0/*记录第几小的质数*/,u/*后面有用*/;
	cin>>a;
	eratos(1000000);//查百度发现第70000小的质数没过1000000，所以直接筛到1000000
	for(int i=2;i<1000000/*同上*/;i++){
		if(p[i]/*如果是质数*/) ans++;//记录下来
		if(ans==a/*如果查询到第a小的质数*/){u=i/*记录这个质数*/; break;/*退出循环*/}
	}
	cout<<u<<endl;//输出
}