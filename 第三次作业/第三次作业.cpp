#include<iostream>
#include<cstring>
using namespace std;
struct Student{
	char number[20];
	int score;
}Student[100];
int numofstudent=0;
void see_list(){
    cout<<"学生名单"<<endl;
    for(int i=0;i<numofstudent;i++)
        cout<<Student[i].number<<endl;
    cout<<endl;
}
int choose_subject(){
    char xuehao[20];
    cout<<"请输入您的学号"<<endl;
    cin>>xuehao;
    cout<<endl;
    if(numofstudent+1>99)
        return 0;
    else{
        strcpy(Student[numofstudent].number,xuehao);
        numofstudent++;
        return 1;
    }
}
int back_subject(){
  char xuehao[20];
  cout<<"请输入您的学号"<<endl;
  cin>>xuehao;
  cout<<endl;
  for(int i=0;i<numofstudent;i++){
      if(strcmp(Student[i].number,xuehao)==0){
        for(int j=i;j<numofstudent;j++){
            strcpy(Student[j].number,Student[j+1].number);
            Student[j].score=Student[j+1].score;
        }
        numofstudent--;
        return 1;
      }
  }
  cout<<"您输入的学号不存在！"<<endl<<endl;
  return 0;
}

int input_score(){
  char xuehao[20];
  int chengji;
  cout<<"请输入您的学号"<<endl;
  cin>>xuehao;
  cout<<endl;
  cout<<"请输入您的成绩"<<endl;
  cin>>chengji;
  cout<<endl;
  for(int i=0;i<numofstudent;i++){
    if(strcmp(Student[i].number,xuehao)==0){
        Student[i].score=chengji;
        return 1;
    }
  }
  cout<<"您输入的学号不存在！"<<endl<<endl;
  return 0;
}
int main(){
    int num;
    do{
    cout<<"1.查看学生名单"<<endl;
    cout<<"2.选课"<<endl;
    cout<<"3.退选"<<endl;
    cout<<"4.录入成绩"<<endl;
    cout<<"5.退出程序"<<endl;
    cout<<"请您输入所选项的序号: ";
    cin>>num;
    cout<<endl;

        switch(num){
		case 1:
		    if(numofstudent==0){
                cout<<"学生名单中没有任何学生！"<<endl<<endl;
            }
            else
			    see_list();
			break;
        case 2:
            if(choose_subject()==0)
               cout<<"选课失败！"<<endl<<endl;
            else
               cout<<"选课成功！"<<endl<<endl;
            break;
		case 3:
            if(back_subject()==0)
               cout<<"退课失败！"<<endl<<endl;
            else
               cout<<"退课成功！"<<endl<<endl;
			break;
		case 4:
		    if(input_score()==0)
               cout<<"录入成绩失败！"<<endl<<endl;
            else
               cout<<"录入成绩成功！"<<endl<<endl;
			break;
		case 5:
			return 0;
		default:
			cout<<"您输入了错误的菜单项，请重新选择！"<<endl<<endl;
		}
    }while(true);
}

