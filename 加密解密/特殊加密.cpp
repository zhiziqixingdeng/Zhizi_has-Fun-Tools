#include <iostream>
#include <cstdlib>
#include <unistd.h>
using namespace std;
string str,sss;
int n,a;
void jiami(){
	cout<<"��������Ҫ���ܵ�(��45λ����):";
	cin>>str;
	if(str.length()>45){
		cout<<"�㾹ȻΥ������!!!"<<endl;
		sleep(1);
		cout<<"������ֹͣ����"<<endl;
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
		cout<<"���ܺ��:"<<str<<endl;
		system("pause");
	}
}
void jiemi(){
	cout<<"��������Ҫ���ܵ�:";
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
	cout<<"���ܺ��:"<<str<<endl;
}
int main(){
	string name;
	cout<<"��ӭʹ�ü��ܽ����ַ���Ӧ��"<<endl;
	sleep(1);
	system("cls");
	cout<<"�������������:";
	cin>>name;
	cout<<"��ӭ,"<<name<<"��"<<endl;
	sleep(1);
	system("cls");
	while(1==1){
		cout<<"��������Ҫ��ʲô"<<endl<<"1.����"<<endl<<"2.����"<<endl<<"3.�˳�"<<endl;
		cin>>n;
		if(n==1){
			cout<<"�õ�"<<endl;
			jiami();
		}
		else if(n==2){
			cout<<"�õ�"<<endl;
			jiemi();
		}
		else if(n==3){
			cout<<"�ټ�"<<endl;
			sleep(1);
			return 0;
		}
		else{
			cout<<"����"<<endl;
		}
	}
}
