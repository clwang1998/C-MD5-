#include<iostream>
#include<cstring>
#include<ctime>
#include<cmath>
#include<stdlib.h>
#include<windows.h>
using namespace std;

void print(char a[])
{
	int i=0;
	for(i=0;a[i]!='\0';i++)
	{
		cout<<a[i];
		
	}
	cout<<endl;
}

class hero
{
private:
	char name[100];
	int HP;//����ֵ������ȷ�������ֵ�й�//
	int AP;//����ֵ��ֻ�о���ֵ�ﵽһ��ֵ������֯ĳЩ����//
	int RP;//����ֵ���������źͱ��˵ļ���//
	int SP;//�����ٶ�ֵ�������������ļ��ʺ�������֯�����Ĵ���//
	int DA;//����ֵ���ͷ���ֵһ���������������ֵ//
	int DF;//����ֵ��������ֵһ���������������ֵ//
public:
	//������������������������������������ʼ����������������������������������������������//
	//������ʼ��//
	void setname(char n[])
	{
		strcpy(name,n);
	};

	//���Գ�ʼ��//
	void setnature()
	{
		HP=275+rand()%201;
		AP=0;
		RP=rand()%111;
		SP=rand()%121;
		DA=42+rand()%54;
		DF=rand()%101;
	}

	
	//��������������������������������������������������������������������������������������//
	void hit(hero &h)
	{
		int b2;
		int b1;
		int A=10+rand()%11;
		b1=rand()%20+DA*0.5-h.DF*0.1;
		b2=2*b1;
		
		int p=rand()%3; 
		
		if(p>=0 && p<=1)
		{
			cout<<name<<"��֯����";

			
			if(RP-h.RP>80)
			{
				cout<<"�����˶���"<<b2<<"������ֵ"<<endl;
				h.HP-=b2;
				h.AP+=A;
			}
			if(RP-h.RP>50 && RP-h.RP<=80)
			{
				int q=rand()%2;
				if(q==0)
				{
					cout<<"�����˶���"<<b2<<"������ֵ"<<endl;
					h.HP-=b2;
					h.AP+=A;
				}
				if(q==1)
				{
					cout<<"�����˶���"<<b2<<"������ֵ"<<endl;
					h.HP-=b1;
					h.AP+=A;
				}
			}
			if(RP-h.RP>0 && RP-h.RP<=50)
			{
				int q=rand()%5;
				if(q==0)
				{
					cout<<"�����˶���"<<b2<<"������ֵ"<<endl;
					h.HP-=b2;
					h.AP+=A;
				}
				if(q>0)
				{
					cout<<"�����˶���"<<b2<<"������ֵ"<<endl;
					h.HP-=b1;
					h.AP+=A;
				}

			}
			if(RP-h.RP<=0)
			{
				cout<<"�����˶���"<<b2<<"������ֵ"<<endl;
				h.HP-=b1;
				h.AP+=A;
			}

			}
		
		
		if(p==2)
		{
			cout<<name<<"��10����Ա������֯���������"<<h.name<<"�ķ��ض�Ա�ͳ�ֱ��";
			int r=rand()/5;
			if(r==0)
			{
				cout<<"Ƥ��Ư�������أ�������Աֻ���۷���"<<"������"<<b1<<"������ֵ"<<endl;
				HP-=b1;
			}
			if(r>0)
			{
			if(RP-h.RP>80)
			{
				cout<<"������"<<b2<<"������ֵ"<<endl;
				h.HP-=b2;
				h.AP+=A;
			}
			if(RP-h.RP>50 && RP-h.RP<=80)
			{
				int q=rand()%2;
				if(q==0)
				{
					cout<<"������"<<b2<<"������ֵ"<<endl;
					h.HP-=b2;
					h.AP+=A;
				}
				if(q==1)
				{
					cout<<"������"<<b2<<"������ֵ"<<endl;
					h.HP-=b1;
					h.AP+=A;
				}
			}
			if(RP-h.RP>0 && RP-h.RP<=50)
			{
				int q=rand()%5;
				if(q==0)
				{
					cout<<"������"<<b2<<"������ֵ"<<endl;
					h.HP-=b2;
					h.AP+=A;
				}
				if(q>0)
				{
					cout<<"������"<<b2<<"������ֵ"<<endl;
					h.HP-=b1;
					h.AP+=A;
				}

			}
			if(RP-h.RP<0)
			{
				cout<<"������"<<b2<<"������ֵ"<<endl;
				h.HP-=b1;
				h.AP+=A;
			}

			}
		}

	}

	//��������������������������������������������ؽ�����������������������������������������������//
	void bite(hero &h)
	{
		int b=20+rand()%20+DA*0.5-h.DF*0.3;
		int A=15+rand()%11;
		int p=rand()%3;
		if(p==0)
		{
			cout<<name<<"����ǰ��������֯��������������ǰ��������͸��"<<h.name<<"���к�����Ž�Χ�����ߣ�����"<<endl;
		}
		if(p>0)
		{
			cout<<name<<"����ǰ��������֯��������������ǰ��������͸��һ�����ţ������������"<<h.name<<"����"<<b<<"������ֵ"<<endl;
			h.HP-=b;
			h.AP+=A;
		}
	}


	//������������������������������������������������ָ�����������������������������������������//
	void cure(hero &h)
	{
		cout<<name<<"��һλ��Ա�������ܶ��������ʹ�൹�أ�������ͣ��������ҽ�ϳ����ƣ�ͬʱ�������˶����ϸ�������Ա������ֵ��50"<<endl;
		Sleep(2200);
		cout<<h.name<<"��Թ�Լ�����Э���й���Эһ��������"<<endl;
		HP=HP+50;
	}

	//����������������������������������������������ŭ����������������������������������������//
	void angry()
	{
		cout<<name<<"���������ڳ�����YNWA����ʱ����ֵ���50��"<<endl;
		AP+=50;
	}



	//������������������������������������������������������������������������������������������������//

	void decide(hero &h)
	{
		int r=rand()%101;
		if(AP<40)
		{
			if(0<=r && r<20)
			{
				cout<<name<<"�����˽���"<<endl;
				Sleep(2200);
				hit(h);
				Sleep(2200);
				hit(h);
			}
			if(20<=r && r<=100)
			{
				hit(h);
			}
		}
		else if(40<=AP && AP<80)
		{
			if(0<=r && r<10)
			{
				cout<<name<<"�����˽���"<<endl;
				Sleep(2200);
				hit(h);
				Sleep(2200);
				hit(h);
			}
			if(10<=r && r<30)
			{
				hit(h);
			}
			if(30<=r && r<40)
			{
				bite(h);
			}
			

		}
		else if(AP>=80)
		{
			if(0<=r && r<10)
			{
				cout<<name<<"�����˽���"<<endl;
				Sleep(2200);
				hit(h);
				Sleep(2200);
				hit(h);
			}
			
			
			
			
			if(10<=r && r<20)
			{
				hit(h);
			}
			
		
			if(30<=r && r<40)
			{
				bite(h);
			}
			

		}

		
	}
	

	int getHP()
	{
		int hp=HP;
		return hp;
	}
	void showHP(hero &h)
	{
		cout<<name<<"������ֵ��"<<HP<<"                  "<<h.name<<"������ֵ��"<<h.HP<<endl;
	}



	void show(hero &h)
	{
		cout<<name<<"                     "<<h.name<<endl;
		cout<<"����ֵ��"<<HP<<"                     "<<"����ֵ��"<<h.HP<<endl;
		cout<<"����ֵ��"<<DA<<"                     "<<"����ֵ��"<<h.DA<<endl;
		cout<<"����ֵ��"<<DF<<"                     "<<"����ֵ��"<<h.DF<<endl;
		cout<<"����ֵ��"<<RP<<"                     "<<"����ֵ��"<<h.RP<<endl;
		cout<<"�����ٶ�ֵ��"<<SP<<"                     "<<"�����ٶ�ֵ��"<<h.SP<<endl;
	}
	
	//��������������������������������������������ʤ�����Ժ���������������������������������������������������//
	void claim(hero &h)
	{
		int p=rand()%3;
		if (p==0)
		{
			cout<<h.name<<"��"<<name<<"�����ˣ��ȷ�1:3"<<endl;
			Sleep(200);
			cout<<name<<":ϣ������̭���м���"<<endl;
		}
		if (p==1)
		{
			cout<<h.name<<"��"<<name<<"�����ˣ��ȷ�1:7"<<endl;
			Sleep(200);
			cout<<h.name<<":���費�����ǣ��´����籭��"<<endl;
		}
		if(p==2)
		{
			cout<<h.name<<"��"<<name<<"ƽ�֣��ȷ�1:1"<<endl;
			Sleep(2200);
			cout<<name<<":�����ԺͰɣ�"<<endl;
		}
	}

};

int main()
{
	srand(time(0));
	//��������������������������������������������������ʼ������������������������������������������//
	char str1[200];	
	char str2[100];
	char str3[100];
	char str4[100];
	char n1[20];
	char n2[20];
	strcpy(str1,"2018����˹���籭�Ѿ���ʼ�ˣ���֧����֧��ӣ���������˭�����ô����񱭣�����");
	strcpy(str2,"�����ǣ����������");
	strcpy(str3,"�Ͷ��ǣ����������");
	strcpy(str4,"������������������һ�����ڣ�������ʼ������");
	print(str1);
	print(str2);
	cin>>n1;
	print(str3);
	cin>>n2;
	print(str4);
	
	//�����������������������������������������������Գ�ʼ������������������������������������������//
	hero h1,h2;
	h1.setname(n1);
	h2.setname(n2);
	h1.setnature();
	h2.setnature();


	//���������������������������������������������ࡪ����������������������������������������������//
	h1.show(h2);

	int hp1,hp2;

	while(true)
	{
		h1.decide(h2);
		hp1=h1.getHP();
		hp2=h2.getHP();
		if(hp1<=0 || hp2<=0)
		{
			break;
		}
		
		Sleep(2200);
		h2.decide(h1);
		hp1=h1.getHP();
		hp2=h2.getHP();
		if(hp1<=0 || hp2<=0)
		{
			break;
		}
		
		

	}


	if(hp1<=0)
	{
		h2.claim(h1);	
	}
	if(hp2<=0)
	{
		h1.claim(h2);
	}
	system("pause");

	return 0;
	
}
