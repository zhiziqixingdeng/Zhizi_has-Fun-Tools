#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <string>
using namespace std;
int n,a;
string name,str;
int main(){
	cout<<"��ӭ����AC�루����)���ܽ���"<<endl;
	sleep(1);
	system("cls");
	cout<<"�������������:";
	cin>>name;
	cout<<"hi,"<<name<<"��"<<endl;
	sleep(1);
	system("cls");
	while(1==1){
		cout<<"��Ҫ��ʲô"<<endl;
		cout<<"1.����"<<endl;
		cout<<"2.����"<<endl;
		cout<<"3.�˳�"<<endl;
		cout<<"*****************"<<endl;
		cin>>n;
		if(n==1){
			cout<<"��������Կ����(1~9):";
			cin>>a;
			cout<<"��������Ҫ���ܵ��ַ�������Ҫ�ո�:";
			cin.ignore();
			getline(cin,str);
			for(int i=1;i<=str.length();i++){
				str[i]=str[i]+a;
			}
			cout<<"���ܺ��:";
			cout<<str<<endl;
			system("pause");
		}
		else if(n==2){
			cout<<"��������Կ����(1~9��:";
			cin>>a;
			cout<<"��������Ҫ���ܵ��ַ���:";
			cin.ignore();
			getline(cin,str);
			for(int i=1;i<=str.length();i++){
				str[i]-=a;
			}
			cout<<"���ܺ��:"<<str<<endl;
			system("pause");
		}
		else if(n==3){
			cout<<"��лʹ��"<<endl;
		}
		else{
			cout<<"����"<<endl;
		}
	}
} 
