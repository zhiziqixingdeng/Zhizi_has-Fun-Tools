#include <iostream>
#include <cstdlib>
#include <unistd.h>
using namespace std;
int a,b,c,d,n,w;
double t,f;
char x;
int main(){
	cout<<"你好，我是数学机器人"<<endl;
	sleep(1);
	system("cls");
	while(1==1){
		cout<<"请输入需要干什么"<<endl<<"1.计算器 "<<endl<<"2.面积/体积"<<endl<<"3.刷新"<<endl<<"4.计时器"<<endl<<"5.退出"<<endl;
		cin>>n;
		if(n==1){
			cout<<"请输入需要什么计算"<<endl<<"1.整数"<<endl<<"2.分数"<<endl<<"3.小数"<<endl<<"4.百分比"<<endl;
			cin>>w;
			if(w==1){
				cout<<"请输入需要计算的算式(*是称号,/是除号,如:8*8):";
				cin>>a>>x>>b;
				if(x=='+'){
					cout<<"计算结果:"<<a+b<<endl;
				}
				else if(x=='-'){
					cout<<"计算结果:"<<a-b<<endl;
				}
				else if(x=='*'){
					cout<<"结果:"<<a*b<<endl;
				}
				else if(x=='/'&&b!=0){
					cout<<"结果:"<<a/b;
					if(a%b!=0){
						cout<<"......"<<a%b<<endl;
					}
					else{
						cout<<endl;
					}
				}
				else if(x=='/'&&b==0){
					cout<<"除数不可以是0"<<endl;
				}
				else{
					cout<<"错误"<<endl;
				}
			}
			else if(w==2){
				cout<<"请输入第一个分数的分母:";
				cin>>a;
				cout<<"请输入第一个数的分子:";
				cin>>b;
				cout<<"请输入第二个数的分母:";
				cin>>c;
				cout<<"请输入第二个数的分子:";
				cin>>d;
				cout<<"请输入运算符(*是称号,/是除号):";
				cin>>x;
				cout<<"开始计算"<<endl;
				if(x=='+'){
					if(a==c){
						cout<<"结果:"<<a<<"分之"<<b+d<<endl;
					}
					else{
						cout<<"结果:"<<a*c<<"分之"<<b*c+a*d<<endl;
					}
				}
				else if(x=='-'){
						if(a==c){
						cout<<"结果:"<<a<<"分之"<<b-d<<endl;
					}
					else{
						cout<<"结果:"<<a*c<<"分之"<<b*c-a*d<<endl;
					}
				}
				else if(x=='*'){
					cout<<"结果:"<<a*c<<"分之"<<b*d<<endl;
				}
				else if(x=='/'){
					cout<<"结果:"<<a*d<<"分之"<<b*c<<endl;
				}
				else{
					cout<<"错误"<<endl;
				}
			}
			else if(w==3){
				cout<<"请输入算式(*是称号，/是除号,如:5.9+2.2）:";
				cin>>t>>x>>f;
				if(x=='+'){
					cout<<"结果:"<<t+f<<endl;
				} 
				else if(x=='-'){
					cout<<"结果:"<<t-f<<endl;
				}
				else if(x=='*'){
					cout<<"结果:"<<t*f<<endl;
				}
				else if(x=='/'&&f!=0){
					cout<<"结果:"<<t/f<<endl;
				}
				else{
					cout<<"错误"<<endl;
				}
			}
			else if(w==4){
				cout<<"请输入需要百分比的数:";
				cin>>a;
				cout<<"请输入需要百分之几:";
				cin>>b;
				c=1;
				c=a/100;
				c=c*b;
				cout<<"结果:"<<c<<endl;
			}
			else{
				cout<<"错误"<<endl;
			}
			system("pause");
		}
		else if(n==2){
			cout<<"请输入需要什么 1.面积 2.体积"<<endl;
			cin>>w;
			if(w==1){
				cout<<"需要长方形还是三角 1.长方 2.三角"<<endl;
				cin>>t;
				if(t==1){
					cout<<"请输入长:";
					cin>>a;
					cout<<"请输入宽:";
					cin>>b;
					cout<<"面积:"<<a*b<<endl;
				}
				else if(t==2){
					cout<<"请输入底:";
					cin>>a;
					cout<<"请输入高:";
					cin>>b;
					cout<<"结果:"<<a*b/2<<endl;
				}
				else{
					cout<<"错误"<<endl;
				}
			}
			else if(w==2){
				cout<<"请输入需要 1.长方体 2.三角体 :";
				cin>>t;
				if(t==1){
					cout<<"请输入长:";
					cin>>a;
					cout<<"请输入宽:";
					cin>>b;
					cout<<"请输入高:";
					cin>>c;
					cout<<"体积:"<<a*b*c;
					system("pause");
				}
				else if(t==2){
					cout<<"请输入三角形面积:";
					cin>>a;
					cout<<"请输入高:";
					cin>>b;
					cout<<"体积:"<<a*b<<endl;
					system("pause");
				}
				else{
					cout<<"错误"<<endl;
				}
			}
			else{
				cout<<"错误"<<endl;
			}
		}
		else if(n==3){
			system("cls"); 
		}
		else if(n==4){
			cout<<"请输入需要几小时:";
			cin>>a;
			cout<<"请输入需要几分钟:";
			cin>>b;
			cout<<"请输入需要几秒啊:";
			cin>>c;
			sleep(a*3600+b*60+c);
			system("start https://s1.ax1x.com/2023/09/02/pPBUN0f.png");
		}
		else if(n==5){
			sleep(1);
			return 0;
		}
		else{
			cout<<"错误"<<endl;
		}
	}
} 
