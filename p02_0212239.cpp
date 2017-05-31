//File Name:p02_0212239.cpp
//Author:翁健豪
//Email Address:howarder3@gmail.com
//Assignment Number:2
//Description:計算使用者的基礎代謝量所可以代謝的巧克力棒數。
//Last Changed:October 6,2013

#include<iostream>
using namespace std;

int main()
{
	//#引入變數
	int choice,age;
	double weight,height,BMR,chocolate_bar;
	char sex,again;
	
	//#取小數點一位
	cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);
		
	//#迴圈
    do
    {   
		//#迴圈時清除畫面
        system("cls");
		//#要求資料(體重部分)
		re_input:
	    cout<<"請選擇你輸入體重要用的單位，若要pound請輸入1，若要Kg請輸入2"<<endl;
		cin>>choice;
			if(choice == 1)
				//#計算過程(pound)
				{cout<<"請輸入你的體重(目前單位：pounds):"<<endl;
			     cin>>weight;}
			else if(choice == 2)
				//#計算過程(Kg)
				{cout<<"請輸入你的體重(目前單位：Kg):"<<endl;
		         cin>>weight;
				 weight=weight/0.454;}
			else
				//#輸入錯誤
				{cout<<"輸入錯誤!請再試一次!"<<endl;
				 goto re_input;}


        //#要求資料(身高部分)
		re_input2:
        cout<<"請選擇你輸入身高要用的單位，若要inches請輸入1，若要cm請輸入2"<<endl;
		cin>>choice;
			if(choice == 1)
				//#計算過程(inch)
	            {cout<<"請輸入你的身高(目前單位：inch):"<<endl;
			     cin>>height;}
            else if(choice == 2)
				//#計算過程(cm)
			    {cout<<"請輸入你的身高(目前單位：cm):"<<endl;
	             cin>>height;
	             height=height/2.54;}
			else
				//#錯誤輸入
				{cout<<"輸入錯誤!請再試一次!"<<endl;
				 goto re_input2;}

	    //#要求資料(年齡部分)
	    cout<<"請輸入你的年齡:"<<endl;
		cin>>age;

	    //#要求資料(性別部分)
		re_input3:
	    cout<<"請輸入你的性別(男生請輸入M/m，女生請輸入F/f):"<<endl;
        cin>>sex;

		if(sex=='m'||sex=='M')
		    //#男生BMR計算
			{BMR=66+(6.3*weight)+(12.9*height)-(6.8*age);
			 cout<<"\n#貼心小提醒1：\n"
		         <<"男生基礎代謝量的計算公式=66+6.3*體重(pounds)+12.9*身高(inches)-6.8*年齡(歲)。\n\n";}
		else if(sex=='f'||sex=='F')
		    //#女生BMR計算
			{BMR=655+(4.3*weight)+(4.7*height)-(4.7*age);
			 cout<<"\n#貼心小提醒1：\n"
		         <<"女生基礎代謝量的計算公式=655+4.3*體重(pounds)+4.7*身高(inches)-4.7*年齡(歲)。\n\n";}
		else
			//#錯誤輸入
			{cout<<"輸入錯誤!請再試一次!"<<endl;
			 goto re_input3;}

		//#基礎代謝量換算巧克力棒數
		chocolate_bar=BMR/230;
		
		//提醒巧克力棒熱含量與計算過程
		cout<<"#貼心小提醒2：一根巧克力棒會提供230卡路里的熱量。\n"<<endl;
		cout<<"##算式： \n";
			if(sex=='m'||sex=='M')
			    //#男生BMR計算
				{BMR=66+(6.3*weight)+(12.9*height)-(6.8*age);
				 cout<<"您的基礎代謝量=66+(6.3*"<<weight<<")+(12.9*"<<height<<")-(6.8*"<<age<<")"<<"="<<BMR
					 <<"\n\n換算成巧克力棒的數量="<<BMR<<"/230"<<"="<<chocolate_bar<<"支巧克力棒\n\n";}
			else if(sex=='f'||sex=='F')
			    //#女生BMR計算
				{BMR=655+(4.3*weight)+(4.7*height)-(4.7*age);
				 cout<<"您的基礎代謝量=655+(4.3*"<<weight<<")+(4.7*"<<height<<")-(4.7*"<<age<<")"<<"="<<BMR
					 <<"\n\n換算成巧克力棒的數量="<<BMR<<"/230"<<"="<<chocolate_bar<<"支巧克力棒\n\n";}

        //#輸出最終結果
		cout<<"所以，您最多能吃的巧克力棒數量為: "<<chocolate_bar<<" 枝。\n"<<endl;

		//詢問是否繼續執行程式，系統暫停並確認
        cout<<"請問您是否要再一次執行程式?是的話請打y，要退出程式的話請打n"<<endl;
        cin>>again;
		cout<<"\n#貼心小提醒3："<<endl;
		cout<<"「系統關閉」或「執行下一次運算」時將會清除全部資料，請確認您的資料已記下來。\n"
			<<"若您已確認記下，請再按一次「Enter鍵」以執行下一個步驟。\n\n\n"<<endl;
		system("PAUSE");

    //依使用者給的答案再一次執行程式或關閉程式
    } while (again=='y'||again=='Y');

	return 0;
}