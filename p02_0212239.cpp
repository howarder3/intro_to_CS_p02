//File Name:p02_0212239.cpp
//Author:�ΰ���
//Email Address:howarder3@gmail.com
//Assignment Number:2
//Description:�p��ϥΪ̪���¦�N�¶q�ҥi�H�N�ª����J�O�μơC
//Last Changed:October 6,2013

#include<iostream>
using namespace std;

int main()
{
	//#�ޤJ�ܼ�
	int choice,age;
	double weight,height,BMR,chocolate_bar;
	char sex,again;
	
	//#���p���I�@��
	cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);
		
	//#�j��
    do
    {   
		//#�j��ɲM���e��
        system("cls");
		//#�n�D���(�魫����)
		re_input:
	    cout<<"�п�ܧA��J�魫�n�Ϊ����A�Y�npound�п�J1�A�Y�nKg�п�J2"<<endl;
		cin>>choice;
			if(choice == 1)
				//#�p��L�{(pound)
				{cout<<"�п�J�A���魫(�ثe���Gpounds):"<<endl;
			     cin>>weight;}
			else if(choice == 2)
				//#�p��L�{(Kg)
				{cout<<"�п�J�A���魫(�ثe���GKg):"<<endl;
		         cin>>weight;
				 weight=weight/0.454;}
			else
				//#��J���~
				{cout<<"��J���~!�ЦA�դ@��!"<<endl;
				 goto re_input;}


        //#�n�D���(��������)
		re_input2:
        cout<<"�п�ܧA��J�����n�Ϊ����A�Y�ninches�п�J1�A�Y�ncm�п�J2"<<endl;
		cin>>choice;
			if(choice == 1)
				//#�p��L�{(inch)
	            {cout<<"�п�J�A������(�ثe���Ginch):"<<endl;
			     cin>>height;}
            else if(choice == 2)
				//#�p��L�{(cm)
			    {cout<<"�п�J�A������(�ثe���Gcm):"<<endl;
	             cin>>height;
	             height=height/2.54;}
			else
				//#���~��J
				{cout<<"��J���~!�ЦA�դ@��!"<<endl;
				 goto re_input2;}

	    //#�n�D���(�~�ֳ���)
	    cout<<"�п�J�A���~��:"<<endl;
		cin>>age;

	    //#�n�D���(�ʧO����)
		re_input3:
	    cout<<"�п�J�A���ʧO(�k�ͽп�JM/m�A�k�ͽп�JF/f):"<<endl;
        cin>>sex;

		if(sex=='m'||sex=='M')
		    //#�k��BMR�p��
			{BMR=66+(6.3*weight)+(12.9*height)-(6.8*age);
			 cout<<"\n#�K�ߤp����1�G\n"
		         <<"�k�Ͱ�¦�N�¶q���p�⤽��=66+6.3*�魫(pounds)+12.9*����(inches)-6.8*�~��(��)�C\n\n";}
		else if(sex=='f'||sex=='F')
		    //#�k��BMR�p��
			{BMR=655+(4.3*weight)+(4.7*height)-(4.7*age);
			 cout<<"\n#�K�ߤp����1�G\n"
		         <<"�k�Ͱ�¦�N�¶q���p�⤽��=655+4.3*�魫(pounds)+4.7*����(inches)-4.7*�~��(��)�C\n\n";}
		else
			//#���~��J
			{cout<<"��J���~!�ЦA�դ@��!"<<endl;
			 goto re_input3;}

		//#��¦�N�¶q���⥩�J�O�μ�
		chocolate_bar=BMR/230;
		
		//�������J�O�μ��t�q�P�p��L�{
		cout<<"#�K�ߤp����2�G�@�ڥ��J�O�η|����230�d���������q�C\n"<<endl;
		cout<<"##�⦡�G \n";
			if(sex=='m'||sex=='M')
			    //#�k��BMR�p��
				{BMR=66+(6.3*weight)+(12.9*height)-(6.8*age);
				 cout<<"�z����¦�N�¶q=66+(6.3*"<<weight<<")+(12.9*"<<height<<")-(6.8*"<<age<<")"<<"="<<BMR
					 <<"\n\n���⦨���J�O�Ϊ��ƶq="<<BMR<<"/230"<<"="<<chocolate_bar<<"�䥩�J�O��\n\n";}
			else if(sex=='f'||sex=='F')
			    //#�k��BMR�p��
				{BMR=655+(4.3*weight)+(4.7*height)-(4.7*age);
				 cout<<"�z����¦�N�¶q=655+(4.3*"<<weight<<")+(4.7*"<<height<<")-(4.7*"<<age<<")"<<"="<<BMR
					 <<"\n\n���⦨���J�O�Ϊ��ƶq="<<BMR<<"/230"<<"="<<chocolate_bar<<"�䥩�J�O��\n\n";}

        //#��X�̲׵��G
		cout<<"�ҥH�A�z�̦h��Y�����J�O�μƶq��: "<<chocolate_bar<<" �K�C\n"<<endl;

		//�߰ݬO�_�~�����{���A�t�μȰ��ýT�{
        cout<<"�аݱz�O�_�n�A�@������{��?�O���ܽХ�y�A�n�h�X�{�����ܽХ�n"<<endl;
        cin>>again;
		cout<<"\n#�K�ߤp����3�G"<<endl;
		cout<<"�u�t�������v�Ρu����U�@���B��v�ɱN�|�M��������ơA�нT�{�z����Ƥw�O�U�ӡC\n"
			<<"�Y�z�w�T�{�O�U�A�ЦA���@���uEnter��v�H����U�@�ӨB�J�C\n\n\n"<<endl;
		system("PAUSE");

    //�̨ϥΪ̵������צA�@������{���������{��
    } while (again=='y'||again=='Y');

	return 0;
}