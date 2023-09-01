#include <iostream>
#include <cstdlib>
#include <unistd.h>
using namespace std;
string str,sss;
int n,a;
void jiami(){
	cout<<"请输入需要加密的(在45位以内):";
	cin>>str;
	if(str.length()>45){
		cout<<"你竟然违反规则!!!"<<endl;
		sleep(1);
		cout<<"我现在停止工作"<<endl;
		return;
	}
	else{
		for(int i=1;i<=str.length();i++){
			if(str[i]>='A'&&str[i]<='Z'){
				if(str[i]>='A'&&str[i]<'R'){
					str[i]+=1;
				}
				else if(str[i]>'S'&&str[i]<='Z'){
					str[i]-=1;
				}
				else{
					str[i]=str[i];
				}
			}
			else if(str[i]>'a'&&str[i]<='z'){
				str[i]-=1;
			}
			else{
				str[i]+=1;
			}
		}
		cout<<"加密后的:"<<str<<endl;
		system("pause");
	}
}
void jiemi(){
	cout<<"请输入需要解密的:";
	cin>>str;
	for(int i=1;i<=str.length();i++){
		if(str[i]>='A'&&str[i]<='Z'){
			if(str[i]>='B'&&str[i]<='R'){
				str[i]-=1;
			}
			else if(str[i]>='S'&&str[i]<'Z'){
				str[i]-=1;
			}
			else{
				str[i]=str[i];
			}
		}
		else if(str[i]>='a'&&str[i]<'z'){
			str[i]+=1;
		}
		else{
			str[i]-=1;
		}
	}
	cout<<"解密后的:"<<str<<endl;
}
int main(){
	string name;
	cout<<"欢迎使用加密解密字符对应版"<<endl;
	sleep(1);
	system("cls");
	cout<<"请输入你的名字:";
	cin>>name;
	cout<<"欢迎,"<<name<<"！"<<endl;
	sleep(1);
	system("cls");
	while(1==1){
		cout<<"请输入你要干什么"<<endl<<"1.加密"<<endl<<"2.解密"<<endl<<"3.退出"<<endl;
		cin>>n;
		if(n==1){
			cout<<"好的"<<endl;
			jiami();
		}
		else if(n==2){
			cout<<"好的"<<endl;
			jiemi();
		}
		else if(n==3){
			cout<<"再见"<<endl;
			sleep(1);
			return 0;
		}
		else{
			cout<<"错误"<<endl;
		}
	}
}
