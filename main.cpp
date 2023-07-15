#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<string>


using namespace std;

void MainMenu();
void CCCSMenu();
void CCVSMenu();
void VCVSMenu();
void VCCSMenu();
void CCCS();
void CCVS();
void VCVS();
void VCCS();
void Exit();
void ExittoPre();
void EmulateCCCS(int R1, int R2, int input);
void ModParameter();


int main()
{
	int mainnumber;//��ʼ���û����̵�����ָ��
	while (true)
	{
		MainMenu();//���˵�
		cin >> mainnumber;//�����û���������
		switch (mainnumber) 
		{
		case 1:
			CCCSMenu();//�������Ƶ���Դ����
			break;
		case 2:
			CCVSMenu();//�������Ƶ�ѹԴ����
			break;
		case 3:
			VCVSMenu();//��ѹ���Ƶ�ѹԴ����
			break;
		case 4:
			VCCSMenu();//��ѹ���Ƶ���Դ����
			break;
		case 0:
			Exit();
			return 0;
			break;


		default:
			break;
		}
	}



}



void MainMenu()
{
	cout << "*****************" << endl;
	cout << "������ָ��: *****" << endl;
	cout << "*****1.CCCS *****" << endl;
	cout << "*****2.CCVS *****" << endl;
	cout << "*****3.VCVS *****" << endl;
	cout << "*****4.VCCS *****" << endl;
	cout << "*****       *****" << endl;
	cout << "*****0.Exit *****" << endl;
	cout << "*****************" << endl;
}

void CCCSMenu()
{
	cout << "*****************" << endl;
	cout << "CCCS�ܿ�Դ����***" << endl;
	cout << "������ָ��: *****" << endl;
	cout << "*****1.���� *****" << endl;
	cout << "*****2.�޸Ĳ��� *" << endl;
	cout << "*****0.Exit *****" << endl;
	cout << "*****************" << endl;
}

void CCVSMenu()
{
	cout << "*****************" << endl;
	cout << "CCVS�ܿ�Դ����***" << endl;
	cout << "������ָ��: *****" << endl;
	cout << "*****1.���� *****" << endl;
	cout << "*****2.�޸Ĳ��� *" << endl;
	cout << "*****0.Exit *****" << endl;
	cout << "*****************" << endl;
}

void VCVSMenu()
{
	cout << "*****************" << endl;
	cout << "VCVS�ܿ�Դ����***" << endl;
	cout << "������ָ��: *****" << endl;
	cout << "*****1.���� *****" << endl;
	cout << "*****2.�޸Ĳ��� *" << endl;
	cout << "*****0.Exit *****" << endl;
	cout << "*****************" << endl;
}

void VCCSMenu()
{
	cout << "*****************" << endl;
	cout << "VCCS�ܿ�Դ����***" << endl;
	cout << "������ָ��: *****" << endl;
	cout << "*****1.���� *****" << endl;
	cout << "*****2.�޸Ĳ��� *" << endl;
	cout << "*****0.Exit *****" << endl;
	cout << "*****************" << endl;
}

void CCCS()
{
	int secnumber;
	int R1 = 1;
	int R2 = 2;
	CCCSMenu();
	while (true)
	{
		cin >> secnumber;
		switch (secnumber)
		{
		case 1:
			EmulateCCCS(R1,R2,secnumber);
			break;
		case 2:
			ModParameter();
			break;
		case 0:
			ExittoPre();
			break;


		default:
			break;
		}
	}
}


void Exit()
{
	cout << "����ϵͳ�˳��ɹ�����ӭ�´�ʹ��~" << endl;
	system("pause");
}

void EmulateCCCS(int R1,int R2,int input)
{
	cout<<"������������ i="<<endl;
	cin  >> input;
	cout << input*((R1+R2)/R2)<<endl;
}
