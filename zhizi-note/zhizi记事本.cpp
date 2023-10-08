#include <iostream>
#include <cstdlib>
#include <unistd.h>
using namespace std;
string name;
int n,w;
int main(){
  cout<<"欢迎来到zhizi记事本<<endl;
  sleep(1);
  cout<<"名字:";
  cin>>name;
  cout<<"欢迎,"<<name<<endl;
  system("cls");
  while(true){
    cout<<"你要干什么"<<endl<<"1.记事"<<endl<<"2.退出<<endl;
    cin>>n;
    if(n==1){
      cout<<"直接输入哦"<<endl;
      sleep(1);
      system("start 记事.exe");
      sleep(1);
      system("cls");
    }
    else if(n==2){
      cout<<"感谢使用"<<endl;
      sleep(1);
      return 0;
    }
    else{
      cout<<"错误"<<endl;
      sleep(1);
      system("cls");
    }
  }
}
