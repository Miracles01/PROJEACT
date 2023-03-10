#include <iostream>
#include <string>
#include <windows.h>
#include <iomanip>
using namespace std;

int total_score=0;
int correct_answer = 0;
int hints_used = 0;
string Name[5];
string topic;
int choice;
void hints();
void menu();
int start();
void howtoplay();

void hints()
{
	cout << "                                                                                     ***********************************" << endl;
	cout << "                                                                                     **   A: Audience help            **" << endl;
	cout << "                                                                                     **   B: 50:50                    **" << endl;
	cout << "                                                                                     **   C: Room for mistake         **" << endl;
	cout << "                                                                                     **   D: Change the question      **" << endl;
	cout << "                                                                                     ***********************************" << endl;
}

void quiz1()
{
    cout << "                                                                                     ***********************************" << endl;
	cout << "                                                                                     *****      TOTAL SCORE:" << total_score << "      *****" << endl;
	cout << "                                                                                     ***********************************" << endl; 
	cout << "\t\t\t\t\t Q U E S T I O N No. 1" << endl;
    cout << "Who does Iguro Obanai secretly like?" << endl;
    cout << "[1] Kamado Tanjiro" << endl;
    cout << "[2] Kanroji Mitsuri2" << endl;
    cout << "[3] Kojo Shinobu" << endl;
    cout << "[4] Tomioka Giyu" << endl;
		string answer;
		cout << endl;
    	cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
		cin >> answer;
		//limiting the answers of the user
		if (answer == "1" || answer == "2" || answer == "3" || answer == "4")
		{
			if (answer == "3")
			{
				total_score += 10;
				correct_answer += 1;
				cout << "C O R R E C T   A N S W E R !!!" << endl;
				cout << "You got 10 points out of 10." << endl;
			}
			else if (answer == "1" || answer == "2" || answer == "4")
			{
				cout << "W R O N G  A N S W E R !!!" << endl;
				cout << "You got 0 points out of 10." << endl;
			}
			cout << endl;
			system("pause");//คำสั่งที่จะหยุดการทำงานไว้จนกว่าผู้ใช้จะกดปุ่มบนแป้นพิมพ์
			system("cls");
		}
		else //ถ้าไม่ได้ตอบ 1 2 3 4 โปรแกรมจะให้ตอบให้ถูกอีกครั้ง
		{
			system("cls");
			cout << "\t\t*************************************************************************************" << endl;
			cout << "\t\t****           P L E A S E  I N P U T  C O R R E C T  V A L U E !                ****" << endl;
			cout << "\t\t*************************************************************************************" << endl;
			cout << endl;
            quiz1();
			
		}
}

void quiz2() {
	cout << "                                                                                     ***********************************" << endl;
	cout << "                                                                                     *****      TOTAL SCORE:" << total_score << "     *****" << endl;
	cout << "                                                                                     ***********************************" << endl;
	cout << "\t\t\t\t\t  Q U E S T I O N  No. 2" << endl;
	cout << "What is the only function all C++ programs must contain?" << endl;
	cout << "[1] start()" << endl;
	cout << "[2] system()" << endl;
	cout << "[3] program()" << endl;
	cout << "[4] main()" << endl;
	string answer;
	cout<<endl;
	cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
	cin >> answer;
	if (answer == "1" || answer == "2" || answer == "3" || answer == "4")
	{
		if (answer == "4")
		{
			total_score += 10;
			correct_answer += 1;
			cout << "C O R R E C T   A N S W E R !!!" << endl;
			cout << "You got 10 points out of 10." << endl;
		}
		else if (answer == "1" || answer == "2" || answer == "3")
		{
			cout << "W R O N G  A N S W E R !!!" << endl;
			cout << "You got 0 points out of 10." << endl;
		}
			cout << endl;
			system("pause");
			system("cls");
		}
	else
	{
			system("cls");
			cout << "\t\t*************************************************************************************" << endl;
			cout << "\t\t****           P L E A S E  I N P U T  C O R R E C T  V A L U E !                ****" << endl;
			cout << "\t\t*************************************************************************************" << endl;
			cout << endl;
			quiz2();
	}
	
}
void quiz3() {
	cout << "                                                                                     ***********************************" << endl;
	cout << "                                                                                     *****      TOTAL SCORE:" << total_score << "     *****" << endl;
	cout << "                                                                                     ***********************************" << endl;
	cout << "\t\t\t\t\t  Q U E S T I O N  No. 3" << endl;
	cout << "Which of the following is a correct comment?" << endl;
	cout << "[1] / Comment /" << endl;
	cout << "[2] ** Comment **" << endl;
	cout << "[3] { Comment }" << endl;
	cout << "[4]  //comment" << endl;
	string answer;
	cout << endl;
	cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
	cin >> answer;
	if (answer == "1" || answer == "2" || answer == "3" || answer == "4")
	{
		if (answer == "4") {
			total_score += 10;
			correct_answer += 1;
			cout << "C O R R E C T   A N S W E R !!!" << endl;
			cout << "You got 10 points out of 10." << endl;
		}
		else if (answer == "1" || answer == "2" || answer == "3")
		{
			cout << "W R O N G  A N S W E R !!!" << endl;
			cout << "You got 0 points out of 10." << endl;
		}
			cout << endl;
			system("pause");
			system("cls");
	}
	else
	{
			system("cls");
			cout << "\t\t*************************************************************************************" << endl;
			cout << "\t\t****           P L E A S E  I N P U T  C O R R E C T  V A L U E !                ****" << endl;
			cout << "\t\t*************************************************************************************" << endl;
			cout << endl;
			quiz3();
	}
}
void quiz4() {
	cout << "                                                                                     ***********************************" << endl;
	cout << "                                                                                     *****      TOTAL SCORE:" << total_score << "     *****" << endl;
	cout << "                                                                                     ***********************************" << endl;
	cout << "\t\t\t\t\t  Q U E S T I O N  No. 4" << endl; 
	cout << "Which of the following is the correct operator to compare two variables?" << endl;
	cout << "[1] = =" << endl;
	cout << "[2] :=" << endl;
	cout << "[3] =" << endl;
	cout << "[4] ==" << endl;
	string answer;
	cout << endl;
	cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
	cin >> answer;
	if (answer == "1" || answer == "2" || answer == "3" || answer == "4")
	{
		if (answer == "4") {
			total_score += 10;
			correct_answer += 1;
			cout << "C O R R E C T   A N S W E R !!!" << endl;
			cout << "You got 10 points out of 10." << endl;
		}
		else if (answer == "1" || answer == "2" || answer == "3")
		{
			cout << "W R O N G  A N S W E R !!!" << endl;
			cout << "You got 0 points out of 10." << endl;
		}
			cout << endl;
			system("pause");
			system("cls");
	}
	else
	{
			system("cls");
			cout << "\t\t*************************************************************************************" << endl;
			cout << "\t\t****           P L E A S E  I N P U T  C O R R E C T  V A L U E !                ****" << endl;
			cout << "\t\t*************************************************************************************" << endl;
			cout << endl;
			quiz4();
	}
}
void quiz5() {
	cout << "                                                                                     ***********************************" << endl;
	cout << "                                                                                     *****      TOTAL SCORE:" << total_score << "     *****" << endl;
	cout << "                                                                                     ***********************************" << endl;
	cout << "\t\t\t\t\t  Q U E S T I O N  No. 4" << endl; 
	cout << "Which of the following is the correct operator to compare two variables?" << endl;
	cout << "[1] = =" << endl;
	cout << "[2] :=" << endl;
	cout << "[3] =" << endl;
	cout << "[4] ==" << endl;
	string answer;
	cout << endl;
	cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
	cin >> answer;
	if (answer == "1" || answer == "2" || answer == "3" || answer == "4")
	{
		if (answer == "4") {
			total_score += 10;
			correct_answer += 1;
			cout << "C O R R E C T   A N S W E R !!!" << endl;
			cout << "You got 10 points out of 10." << endl;
		}
		else if (answer == "1" || answer == "2" || answer == "3")
		{
			cout << "W R O N G  A N S W E R !!!" << endl;
			cout << "You got 0 points out of 10." << endl;
		}
			cout << endl;
			system("pause");
			system("cls");
	}
	else
	{
			system("cls");
			cout << "\t\t*************************************************************************************" << endl;
			cout << "\t\t****           P L E A S E  I N P U T  C O R R E C T  V A L U E !                ****" << endl;
			cout << "\t\t*************************************************************************************" << endl;
			cout << endl;
			quiz5();
	}
}
void quiz6() {
	cout << "                                                                                     ***********************************" << endl;
	cout << "                                                                                     *****      TOTAL SCORE:" << total_score << "     *****" << endl;
	cout << "                                                                                     ***********************************" << endl;
	cout << "\t\t\t\t\t  Q U E S T I O N  No. 4" << endl; 
	cout << "Which of the following is the correct operator to compare two variables?" << endl;
	cout << "[1] = =" << endl;
	cout << "[2] :=" << endl;
	cout << "[3] =" << endl;
	cout << "[4] ==" << endl;
	string answer;
	cout << endl;
	cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
	cin >> answer;
	if (answer == "1" || answer == "2" || answer == "3" || answer == "4")
	{
		if (answer == "4") {
			total_score += 10;
			correct_answer += 1;
			cout << "C O R R E C T   A N S W E R !!!" << endl;
			cout << "You got 10 points out of 10." << endl;
		}
		else if (answer == "1" || answer == "2" || answer == "3")
		{
			cout << "W R O N G  A N S W E R !!!" << endl;
			cout << "You got 0 points out of 10." << endl;
		}
			cout << endl;
			system("pause");
			system("cls");
	}
	else
	{
			system("cls");
			cout << "\t\t*************************************************************************************" << endl;
			cout << "\t\t****           P L E A S E  I N P U T  C O R R E C T  V A L U E !                ****" << endl;
			cout << "\t\t*************************************************************************************" << endl;
			cout << endl;
			quiz6();
	}
}
void quiz7() {
	cout << "                                                                                     ***********************************" << endl;
	cout << "                                                                                     *****      TOTAL SCORE:" << total_score << "     *****" << endl;
	cout << "                                                                                     ***********************************" << endl;
	cout << "\t\t\t\t\t  Q U E S T I O N  No. 4" << endl; 
	cout << "Which of the following is the correct operator to compare two variables?" << endl;
	cout << "[1] = =" << endl;
	cout << "[2] :=" << endl;
	cout << "[3] =" << endl;
	cout << "[4] ==" << endl;
	string answer;
	cout << endl;
	cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
	cin >> answer;
	if (answer == "1" || answer == "2" || answer == "3" || answer == "4")
	{
		if (answer == "4") {
			total_score += 10;
			correct_answer += 1;
			cout << "C O R R E C T   A N S W E R !!!" << endl;
			cout << "You got 10 points out of 10." << endl;
		}
		else if (answer == "1" || answer == "2" || answer == "3")
		{
			cout << "W R O N G  A N S W E R !!!" << endl;
			cout << "You got 0 points out of 10." << endl;
		}
			cout << endl;
			system("pause");
			system("cls");
	}
	else
	{
			system("cls");
			cout << "\t\t*************************************************************************************" << endl;
			cout << "\t\t****           P L E A S E  I N P U T  C O R R E C T  V A L U E !                ****" << endl;
			cout << "\t\t*************************************************************************************" << endl;
			cout << endl;
			quiz7();
	}
}
void quiz8() {
	cout << "                                                                                     ***********************************" << endl;
	cout << "                                                                                     *****      TOTAL SCORE:" << total_score << "     *****" << endl;
	cout << "                                                                                     ***********************************" << endl;
	hints();
	cout << "\t\t\t\t\t  Q U E S T I O N  No. 9" << endl;
	cout << "What is the result of the program below?" << endl;
	cout << " int x = 10; " << endl;
	cout << " int y = 70; " << endl;
	cout << " x = x + y; " << endl;
	cout << " y = x - y;  " << endl;
	cout << " x = x - y;  " << endl;
	cout << endl;
	cout << "[1] x=70, y=10" << endl;
	cout << "[2] x=10, y=70" << endl;
	cout << "[3] x=60, y=20" << endl;
	cout << "[4] x=20, y=60" << endl;
	string answer;
	cout << endl;
	cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
	cin >> answer;
	if (answer == "1" || answer == "2" || answer == "3" || answer == "4")
	{
		if (answer == "1") {
			total_score += 10;
			correct_answer += 1;
			cout << "C O R R E C T   A N S W E R !!!" << endl;
			cout << "You got 10 points out of 10." << endl;
			
		}
		else if (answer == "2" || answer == "3" || answer == "4")
		{
			cout << "W R O N G  A N S W E R !!!" << endl;
			cout << "You got 0 points out of 10." << endl;
			
		}
			cout << endl;
			system("pause");
			system("cls");
	}
	else if (answer == "A" || answer == "a")
	{
		hints_used++;
		cout << endl;
		cout << "Audience prediction is...  " << endl;
		cout << "[1] 30%" << endl;
		cout << "[2] 25%" << endl;
		cout << "[3] 20%" << endl;
		cout << "[4] 25%" << endl;
		cout << endl;
		cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
		cin >> answer;
		if (answer == "1") {
			total_score += 5;
			correct_answer += 1;
			cout << "C O R R E C T   A N S W E R !!!" << endl;
			cout << "You got 5 points out of 5." << endl;

		}
		else if (answer == "2" || answer == "3" || answer == "4")
		{
			cout << "W R O N G  A N S W E R !!!" << endl;
			cout << "You got 0 points out of 5." << endl;
		}
		cout << endl;
		system("pause");
		system("cls");
	}
	else if (answer == "B" || answer == "b")
	{
		hints_used++;
		system("cls");
		cout << "Now you have chance to choose two answers. If one of them will correct you will take 5 points." << endl;
		cout << "\t\t\t\t\tQ U E S T I O N  No. 9" << endl;
		cout << "What is the result of the program below?" << endl;
		cout << " int x = 10; " << endl;
		cout << " int y = 70; " << endl;
		cout << " x = x + y; " << endl;
		cout << " y = x - y;  " << endl;
		cout << " x = x - y;  " << endl;
		cout << endl;
		cout << "[1] x=70, y=10" << endl;
		cout << "[2] x=10, y=70" << endl;
		cout << "[3] x=60, y=20" << endl;
		cout << "[4] x=20, y=60" << endl;
		string answer1, answer2;
		cout << endl;
		cout << "\t\t\t\t\tENTER YOUR FIRST CHOICE: ";
		cin >> answer1;
		cout << "\t\t\t\t\tENTER YOUR SECOND CHOICE: ";
		cin >> answer2;
		if (answer1 == "1" || answer2 == "1")
		{
			total_score += 5;
			correct_answer += 1;
			cout << "C O R R E C T   A N S W E R !!!" << endl;
			cout << "You got 5 points out of 5." << endl;
		}
		else
		{
			cout << "W R O N G  A N S W E R !!!" << endl;
			cout << "You got 0 points out of 5." << endl;
		}
		cout << endl;
		system("pause");
		system("cls");
		
	}
	else if (answer == "C" || answer == "c")
	{
		hints_used++;
		system("cls");
		cout << "Now you have chance to answer incorrectly. You will take 5 points for this question." << endl;
		cout << "\t\t\t\t\tQ U E S T I O N  No. 9" << endl;
		cout << "What is the result of the program below?" << endl;
		cout << " int x = 10; " << endl;
		cout << " int y = 70; " << endl;
		cout << " x = x + y; " << endl;
		cout << " y = x - y;  " << endl;
		cout << " x = x - y;  " << endl;
		cout << endl;
		cout << "[1] x=70, y=10" << endl;
		cout << "[2] x=10, y=70" << endl;
		cout << "[3] x=60, y=20" << endl;
		cout << "[4] x=20, y=60" << endl;
		string answer;
		cout << endl;
		cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
		cin >> answer;
		total_score += 5;
		correct_answer += 1;
		if (answer == "1")
			cout << "C O R R E C T   A N S W E R !!!" << endl;
		cout << "You got 5 points out of 5." << endl;
		cout << endl;
		system("pause");
		system("cls");
		
	}
	else if (answer == "D" || answer == "d") {
	hints_used++;
	system("cls");
	cout << "\t T H I S   I S  A  N E W   Q U E S T I O N. Y O U  W I L L  G E T  5  P O I N T S. " << endl;
	cout << endl;
	cout << "When did INHA UNivercity in TAshkent established?." << endl;
	cout << "[1] 2014" << endl;
	cout << "[2] 1968" << endl;
	cout << "[3] 2015" << endl;
	string answer;
	cout << endl;
	cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
	cin >> answer;
	if (answer == "1") {
		total_score += 5;
		correct_answer += 1;
		cout << "C O R R E C T   A N S W E R !!!" << endl;
		cout << "You got 5 points out of 5." << endl;

	}
	else if (answer == "2" || answer == "3")
	{
		cout << "W R O N G  A N S W E R !!!" << endl;
		cout << "You got 0 points out of 5." << endl;

	}
		cout << endl;
		system("pause");
		system("cls");
	}
	else
		{
			system("cls");
			cout << "\t\t*************************************************************************************" << endl;
			cout << "\t\t****           P L E A S E  I N P U T  C O R R E C T  V A L U E !                ****" << endl;
			cout << "\t\t*************************************************************************************" << endl;
			cout << endl;
			quiz8();
		}
}
void quiz9() {
	cout << "                                                                                     ***********************************" << endl;
	cout << "                                                                                     *****      TOTAL SCORE:" << total_score << "     *****" << endl;
	cout << "                                                                                     ***********************************" << endl;
	hints();
	cout << "\t\t\t\t\t  Q U E S T I O N  No. 9" << endl;
	cout << "What is the result of the program below?" << endl;
	cout << " int x = 10; " << endl;
	cout << " int y = 70; " << endl;
	cout << " x = x + y; " << endl;
	cout << " y = x - y;  " << endl;
	cout << " x = x - y;  " << endl;
	cout << endl;
	cout << "[1] x=70, y=10" << endl;
	cout << "[2] x=10, y=70" << endl;
	cout << "[3] x=60, y=20" << endl;
	cout << "[4] x=20, y=60" << endl;
	string answer;
	cout << endl;
	cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
	cin >> answer;
	if (answer == "1" || answer == "2" || answer == "3" || answer == "4")
	{
		if (answer == "1") {
			total_score += 10;
			correct_answer += 1;
			cout << "C O R R E C T   A N S W E R !!!" << endl;
			cout << "You got 10 points out of 10." << endl;
			
		}
		else if (answer == "2" || answer == "3" || answer == "4")
		{
			cout << "W R O N G  A N S W E R !!!" << endl;
			cout << "You got 0 points out of 10." << endl;
			
		}
			cout << endl;
			system("pause");
			system("cls");
	}
	else if (answer == "A" || answer == "a")
	{
		hints_used++;
		cout << endl;
		cout << "Audience prediction is...  " << endl;
		cout << "[1] 30%" << endl;
		cout << "[2] 25%" << endl;
		cout << "[3] 20%" << endl;
		cout << "[4] 25%" << endl;
		cout << endl;
		cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
		cin >> answer;
		if (answer == "1") {
			total_score += 5;
			correct_answer += 1;
			cout << "C O R R E C T   A N S W E R !!!" << endl;
			cout << "You got 5 points out of 5." << endl;

		}
		else if (answer == "2" || answer == "3" || answer == "4")
		{
			cout << "W R O N G  A N S W E R !!!" << endl;
			cout << "You got 0 points out of 5." << endl;
		}
		cout << endl;
		system("pause");
		system("cls");
	}
	else if (answer == "B" || answer == "b")
	{
		hints_used++;
		system("cls");
		cout << "Now you have chance to choose two answers. If one of them will correct you will take 5 points." << endl;
		cout << "\t\t\t\t\tQ U E S T I O N  No. 9" << endl;
		cout << "What is the result of the program below?" << endl;
		cout << " int x = 10; " << endl;
		cout << " int y = 70; " << endl;
		cout << " x = x + y; " << endl;
		cout << " y = x - y;  " << endl;
		cout << " x = x - y;  " << endl;
		cout << endl;
		cout << "[1] x=70, y=10" << endl;
		cout << "[2] x=10, y=70" << endl;
		cout << "[3] x=60, y=20" << endl;
		cout << "[4] x=20, y=60" << endl;
		string answer1, answer2;
		cout << endl;
		cout << "\t\t\t\t\tENTER YOUR FIRST CHOICE: ";
		cin >> answer1;
		cout << "\t\t\t\t\tENTER YOUR SECOND CHOICE: ";
		cin >> answer2;
		if (answer1 == "1" || answer2 == "1")
		{
			total_score += 5;
			correct_answer += 1;
			cout << "C O R R E C T   A N S W E R !!!" << endl;
			cout << "You got 5 points out of 5." << endl;
		}
		else
		{
			cout << "W R O N G  A N S W E R !!!" << endl;
			cout << "You got 0 points out of 5." << endl;
		}
		cout << endl;
		system("pause");
		system("cls");
		
	}
	else if (answer == "C" || answer == "c")
	{
		hints_used++;
		system("cls");
		cout << "Now you have chance to answer incorrectly. You will take 5 points for this question." << endl;
		cout << "\t\t\t\t\tQ U E S T I O N  No. 9" << endl;
		cout << "What is the result of the program below?" << endl;
		cout << " int x = 10; " << endl;
		cout << " int y = 70; " << endl;
		cout << " x = x + y; " << endl;
		cout << " y = x - y;  " << endl;
		cout << " x = x - y;  " << endl;
		cout << endl;
		cout << "[1] x=70, y=10" << endl;
		cout << "[2] x=10, y=70" << endl;
		cout << "[3] x=60, y=20" << endl;
		cout << "[4] x=20, y=60" << endl;
		string answer;
		cout << endl;
		cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
		cin >> answer;
		total_score += 5;
		correct_answer += 1;
		if (answer == "1")
			cout << "C O R R E C T   A N S W E R !!!" << endl;
		cout << "You got 5 points out of 5." << endl;
		cout << endl;
		system("pause");
		system("cls");
		
	}
	else if (answer == "D" || answer == "d") {
	hints_used++;
	system("cls");
	cout << "\t T H I S   I S  A  N E W   Q U E S T I O N. Y O U  W I L L  G E T  5  P O I N T S. " << endl;
	cout << endl;
	cout << "When did INHA UNivercity in TAshkent established?." << endl;
	cout << "[1] 2014" << endl;
	cout << "[2] 1968" << endl;
	cout << "[3] 2015" << endl;
	string answer;
	cout << endl;
	cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
	cin >> answer;
	if (answer == "1") {
		total_score += 5;
		correct_answer += 1;
		cout << "C O R R E C T   A N S W E R !!!" << endl;
		cout << "You got 5 points out of 5." << endl;

	}
	else if (answer == "2" || answer == "3")
	{
		cout << "W R O N G  A N S W E R !!!" << endl;
		cout << "You got 0 points out of 5." << endl;

	}
		cout << endl;
		system("pause");
		system("cls");
	}
	else
		{
			system("cls");
			cout << "\t\t*************************************************************************************" << endl;
			cout << "\t\t****           P L E A S E  I N P U T  C O R R E C T  V A L U E !                ****" << endl;
			cout << "\t\t*************************************************************************************" << endl;
			cout << endl;
			quiz9();
		}
}
void quiz10() {
	cout << "                                                                                     ***********************************" << endl;
	cout << "                                                                                     *****      TOTAL SCORE:" << total_score << "     *****" << endl;
	cout << "                                                                                     ***********************************" << endl;
	hints();
	cout << "\t\t\t\t\t  Q U E S T I O N  No. 9" << endl;
	cout << "What is the result of the program below?" << endl;
	cout << " int x = 10; " << endl;
	cout << " int y = 70; " << endl;
	cout << " x = x + y; " << endl;
	cout << " y = x - y;  " << endl;
	cout << " x = x - y;  " << endl;
	cout << endl;
	cout << "[1] x=70, y=10" << endl;
	cout << "[2] x=10, y=70" << endl;
	cout << "[3] x=60, y=20" << endl;
	cout << "[4] x=20, y=60" << endl;
	string answer;
	cout << endl;
	cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
	cin >> answer;
	if (answer == "1" || answer == "2" || answer == "3" || answer == "4")
	{
		if (answer == "1") {
			total_score += 10;
			correct_answer += 1;
			cout << "C O R R E C T   A N S W E R !!!" << endl;
			cout << "You got 10 points out of 10." << endl;
			
		}
		else if (answer == "2" || answer == "3" || answer == "4")
		{
			cout << "W R O N G  A N S W E R !!!" << endl;
			cout << "You got 0 points out of 10." << endl;
			
		}
			cout << endl;
			system("pause");
			system("cls");
	}
	else if (answer == "A" || answer == "a")
	{
		hints_used++;
		cout << endl;
		cout << "Audience prediction is...  " << endl;
		cout << "[1] 30%" << endl;
		cout << "[2] 25%" << endl;
		cout << "[3] 20%" << endl;
		cout << "[4] 25%" << endl;
		cout << endl;
		cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
		cin >> answer;
		if (answer == "1") {
			total_score += 5;
			correct_answer += 1;
			cout << "C O R R E C T   A N S W E R !!!" << endl;
			cout << "You got 5 points out of 5." << endl;

		}
		else if (answer == "2" || answer == "3" || answer == "4")
		{
			cout << "W R O N G  A N S W E R !!!" << endl;
			cout << "You got 0 points out of 5." << endl;
		}
		cout << endl;
		system("pause");
		system("cls");
	}
	else if (answer == "B" || answer == "b")
	{
		hints_used++;
		system("cls");
		cout << "Now you have chance to choose two answers. If one of them will correct you will take 5 points." << endl;
		cout << "\t\t\t\t\tQ U E S T I O N  No. 9" << endl;
		cout << "What is the result of the program below?" << endl;
		cout << " int x = 10; " << endl;
		cout << " int y = 70; " << endl;
		cout << " x = x + y; " << endl;
		cout << " y = x - y;  " << endl;
		cout << " x = x - y;  " << endl;
		cout << endl;
		cout << "[1] x=70, y=10" << endl;
		cout << "[2] x=10, y=70" << endl;
		cout << "[3] x=60, y=20" << endl;
		cout << "[4] x=20, y=60" << endl;
		string answer1, answer2;
		cout << endl;
		cout << "\t\t\t\t\tENTER YOUR FIRST CHOICE: ";
		cin >> answer1;
		cout << "\t\t\t\t\tENTER YOUR SECOND CHOICE: ";
		cin >> answer2;
		if (answer1 == "1" || answer2 == "1")
		{
			total_score += 5;
			correct_answer += 1;
			cout << "C O R R E C T   A N S W E R !!!" << endl;
			cout << "You got 5 points out of 5." << endl;
		}
		else
		{
			cout << "W R O N G  A N S W E R !!!" << endl;
			cout << "You got 0 points out of 5." << endl;
		}
		cout << endl;
		system("pause");
		system("cls");
		
	}
	else if (answer == "C" || answer == "c")
	{
		hints_used++;
		system("cls");
		cout << "Now you have chance to answer incorrectly. You will take 5 points for this question." << endl;
		cout << "\t\t\t\t\tQ U E S T I O N  No. 9" << endl;
		cout << "What is the result of the program below?" << endl;
		cout << " int x = 10; " << endl;
		cout << " int y = 70; " << endl;
		cout << " x = x + y; " << endl;
		cout << " y = x - y;  " << endl;
		cout << " x = x - y;  " << endl;
		cout << endl;
		cout << "[1] x=70, y=10" << endl;
		cout << "[2] x=10, y=70" << endl;
		cout << "[3] x=60, y=20" << endl;
		cout << "[4] x=20, y=60" << endl;
		string answer;
		cout << endl;
		cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
		cin >> answer;
		total_score += 5;
		correct_answer += 1;
		if (answer == "1")
			cout << "C O R R E C T   A N S W E R !!!" << endl;
		cout << "You got 5 points out of 5." << endl;
		cout << endl;
		system("pause");
		system("cls");
		
	}
	else if (answer == "D" || answer == "d") {
	hints_used++;
	system("cls");
	cout << "\t T H I S   I S  A  N E W   Q U E S T I O N. Y O U  W I L L  G E T  5  P O I N T S. " << endl;
	cout << endl;
	cout << "When did INHA UNivercity in TAshkent established?." << endl;
	cout << "[1] 2014" << endl;
	cout << "[2] 1968" << endl;
	cout << "[3] 2015" << endl;
	string answer;
	cout << endl;
	cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
	cin >> answer;
	if (answer == "1") {
		total_score += 5;
		correct_answer += 1;
		cout << "C O R R E C T   A N S W E R !!!" << endl;
		cout << "You got 5 points out of 5." << endl;

	}
	else if (answer == "2" || answer == "3")
	{
		cout << "W R O N G  A N S W E R !!!" << endl;
		cout << "You got 0 points out of 5." << endl;

	}
		cout << endl;
		system("pause");
		system("cls");
	}
	else
		{
			system("cls");
			cout << "\t\t*************************************************************************************" << endl;
			cout << "\t\t****           P L E A S E  I N P U T  C O R R E C T  V A L U E !                ****" << endl;
			cout << "\t\t*************************************************************************************" << endl;
			cout << endl;
			quiz10();
		}
}



void menu(){
     // Display the main menu options
    system("color 0B");//Color XY,X = สีของพื้นหลัง,Y=สีของข้อความ
    system("cls");
	        cout<<"\n\n\n\t\t\t\t   __      __   ___  | |   ___    ___    _ __ ___     ___  "<<endl;
			cout<<"\t\t\t\t   \\ \\ /\\ / /  / _ \\ | |  / __|  / _ \\  | '_ ` _ \\   / _ \\ "<<endl;
			cout<<"\t\t\t\t    \\ V  V /  |  __/ | | | (__  | (_) | | | | | | | |  __/ "<<endl;
			cout<<"\t\t\t\t     \\_/\\_/    \\___| |_|  \\___|  \\___/  |_| |_| |_|  \\___| "<<endl;

	cout << endl;
    cout << "\t\t\t\t\t\tWelcome to the Quiz Game!\t\t\t\t\t\t\t\t\t\t\t\t" << endl;
    cout << "\t\t\t\t\t\t  1. Start Game\t\t\t\t\t\t\t\t\t\t\t\t" << endl;
    cout << "\t\t\t\t\t\t  2. How to Play\t\t\t\t\t\t\t\t\t\t\t\t" << endl;
    cout << "\t\t\t\t\t\t  3. Exit\t\t\t\t\t\t\t\t\t\t\t\t" << endl;

    // Prompt the user to select an option
    cout <<"\t\t\t\t\t\tEnter your choice: ";
    cin >> choice;

}

int start() {
    // Code to start the quiz game goes here
   if (cin.get() == '\n') {
		system("cls");//โปรแกรมล้างจอภาพใหม่ Clear Screen เหมือนกับการ run โปรแกรมใหม่ 
		cout << "\t\t\t\t\tI N F O R M A T I O N   T A B L E\n\n";
		cout << "What is your name? ";
		getline(cin, Name[0]);
		cout << "Which topic would you like to play?"<<endl;
		cout << "[1]. Doraemon" << endl;
		cout << "[2]. Demon slayer" << endl;
		cout << "[3]. Harry potter" << endl;
		do {
			cout << "Choose which topic you want to play: ";
			cin >> topic;
			cin.clear();
		} while (topic != "1"&&topic!="2"&&topic!="3");
		string Respond;
		cout << endl;
		cout << "Are you ready to take the Quiz " << Name[0] << " ? Yes = 'Yes'/No = 'Any key'. " << endl;
		cout << "Your choice: ";
		cin >> Respond;
		if (Respond == "yes" || Respond == "Yes")
		{
			cout << endl;
			cout << "OK, Good Like!!! " << endl;
			system("cls");
			return 1;
		}
		else
		{
			cout << "OK. Goodbye." << endl;
			system("exit");//เป็นการบังคับให้โปรแกรมหยุดทำงานทันที
			return 0;
		}
	}
	else
		cout << "I meant ONLY the ENTER key... Oh well.\n";
	return 0;
}    

void congrate() {
	system("cls");
	system("color 0A");
	       cout<<"\t\t                 iWs                                 ,W["<<endl;
           cout<<"\t\t                 W@@W.                              g@@["<<endl;
           cout<<"\t\t                i@@@@@s                           g@@@@W"<<endl;
           cout<<"\t\t                @@@@@@@W.                       ,W@@@@@@"<<endl;
           cout<<"\t\t               ]@@@@@@@@@W.   ,_______.       ,m@@@@@@@@i"<<endl;
           cout<<"\t\t              ,@@@@@@@@@@@@W@@@@@@@@@@@@@@mm_g@@@@@@@@@@["<<endl;
           cout<<"\t\t              d@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;
		   cout<<"\t\t             i@@@@@@@A*~~~~~VM@@@@@@@@@@Af~~~~V*@@@@@@@@@i"<<endl;
           cout<<"\t\t             @@@@@A~          'M@@@@@@A`         'V@@@@@@b"<<endl;
           cout<<"\t\t            d@@@*`              Y@@@@f              V@@@@@."<<endl;
           cout<<"\t\t           i@@A`                 M@@P                 V@@@b"<<endl;
           cout<<"\t\t          ,@@A                   '@@                   !@@@."<<endl;
           cout<<"\t\t          W@P                     @[                    '@@W"<<endl;
           cout<<"\t\t         d@@            ,         ]!                     ]@@b"<<endl;
		   cout<<"\t\t        g@@[          ,W@@s       ]       ,W@@s           @@@i"<<endl;
           cout<<"\t\t       i@@@[          W@@@@i      ]       W@@@@i          @@@@i"<<endl;
           cout<<"\t\t      i@@@@[          @@@@@[      ]       @@@@@[          @@@@@i"<<endl;
           cout<<"\t\t     g@@@@@[          @@@@@!      @[      @@@@@[          @@@@@@i"<<endl;
           cout<<"\t\t    d@@@@@@@          !@@@P      iAW      !@@@A          ]@@@@@@@i"<<endl;
           cout<<"\t\t   W@@@@@@@@b          '~~      ,Z Yi      '~~          ,@@@@@@@@@"<<endl;
           cout<<"\t\t   '*@@@@@@@@s                  Z`  Y.                 ,W@@@@@@@@A"<<endl;
           cout<<"\t\t     'M@@@*f**W.              ,Z     Vs               ,W*~~~M@@@f"<<endl;
           cout<<"\t\t       'M@    'Vs.          ,z~       'N_           ,Z~     d@P"<<endl;
           cout<<"\t\t      M@@@       ~-=__  __z/` ,gmW@@mm_ '+e_.   __=-`      ,@@@@"<<endl;
           cout<<"\t\t       'VMW                  g@@@@@@@@@W     ~~~          ,WAf"<<endl;
           cout<<"\t\t          ~N.                @@@@@@@@@@@!                ,Z`"<<endl;
           cout<<"\t\t            V.               !M@@@@@@@@f                gf-"<<endl;
		   cout<<"\t\t             'N.               '~***f~                ,Z`"<<endl;
           cout<<"\t\t               Vc.                                  _Zf"<<endl;
           cout<<"\t\t                ~e_                             ,gY~"<<endl;
           cout<<"\t\t                  'V=_          -@@D         ,gY~ '"<<endl;
           cout<<"\t\t                      -=__.           ,__z=~`"<<endl;
           cout<<"\t\t                           ~~~*==Y*f~~~    "<<endl;
           cout << "\t*************************************************************************************" << endl;
	       cout << "\t*****                                                                           *****" << endl;
	       cout << "\t*****                       C O N G R A T U L A T I O N S ! ! !                 *****" << endl;
	       cout << "\t*****                = = = = = = = = "<< Name[0]<<"= = = = = = = = =            *****" << endl;
	       cout << "\t*****                            = = = = = = = = = = =                          *****" << endl;
	       cout << "\t*****                                                                           *****" << endl;
	       cout << "\t*************************************************************************************" << endl;
	       cout << endl;
	       cout << "TOTAL SCORE: " << total_score << endl;
	       cout << "YOU HAVE ANSWERED FOR '" << correct_answer << "' QUESTIONS OUT OF 10." << endl;
	       cout << "YOU HAVE USED "<<hints_used<<" HINTS DURING THE GAME."<<endl;
	       system("pause");
}	


void howtoplay() {
	system("cls");
	system("color 0B");
	cout<< "\t\t\t\t\t\t H  O  W  T  O  P  L  A  Y"<<endl;
    cout<<"   ___________________________________________________________________________________________"<<endl;
          cout<<" / \\                             	                                                       \\."<<endl;
           cout<<"|   |                                                                                          |."<<endl;
           cout<<" \\_| 1.CHOOSE THE TOPIC QUESTIONS YOU ARE INTERESTED IN PLAYING.                              |."<<endl;
           cout<<"    |                                                                                          |."<<endl;
           cout<<"    | 2.YOU WILL EARN 10 POINTS WHEN YOU ANSWER THE CORRECT QUESTION.                          |."<<endl;
           cout<<"    |                                                                                          |."<<endl;
           cout<<"    | 3. ADDITIONALLY YOU WILL HAVE SOME HINTS WHICH YOU CAN USE FROM the 8TH QUESTION         |."<<endl;
           cout<<"    |    IF THE ANSWER IS CORRECT WHEN YOU USING HINTS YOU WILL ONLY  POINT.                   |."<<endl;
		   cout<<"    |                                                                                          |."<<endl;
           cout<<"    | 4. AFTER PLAYING, THE SYSTEM WILL SORT THE SCORE.                                        |."<<endl;
           cout<<"    |                            	                                                             |."<<endl;
           cout<<"    |   _______________________________________________________________________________________|."<<endl;
           cout<<"    |  /                                                                                       /."<<endl;
           cout<<"    \\_/______________________________________________________________________________________/."<<endl;
           cout << "\n\n";

            system("pause");

            menu();
}

void scores_table()
{
	system("cls");
	cout << "\t\tH I G H E S T   S C O R E S" << endl;
	cout << "*********************************************************************" << endl;
	cout << "***** 1 Tiger Inwzaa007 ***" << "              ***  " << "100" <<"  *****"<< endl;
	cout << "***** 2 Miyabi          ***" << "              ***  " << "80" << "   *****" << endl;
	cout << "***** 3 " << Name[0] << "     ***" << "              ***  " << total_score << "    *****" << endl;
	cout << "***** 4 " << Name[1] << "                ***" << "              ***  " << total_score << "   *****" << endl;
	cout << "***** 5 " << Name[2] << "                ***" << "              ***  " << total_score << "   *****" << endl;
	 
	cout << endl; 
	cout << "Do you want to start a QUIZ again? (Yes/No)" << endl;
	string play_again;
	cin >> play_again;
	if (play_again == "Yes" || play_again == "yes")
	{
		total_score = 0;
		start();
	}
	else
		cout << "OK, Goodbye! ";
}

int main() {

menu();
    // Call the appropriate function based on the user's choice
    switch (choice) {
        case 1:
            start();
			system("cls");
            quiz1();
            quiz2();
			quiz3();
			quiz4();
			quiz5();
			quiz6();
			quiz7();
			quiz8();
			quiz9();
			quiz10();
			congrate();
            scores_table();
            break;
        case 2:
            howtoplay();
			main();
            break;
        case 3:
			system("cls");
            cout << "Exiting the game..." << endl;
			Sleep(2000);
            return 0;
        default:
            cout << "Invalid choice. Please enter 1, 2, or 3." << endl;
			Sleep(2000);
			main();
            break;
    }

    
    return 0;
}