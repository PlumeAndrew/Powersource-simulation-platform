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
	int mainnumber;//初始化用户键盘的输入指令
	while (true)
	{
		MainMenu();//主菜单
		cin >> mainnumber;//接收用户键盘输入
		switch (mainnumber) 
		{
		case 1:
			CCCSMenu();//电流控制电流源仿真
			break;
		case 2:
			CCVSMenu();//电流控制电压源仿真
			break;
		case 3:
			VCVSMenu();//电压控制电压源仿真
			break;
		case 4:
			VCCSMenu();//电压控制电流源仿真
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
	cout << "请输入指令: *****" << endl;
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
	cout << "CCCS受控源仿真***" << endl;
	cout << "请输入指令: *****" << endl;
	cout << "*****1.计算 *****" << endl;
	cout << "*****2.修改参数 *" << endl;
	cout << "*****0.Exit *****" << endl;
	cout << "*****************" << endl;
}

void CCVSMenu()
{
	cout << "*****************" << endl;
	cout << "CCVS受控源仿真***" << endl;
	cout << "请输入指令: *****" << endl;
	cout << "*****1.计算 *****" << endl;
	cout << "*****2.修改参数 *" << endl;
	cout << "*****0.Exit *****" << endl;
	cout << "*****************" << endl;
}

void VCVSMenu()
{
	cout << "*****************" << endl;
	cout << "VCVS受控源仿真***" << endl;
	cout << "请输入指令: *****" << endl;
	cout << "*****1.计算 *****" << endl;
	cout << "*****2.修改参数 *" << endl;
	cout << "*****0.Exit *****" << endl;
	cout << "*****************" << endl;
}

void VCCSMenu()
{
	cout << "*****************" << endl;
	cout << "VCCS受控源仿真***" << endl;
	cout << "请输入指令: *****" << endl;
	cout << "*****1.计算 *****" << endl;
	cout << "*****2.修改参数 *" << endl;
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
	cout << "仿真系统退出成功，欢迎下次使用~" << endl;
	system("pause");
}

void EmulateCCCS(int R1,int R2,int input)
{
	cout<<"请给出输入电流 i="<<endl;
	cin  >> input;
	cout << input*((R1+R2)/R2)<<endl;
}
