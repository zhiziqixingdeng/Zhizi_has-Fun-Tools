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
	cout<<"欢迎来到学习系统"<<endl;
	sleep(1);
	cout<<"请输入你的名字:";
	cin>>name;
	cout<<"你好，很高兴见到你"<<","<<name<<endl;
	sleep(1);
	system("cls");
	while(1==1){
		cout<<"请输入需要干什么"<<endl<<"1.每日问题"<<endl<<"2.口算练习"<<endl<<"3.应用题"<<endl<<"4.自己的题目"<<endl<<"5.个人信息"<<endl;
		cin>>n;
		if(n==1){
			d=rand()%1;
			if(d==0){
				w=rand()%6;
				for(int i=1;i<=w;i++){
					a=rand()%4;
					if(a==0){
						cout<<"妈妈";
					}
					else if(a==1){
						cout<<"爸爸";
					}
					else if(a==2){
						cout<<"姐姐";
					}
					else if(a==3){
						cout<<"哥哥";
					}
					if(i<w){
						cout<<"的";
					}
					else{
						cout<<"叫什么"<<endl;
						break;
					}
				}
			}
			else{
				a=rand()%1000;
				b=rand()%999+1;;
				c=rand()&5;
				if(c==0){
					cout<<a<<"+"<<b<<"等于"<<endl; 
				}
				else if(c==1){
					cout<<a<<"-"<<b<<"等于"<<endl; 
				}
				else if(c==2){
					cout<<a<<"x"<<b<<"等于"<<endl;
				}
				else{
					cout<<a<<"除"<<b<<"等于"<<endl;
				}
			}
		}
		else if(n==2){
			cout<<"请输入要做多少道题:";
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
						cout<<"正确!"<<endl;
						flag++;
					}
					else{
						cout<<"错误"<<endl;
					}
				}
				else if(c==1){
					cout<<a<<"-"<<b<<"=";
					cin>>d;
					if(d==a-b){
						cout<<"正确"<<endl;
						flag++;
					}
					else{
						cout<<"错误"<<endl;
					}
				}
				else if(c==2){
					cout<<a<<"x"<<b<<"=";
					cin>>d;
					if(d==a*b){
						cout<<"正确!"<<endl;
						flag++;
					}
					else{
						cout<<"错误"<<endl;
					}
				}
				else{
					cout<<"除法输入向下取整哦"<<endl;
					cout<<a<<"除以"<<b<<"="; 
					cin>>d;
					if(d==a/b){
						cout<<"正确"<<endl;
						flag++;
					}
					else{
						cout<<"错误"<<endl;
					}
				}
			}
			cout<<"一共有"<<cnt<<"道题,"<<"有"<<flag<<"道答对,"<<cnt-flag<<"道答错"<<endl; 
			system("pause");
			system("cls"); 
		}
		else if(n==3){
			d=rand()%2;
			if(d==0){
				a=rand()%100;
				b=rand()%a;
				cout<<"小明有"<<a<<"块糖"<<","<<"吃掉了"<<b<<"颗，还有几颗"<<endl;
				cout<<"小明还有";
				cin>>c;
				if(c==a-b){
					cout<<"正确啦"<<endl;
				}
				else{
					cout<<"错误"<<endl;
				}
			}
			else{
				cout<<"质子有"<<a<<"个"<<"请问质子如果增加了"<<b<<"个"<<endl;
				cout<<"质子有";
				cin>>c;
				if(c==a+b){
					cout<<"正确"<<endl;
				} 
				else{
					cout<<"错误"<<endl;
				}
			}
		}
		else if(n==4){
			cout<<"好的"<<endl;
			system("start 题目");
		}
		else if(n==5){
			cout<<"名字:"<<name<<endl;
			cout<<"上一次的口算练习对了"<<flag<<"道题"<<endl;
		}
		else{
			cout<<"再见"<<endl;
		}
	}
}
