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
	cout<<"��ӭʹ���ĵ��༭��"<<endl;
	sleep(1);
	system("cls");
	cout<<"�������������:";
	cin>>name;
	cout<<"��ӭ��,"<<name<<"��:))))"<<endl;
	sleep(1);
	system("cls");
	while(1==1){
		cout<<"��������Ҫ��ʲô"<<endl;
		cout<<"1.�滻����"<<endl;
		cout<<"2.Ѱ�����ֲ����λ��"<<endl;
		cout<<"3.ͳ�����ֳ��ִ���"<<endl;
		cout<<"4.ɾ������"<<endl;
		cout<<"5.�ر�"<<endl;
		cout<<"************"<<endl;
		cin>>n;
		cin.ignore();
		if(n==1){
			cout<<"��������Ҫ�滻���ֵ��ַ���:";
			getline(cin,str);
			cout<<"��������Ҫ�滻���ַ�:";
			cin>>x;
			cout<<"�������滻���ַ�:";
			cin>>y;
			for(int i=0;i<str.length();i++){
				if(str[i]==x){
					str[i]=y;
				}
			}
			cout<<"��ɺ��:"<<str<<endl;
			system("pause");
			system("cls");
		}
		else if(n==2){
			cout<<"��������ҪѰ�ҵ��ַ�:";
			cin>>x;
			cout<<"��������ҪѰ���ַ����ַ���:";
			cin.ignore();
			getline(cin,str);
			for(int i=0;i<str.length();i++){
				if(str[i]==x){
					cout<<"λ��:"<<i+1<<endl;
				}
			}
			cout<<"���!"<<endl;
			system("pause");
			system("cls");
			
		}
		else if(n==3){
			cout<<"��������Ҫͳ�Ƶ��ַ���:";
			getline(cin,str);
			cout<<"��������Ҫͳ�Ƶ��ַ�"<<endl;
			cin>>x;
			for(int i=0;i<str.length();i++){
				if(x==str[i]){
					a++;
				}
			}
			cout<<x<<"�������������"<<a<<"��"<<endl;
			system("pause");
			system("cls");
		}
		else if(n==4){
			for(int i=0;i<=100000-1;i++){
				flag[i]=0;
			}
			cout<<"�������ַ���:";
			getline(cin,str);
			cout<<"��������Ҫɾ�����ַ�:";
			cin>>x;
			for(int i=0;i<str.length();i++){
				if(str[i]==x){
					flag[i]=1;
				}
			}
			cout<<"ɾ�����:"; 
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
			cout<<"�ټ�"<<endl;
			sleep(1);
			return 0;
		}
		else{
			cout<<"����"<<endl;
		}
	}
} 
