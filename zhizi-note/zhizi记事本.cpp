#include <iostream>
#include <cstdlib>
#include <unistd.h>
using namespace std;
string name;
int n,w;
int main(){
  cout<<"��ӭ����zhizi���±�<<endl;
  sleep(1);
  cout<<"����:";
  cin>>name;
  cout<<"��ӭ,"<<name<<endl;
  system("cls");
  while(true){
    cout<<"��Ҫ��ʲô"<<endl<<"1.����"<<endl<<"2.�˳�<<endl;
    cin>>n;
    if(n==1){
      cout<<"ֱ������Ŷ"<<endl;
      sleep(1);
      system("start ����.exe");
      sleep(1);
      system("cls");
    }
    else if(n==2){
      cout<<"��лʹ��"<<endl;
      sleep(1);
      return 0;
    }
    else{
      cout<<"����"<<endl;
      sleep(1);
      system("cls");
    }
  }
}
