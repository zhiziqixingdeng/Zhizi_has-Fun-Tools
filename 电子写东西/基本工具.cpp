#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <string>
using namespace std;
string str;
int a,b,c,d,n,flag[100000];
char x,y;
string name;
int main(){
	cout<<"欢迎使用文档编辑器"<<endl;
	sleep(1);
	system("cls");
	cout<<"请输入你的名字:";
	cin>>name;
	cout<<"欢迎啊,"<<name<<"！:))))"<<endl;
	sleep(1);
	system("cls");
	while(1==1){
		cout<<"请输入你要干什么"<<endl;
		cout<<"1.替换文字"<<endl;
		cout<<"2.寻找文字并输出位置"<<endl;
		cout<<"3.统计文字出现次数"<<endl;
		cout<<"4.删除文字"<<endl;
		cout<<"5.关闭"<<endl;
		cout<<"************"<<endl;
		cin>>n;
		cin.ignore();
		if(n==1){
			cout<<"请输入需要替换文字的字符串:";
			getline(cin,str);
			cout<<"请输入需要替换的字符:";
			cin>>x;
			cout<<"请输入替换的字符:";
			cin>>y;
			for(int i=0;i<str.length();i++){
				if(str[i]==x){
					str[i]=y;
				}
			}
			cout<<"完成后的:"<<str<<endl;
			system("pause");
			system("cls");
		}
		else if(n==2){
			cout<<"请输入需要寻找的字符:";
			cin>>x;
			cout<<"请输入需要寻找字符的字符串:";
			cin.ignore();
			getline(cin,str);
			for(int i=0;i<str.length();i++){
				if(str[i]==x){
					cout<<"位置:"<<i+1<<endl;
				}
			}
			cout<<"完成!"<<endl;
			system("pause");
			system("cls");
			
		}
		else if(n==3){
			cout<<"请输入需要统计的字符串:";
			getline(cin,str);
			cout<<"请输入需要统计的字符"<<endl;
			cin>>x;
			for(int i=0;i<str.length();i++){
				if(x==str[i]){
					a++;
				}
			}
			cout<<x<<"在这里面出现了"<<a<<"次"<<endl;
			system("pause");
			system("cls");
		}
		else if(n==4){
			for(int i=0;i<=100000-1;i++){
				flag[i]=0;
			}
			cout<<"请输入字符串:";
			getline(cin,str);
			cout<<"请输入需要删除的字符:";
			cin>>x;
			for(int i=0;i<str.length();i++){
				if(str[i]==x){
					flag[i]=1;
				}
			}
			cout<<"删除后的:"; 
			for(int i=0;i<str.length();i++){
				if(flag[i]==0){
					cout<<str[i]; 
				}
			}
			cout<<endl;
			system("pause");
			system("cls"); 
		}
		else if(n==5){
			cout<<"再见"<<endl;
			sleep(1);
			return 0;
		}
		else{
			cout<<"错误"<<endl;
		}
	}
} 
