#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <string>
using namespace std;
int n,a;
string name,str;
int main(){
	cout<<"欢迎来到AC码（滑稽)加密解密"<<endl;
	sleep(1);
	system("cls");
	cout<<"请输入你的名字:";
	cin>>name;
	cout<<"hi,"<<name<<"！"<<endl;
	sleep(1);
	system("cls");
	while(1==1){
		cout<<"你要干什么"<<endl;
		cout<<"1.加密"<<endl;
		cout<<"2.解密"<<endl;
		cout<<"3.退出"<<endl;
		cout<<"*****************"<<endl;
		cin>>n;
		if(n==1){
			cout<<"请输入密钥数字(1~9):";
			cin>>a;
			cout<<"请输入需要加密的字符串（不要空格）:";
			cin.ignore();
			getline(cin,str);
			for(int i=1;i<=str.length();i++){
				str[i]=str[i]+a;
			}
			cout<<"加密后的:";
			cout<<str<<endl;
			system("pause");
		}
		else if(n==2){
			cout<<"请输入密钥数字(1~9）:";
			cin>>a;
			cout<<"请输入需要解密的字符串:";
			cin.ignore();
			getline(cin,str);
			for(int i=1;i<=str.length();i++){
				str[i]-=a;
			}
			cout<<"解密后的:"<<str<<endl;
			system("pause");
		}
		else if(n==3){
			cout<<"感谢使用"<<endl;
			sleep(1);
			return 0;
		}
		else{
			cout<<"错误"<<endl;
		}
	}
} 
