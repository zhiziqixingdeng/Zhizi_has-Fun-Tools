#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
struct flag{
	int flag1;
	int flag2;
	int flag3;
}s[1];
int cnt,ans;
int a[4],b[4],c,d;
int main(){
 cout<<"请输入道数(最高20道):";
	cin>>s[0].flag1;
	cout<<"有没有进位/退位 1.有 2.没有"<<endl;
	cin>>s[0].flag2;
	cout<<"请输入每道需要几分钟:";
	cin>>s[0].flag3;
	ans=s[0].flag3*s[0].flag1;//计算需要的时间
	srand(time(NULL));
	freopen("练习题.txt","w",stdout);
	cout<<"         练习题          "<<endl;
	cout<<"姓名:______  建议用时:"<<ans<<" 实际用时:_______"<<endl;
	for(int i=1;i<=s[0].flag1;i++){
		c=rand()%2+1;
		if(c==1){
			a[1]=rand()%10;
			a[2]=rand()%10;
			a[3]=rand()%10;
			if(s[0].flag2==1){
				d=rand()%1+1;
				while(a[d]+b[d]>=10){
					b[1]=rand()%10;
					b[2]=rand()%10;
					b[3]=rand()%10;
				}
				if(a[1]==0){
					if(a[2]==0){
						cout<<a[3]<<"+";
					}
					else{
						cout<<a[2]<<a[3]<<"+";
					}
				}
				else{
					cout<<a[1]<<a[2]<<a[3]<<"+";
				}
				if(b[1]==0){
					if(b[2]==0){
						cout<<b[3]<<"=";
					}
					else{
						cout<<b[2]<<b[3]<<"=";
					}
				}
				else{
					cout<<b[1]<<b[2]<<b[3]<<"=";
				}
			}
			else{
			d=rand()%1+1;
			while(a[d]+b[d]<10){
			  b[1]=rand()%10;
			  b[2]=rand()%10;
			  b[3]=rand()%10;
			}
			if(a[1]==0){
					if(a[2]==0){
						cout<<a[3]<<"+";
					}
					else{
						cout<<a[2]<<a[3]<<"+";
					}
     }
     else{
     	cout<<a[1]<<a[2]<<a[3]<<"+";
		 }
		 if(b[1]==0){
					if(b[2]==0){
						cout<<b[3]<<"+";
					}
					else{
						cout<<b[2]<<b[3]<<"=";
					}
				}
				else{
					cout<<b[1]<<b[2]<<b[3]<<"=";
				}
		}
		}
		if(c==2){
			a[1]=rand()%10;
			a[2]=rand()%10;
			a[3]=rand()%10;
			if(s[0].flag2==1){
				d=rand()%1+1;
				while(a[d]-b[d]<=0){
					b[1]=rand()%10;
					b[2]=rand()%10;
					b[3]=rand()%10;
				}
				if(a[1]==0){
					if(a[2]==0){
						cout<<a[3]<<"-";
					}
					else{
						cout<<a[2]<<a[3]<<"-";
					}
				}
				else{
					cout<<a[1]<<a[2]<<a[3]<<"+";
				}
				if(b[1]==0){
					if(b[2]==0){
						cout<<b[3]<<"=";
					}
					else{
						cout<<b[2]<<b[3]<<"=";
					}
				}
				else{
					cout<<b[1]<<b[2]<<b[3]<<"=";
				}
			}
			else{
			d=rand()%1+1;
			while(a[d]-b[d]>0){
			  b[1]=rand()%10;
			  b[2]=rand()%10;
			  b[3]=rand()%10;
			}
			if(a[1]==0){
					if(a[2]==0){
						cout<<a[3]<<"+";
					}
					else{
						cout<<a[2]<<a[3]<<"+";
					}
     }
     else{
     	cout<<a[1]<<a[2]<<a[3]<<"+";
		 }
		 if(b[1]==0){
					if(b[2]==0){
						cout<<b[3]<<"=";
					}
					else{
						cout<<b[2]<<b[3]<<"=";
					}
				}
				else{
					cout<<b[1]<<b[2]<<b[3]<<"=";
				}
		}
		}
		cnt++;
		if(cnt==2){
			cout<<endl;
			cnt=0;
		}
		else{
			cout<<"   ";
		}
	}
}
