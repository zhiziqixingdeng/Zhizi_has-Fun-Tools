#include <iostream>
#include <cstdlib>
#include <unistd.h>
using namespace std;
int a,b,c,d,n,w;
double t,f;
char x;
int main(){
	cout<<"��ã�������ѧ������"<<endl;
	sleep(1);
	system("cls");
	while(1==1){
		cout<<"��������Ҫ��ʲô"<<endl<<"1.������ "<<endl<<"2.���/���"<<endl<<"3.ˢ��"<<endl<<"4.��ʱ��"<<endl<<"5.�˳�"<<endl;
		cin>>n;
		if(n==1){
			cout<<"��������Ҫʲô����"<<endl<<"1.����"<<endl<<"2.����"<<endl<<"3.С��"<<endl<<"4.�ٷֱ�"<<endl;
			cin>>w;
			if(w==1){
				cout<<"��������Ҫ�������ʽ(*�ǳƺ�,/�ǳ���,��:8*8):";
				cin>>a>>x>>b;
				if(x=='+'){
					cout<<"������:"<<a+b<<endl;
				}
				else if(x=='-'){
					cout<<"������:"<<a-b<<endl;
				}
				else if(x=='*'){
					cout<<"���:"<<a*b<<endl;
				}
				else if(x=='/'&&b!=0){
					cout<<"���:"<<a/b;
					if(a%b!=0){
						cout<<"......"<<a%b<<endl;
					}
					else{
						cout<<endl;
					}
				}
				else if(x=='/'&&b==0){
					cout<<"������������0"<<endl;
				}
				else{
					cout<<"����"<<endl;
				}
			}
			else if(w==2){
				cout<<"�������һ�������ķ�ĸ:";
				cin>>a;
				cout<<"�������һ�����ķ���:";
				cin>>b;
				cout<<"������ڶ������ķ�ĸ:";
				cin>>c;
				cout<<"������ڶ������ķ���:";
				cin>>d;
				cout<<"�����������(*�ǳƺ�,/�ǳ���):";
				cin>>x;
				cout<<"��ʼ����"<<endl;
				if(x=='+'){
					if(a==c){
						cout<<"���:"<<a<<"��֮"<<b+d<<endl;
					}
					else{
						cout<<"���:"<<a*c<<"��֮"<<b*c+a*d<<endl;
					}
				}
				else if(x=='-'){
						if(a==c){
						cout<<"���:"<<a<<"��֮"<<b-d<<endl;
					}
					else{
						cout<<"���:"<<a*c<<"��֮"<<b*c-a*d<<endl;
					}
				}
				else if(x=='*'){
					cout<<"���:"<<a*c<<"��֮"<<b*d<<endl;
				}
				else if(x=='/'){
					cout<<"���:"<<a*d<<"��֮"<<b*c<<endl;
				}
				else{
					cout<<"����"<<endl;
				}
			}
			else if(w==3){
				cout<<"��������ʽ(*�ǳƺţ�/�ǳ���,��:5.9+2.2��:";
				cin>>t>>x>>f;
				if(x=='+'){
					cout<<"���:"<<t+f<<endl;
				} 
				else if(x=='-'){
					cout<<"���:"<<t-f<<endl;
				}
				else if(x=='*'){
					cout<<"���:"<<t*f<<endl;
				}
				else if(x=='/'&&f!=0){
					cout<<"���:"<<t/f<<endl;
				}
				else{
					cout<<"����"<<endl;
				}
			}
			else if(w==4){
				cout<<"��������Ҫ�ٷֱȵ���:";
				cin>>a;
				cout<<"��������Ҫ�ٷ�֮��:";
				cin>>b;
				c=1;
				c=a/100;
				c=c*b;
				cout<<"���:"<<c<<endl;
			}
			else{
				cout<<"����"<<endl;
			}
			system("pause");
		}
		else if(n==2){
			cout<<"��������Ҫʲô 1.��� 2.���"<<endl;
			cin>>w;
			if(w==1){
				cout<<"��Ҫ�����λ������� 1.���� 2.����"<<endl;
				cin>>t;
				if(t==1){
					cout<<"�����볤:";
					cin>>a;
					cout<<"�������:";
					cin>>b;
					cout<<"���:"<<a*b<<endl;
				}
				else if(t==2){
					cout<<"�������:";
					cin>>a;
					cout<<"�������:";
					cin>>b;
					cout<<"���:"<<a*b/2<<endl;
				}
				else{
					cout<<"����"<<endl;
				}
			}
			else if(w==2){
				cout<<"��������Ҫ 1.������ 2.������ :";
				cin>>t;
				if(t==1){
					cout<<"�����볤:";
					cin>>a;
					cout<<"�������:";
					cin>>b;
					cout<<"�������:";
					cin>>c;
					cout<<"���:"<<a*b*c;
					system("pause");
				}
				else if(t==2){
					cout<<"���������������:";
					cin>>a;
					cout<<"�������:";
					cin>>b;
					cout<<"���:"<<a*b<<endl;
					system("pause");
				}
				else{
					cout<<"����"<<endl;
				}
			}
			else{
				cout<<"����"<<endl;
			}
		}
		else if(n==3){
			system("cls"); 
		}
		else if(n==4){
			cout<<"��������Ҫ��Сʱ:";
			cin>>a;
			cout<<"��������Ҫ������:";
			cin>>b;
			cout<<"��������Ҫ���밡:";
			cin>>c;
			sleep(a*3600+b*60+c);
			system("start https://s1.ax1x.com/2023/09/02/pPBUN0f.png");
		}
		else if(n==5){
			sleep(1);
			return 0;
		}
		else{
			cout<<"����"<<endl;
		}
	}
} 
