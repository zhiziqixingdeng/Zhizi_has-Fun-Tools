#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <ctime>
using namespace std;
int a,b,c,d,cnt,flag;
string shi,name;
int n,w;
struct ti{
	string wen;
	string da;
	int bianhao;
}s[1000];
int main(){
	srand((unsigned int)time(NULL)); 
	cout<<"��ӭ����ѧϰϵͳ"<<endl;
	sleep(1);
	cout<<"�������������:";
	cin>>name;
	cout<<"��ã��ܸ��˼�����"<<","<<name<<endl;
	sleep(1);
	system("cls");
	while(1==1){
		cout<<"��������Ҫ��ʲô"<<endl<<"1.ÿ������"<<endl<<"2.������ϰ"<<endl<<"3.Ӧ����"<<endl<<"4.�Լ�����Ŀ"<<endl<<"5.������Ϣ"<<endl;
		cin>>n;
		if(n==1){
			d=rand()%1;
			if(d==0){
				w=rand()%6;
				for(int i=1;i<=w;i++){
					a=rand()%4;
					if(a==0){
						cout<<"����";
					}
					else if(a==1){
						cout<<"�ְ�";
					}
					else if(a==2){
						cout<<"���";
					}
					else if(a==3){
						cout<<"���";
					}
					if(i<w){
						cout<<"��";
					}
					else{
						cout<<"��ʲô"<<endl;
						break;
					}
				}
			}
			else{
				a=rand()%1000;
				b=rand()%999+1;;
				c=rand()&5;
				if(c==0){
					cout<<a<<"+"<<b<<"����"<<endl; 
				}
				else if(c==1){
					cout<<a<<"-"<<b<<"����"<<endl; 
				}
				else if(c==2){
					cout<<a<<"x"<<b<<"����"<<endl;
				}
				else{
					cout<<a<<"��"<<b<<"����"<<endl;
				}
			}
		}
		else if(n==2){
			cout<<"������Ҫ�����ٵ���:";
			cin>>cnt;
			flag=0;
			for(int i=1;i<=cnt;i++){
				a=rand()%100;
				b=rand()%99+1;
				c=rand()%4;
				if(c==0){
					cout<<a<<"+"<<b<<"=";
					cin>>d;
					if(d==a+b){
						cout<<"��ȷ!"<<endl;
						flag++;
					}
					else{
						cout<<"����"<<endl;
					}
				}
				else if(c==1){
					cout<<a<<"-"<<b<<"=";
					cin>>d;
					if(d==a-b){
						cout<<"��ȷ"<<endl;
						flag++;
					}
					else{
						cout<<"����"<<endl;
					}
				}
				else if(c==2){
					cout<<a<<"x"<<b<<"=";
					cin>>d;
					if(d==a*b){
						cout<<"��ȷ!"<<endl;
						flag++;
					}
					else{
						cout<<"����"<<endl;
					}
				}
				else{
					cout<<"������������ȡ��Ŷ"<<endl;
					cout<<a<<"����"<<b<<"="; 
					cin>>d;
					if(d==a/b){
						cout<<"��ȷ"<<endl;
						flag++;
					}
					else{
						cout<<"����"<<endl;
					}
				}
			}
			cout<<"һ����"<<cnt<<"����,"<<"��"<<flag<<"�����,"<<cnt-flag<<"�����"<<endl; 
			system("pause");
			system("cls"); 
		}
		else if(n==3){
			d=rand()%2;
			if(d==0){
				a=rand()%100;
				b=rand()%a;
				cout<<"С����"<<a<<"����"<<","<<"�Ե���"<<b<<"�ţ����м���"<<endl;
				cout<<"С������";
				cin>>c;
				if(c==a-b){
					cout<<"��ȷ��"<<endl;
				}
				else{
					cout<<"����"<<endl;
				}
			}
			else{
				cout<<"������"<<a<<"��"<<"�����������������"<<b<<"��"<<endl;
				cout<<"������";
				cin>>c;
				if(c==a+b){
					cout<<"��ȷ"<<endl;
				} 
				else{
					cout<<"����"<<endl;
				}
			}
		}
		else if(n==4){
			cout<<"�õ�"<<endl;
			system("start ��Ŀ");
		}
		else if(n==5){
			cout<<"����:"<<name<<endl;
			cout<<"��һ�εĿ�����ϰ����"<<flag<<"����"<<endl;
		}
		else{
			cout<<"�ټ�"<<endl;
		}
	}
}
