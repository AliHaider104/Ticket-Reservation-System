#include<iostream>
#include<conio.h>
#include<fstream>  
#include<iomanip>
#include<time.h>
using namespace std;

void Flightdetails()
{
	ifstream fin;
	fin.open("Details.txt");
	int number=0;
	char name[100];
	char location[100];
	char departure[100];
	char time1[100];
	char time2[100];
	int business=0;
	int economy=0;
	int total=0;
	cout<<"Flight Number"<<setw(15)<<"Flight Name"<<setw(15)<<"Location"<<setw(20)<<"Destination"<<setw(15)<<"Arrivaltime"<<setw(17)<<"Departuretime"<<setw(15)<<"Business"<<setw(15)<<"Economy"<<setw(15)<<"Toatal"<<endl;
	while(fin>>number>>name>>location>>departure>>time1>>time2>>business>>economy>>total)
	{
		cout<<"   "<<number<<setw(22)<<name<<setw(15)<<location<<setw(17)<<departure<<setw(15)<<time1<<setw(15)<<time2<<setw(18)<<business<<setw(17)<<economy<<setw(15)<<total<<endl;
	}
}
void seatingPlan(int array[10][5])
{
	int counter=1;
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<5;j++)
		{
			if(array[i][j]==0){
			cout<<counter<<"\t";
			}
			else
				cout<<"X\t";
			counter++;
		}
		cout<<endl;
	}
	cout<<endl;
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<5;j++)
		{
			if(array[i][j]==0)
			{
				cout<<"A\t";
			}
			else
				cout<<"R\t";

		}
		cout<<endl;
	}
}
void intialize(int array[10][5])
{
	int data=0;
	ifstream fin;
	fin.open("intialize.txt");
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<5;j++)		
		{
			fin>>data;
			array[i][j]=data;
		}
	}
}
void reservation(int array[10][5])
{
	ifstream fin;
	int flag=0;
	fin.open("Details.txt");
	char name1[100];
	int age=0;
	cout<<"Enter Your Name : ";
	cin.getline(name1,100);
	cin.getline(name1,100);
	cout<<"Enter Your age : ";
	cin>>age;
	int number=0;
	char name[100];
	char location[100];
	char departure[100];
	char time1[100];
	char time2[100];
	int business=0;
	int economy=0;
	int total=0;
	int seat=0,counter=1;
	cout<<"Enter seat Number : ";
	cin>>seat;
	while(fin>>number>>name>>location>>departure>>time1>>time2>>business>>economy>>total)
	{
		break;
	}
	fin.close();
	ofstream fout;
	fout.open("intialize.txt");
	
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<5;j++)
		{
			if(seat==counter)
			{
				if(array[i][j]==0){
				array[i][j]=1;
				flag=1;
				}
				else
					cout<<"Already Reserved\n";
			}
			counter++;
		}
	}
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<5;j++)
		{
			fout<<array[i][j]<<" ";
		}

	}
	fout.close();
	ofstream info;
	int bill=30000;
	if(age>60)
	{
		bill=bill-(bill/100)*25;
	}
	info.open("information.txt",ios::app);
	if(flag==1){
	info<<seat<<" "<<name1<<" "<<name<<" "<<age<<" "<<number<<" "<<location<<" "<<departure<<" "<<bill<<endl;
	}
	info.close();
	
}
void Reservation1(int array[10][5])
{
	ifstream fin;
	int flag=0;
	fin.open("Details.txt");
	char name1[100];
	int age=0;
	cout<<"Enter Your Name : ";
	cin.getline(name1,100);
	cin.getline(name1,100);
	cout<<"Enter Your age : ";
	cin>>age;
	int number=0;
	char name[100];
	char location[100];
	char departure[100];
	char time1[100];
	char time2[100];
	int business=0;
	int economy=0;
	int total=0;
	int seat=0,counter=1;
	cout<<"Enter seat Number : ";
	cin>>seat;
	while(fin>>number>>name>>location>>departure>>time1>>time2>>business>>economy>>total)
	{
		break;
	}
	fin.close();
	ofstream fout;
	fout.open("intialize1.txt");
	
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<5;j++)
		{
			if(seat==counter)
			{
				if(array[i][j]==0){
				array[i][j]=1;
				flag=1;
				}
				else
					cout<<"Already Reserved\n";
			}
			counter++;
		}
	}
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<5;j++)
		{
			fout<<array[i][j]<<" ";
		}

	}
	fout.close();
	ofstream fout1;
	int bill=30000;
	if(age>60)
	{
		bill=bill-(bill/100)*25;
	}
	fout1.open("info.txt",ios::app);
	if(flag==1){
	fout1<<seat<<" "<<name1<<" "<<name<<" "<<age<<" "<<number<<" "<<location<<" "<<departure<<" "<<bill<<endl;
	}
	fout1.close();
}
void reservation2(int array[10][5])
{
	ifstream fin;
	int flag=0;
	fin.open("Details.txt");
	char name1[100];
	int age=0;
	cout<<"Enter Your Name : ";
	cin.getline(name1,100);
	cin.getline(name1,100);
	cout<<"Enter Your age : ";
	cin>>age;
	int number=0;
	char name[100];
	char location[100];
	char departure[100];
	char time1[100];
	char time2[100];
	int business=0;
	int economy=0;
	int total=0;
	int seat=0,counter=1;
	cout<<"Enter seat Number : ";
	cin>>seat;
	while(fin>>number>>name>>location>>departure>>time1>>time2>>business>>economy>>total)
	{
		break;
	}
	fin.close();
	ofstream fout;
	fout.open("intialize2.txt");
	
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<5;j++)
		{
			if(seat==counter)
			{
				if(array[i][j]==0){
				array[i][j]=1;
				flag=1;
				}
				else
					cout<<"Already Reserved\n";
			}
			counter++;
		}
	}
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<5;j++)
		{
			fout<<array[i][j]<<" ";
		}

	}
	fout.close();
	ofstream fout2;
	int bill=30000;
	if(age>60)
	{
		bill=bill-(bill/100)*25;
	}
	fout2.open("abdulrehman.txt",ios::app);
	if(flag==1){
	fout2<<seat<<" "<<name1<<" "<<name<<" "<<age<<" "<<number<<" "<<location<<" "<<departure<<" "<<bill<<endl;
	}
	fout2.close();
	
}
void checkINFO()
{
	int seat1=0,age=0,flightNumber=0,bill=0;
	char name[100],flightname[100],from[100],location[100];
	int seat=0;
	int id_number=0;
	cout<<"enter the flight id for which you want to check info"<<endl;
	cin>>id_number;
	if(id_number==1)
	{
	cout<<"Enter seat number : ";
	cin>>seat;
	ifstream fin;
	fin.open("information.txt");
	while(fin>>seat1>>name>>flightname>>age>>flightNumber>>from>>location>>bill)
	{
		if(seat1==seat)
			cout<<"Name : "<<name<<" Age : "<<age<<" Flight Name : "<<flightname<<" Seat : "<<seat<<" From : "<<from<<" Location : "<<location<<" Bill :"<<bill<<endl;
	}
}
	else if(id_number==2)
	{
		cout<<"Enter seat number : ";
	cin>>seat;
	ifstream fin;
	fin.open("info.txt");
	while(fin>>seat1>>name>>flightname>>age>>flightNumber>>from>>location>>bill)
	{
		if(seat1==seat)
			cout<<"Name : "<<name<<" Age : "<<age<<" Flight Name : "<<flightname<<" Seat : "<<seat<<" From : "<<from<<" Location : "<<location<<" Bill :"<<bill<<endl;
	}
	}
	else if(id_number==3)
	{
		cout<<"Enter seat number : ";
	cin>>seat;
	ifstream fin1;
	fin1.open("inform.txt");
	while(fin1>>seat1>>name>>flightname>>age>>flightNumber>>from>>location>>bill)
	{
		if(seat1==seat)
			cout<<"Name : "<<name<<" Age : "<<age<<" Flight Name : "<<flightname<<" Seat : "<<seat<<" From : "<<from<<" Location : "<<location<<" Bill :"<<bill<<endl;
	}
	}
}
void main_menu()
{
 cout<<"1:  "<<"Flight details"<<endl<<"2:  "<<"To Check Available Seats"<<endl<<"3:  "<<"To Reserve Seats"<<endl<<"4:  "<<"To Check Passenger's Record"<<endl<<"5:  "<<"To cancel Seats"<<endl<<"6.  "<<"To Exit"<<endl;
}
void cancel(int array[10][5])
{
	int number=0,counter=1,bill=0;
	cout<<"Enter seat Number : ";
	cin>>number;
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<5;j++)
		{
			if(counter==number)
			{
				array[i][j]=0;
			}
			counter++;
		}
	}
	ofstream fout;
	fout.open("intialize.txt");
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<5;j++)
		{
			fout<<array[i][j]<<" ";
		}
	}
	fout.close();
	ifstream fin;
	ofstream writer;
	writer.open("information1.txt");
	fin.open("information.txt");
	int seat=0,age=0,flightnumber=0;
	char name[100],flight[100],from[100],whereTo[100];
	while(fin>>seat>>name>>flight>>age>>flightnumber>>from>>whereTo>>bill)
	{
		if(number!=seat)
			writer<<seat<<" "<<name<<" "<<flight<<" "<<age<<" "<<flightnumber<<" "<<from<<" "<<whereTo<<" "<<bill<<endl;
	}
	writer.close();
	fin.close();
	ifstream reader;
	reader.open("information1.txt");
	ofstream remover;
	remover.open("information.txt");
	while(reader>>seat>>name>>flight>>age>>flightnumber>>from>>whereTo>>bill)
	{
			remover<<seat<<" "<<name<<" "<<flight<<" "<<age<<" "<<flightnumber<<" "<<from<<" "<<whereTo<<" "<<bill<<endl;
	}
}
void cancel1(int array[10][5])
{
	int number=0,counter=1,bill=0;
	cout<<"Enter seat Number : ";
	cin>>number;
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<5;j++)
		{
			if(counter==number)
			{
				array[i][j]=0;
			}
			counter++;
		}
	}
	ofstream fout;
	fout.open("intialize1.txt");
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<5;j++)
		{
			fout<<array[i][j]<<" ";
		}
	}
	fout.close();
	ifstream fin;
	ofstream writer;
	writer.open("info1.txt");
	fin.open("info.txt");
	int seat=0,age=0,flightnumber=0;
	char name[100],flight[100],from[100],whereTo[100];
	while(fin>>seat>>name>>flight>>age>>flightnumber>>from>>whereTo>>bill)
	{
		if(number!=seat)
			writer<<seat<<" "<<name<<" "<<flight<<" "<<age<<" "<<flightnumber<<" "<<from<<" "<<whereTo<<" "<<bill<<endl;
	}
	writer.close();
	fin.close();
	ifstream reader;
	reader.open("info1.txt");
	ofstream remover;
	remover.open("info.txt");
	while(reader>>seat>>name>>flight>>age>>flightnumber>>from>>whereTo>>bill)
	{
			remover<<seat<<" "<<name<<" "<<flight<<" "<<age<<" "<<flightnumber<<" "<<from<<" "<<whereTo<<" "<<bill<<endl;
	}
}
void cancel2(int array[10][5])
{
	int number=0,counter=1,bill=0;
	cout<<"Enter seat Number : ";
	cin>>number;
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<5;j++)
		{
			if(counter==number)
			{
				array[i][j]=0;
			}
			counter++;
		}
	}
	ofstream fout;
	fout.open("intialize2.txt");
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<5;j++)
		{
			fout<<array[i][j]<<" ";
		}
	}
	fout.close();
	ifstream fin;
	ofstream writer;
	writer.open("inform1.txt");
	fin.open("inform.txt");
	int seat=0,age=0,flightnumber=0;
	char name[100],flight[100],from[100],whereTo[100];
	while(fin>>seat>>name>>flight>>age>>flightnumber>>from>>whereTo>>bill)
	{
		if(number!=seat)
			writer<<seat<<" "<<name<<" "<<flight<<" "<<age<<" "<<flightnumber<<" "<<from<<" "<<whereTo<<" "<<bill<<endl;
	}
	writer.close();
	fin.close();
	ifstream reader;
	reader.open("inform1.txt");
	ofstream remover;
	remover.open("inform.txt");
	while(reader>>seat>>name>>flight>>age>>flightnumber>>from>>whereTo>>bill)
	{
			remover<<seat<<" "<<name<<" "<<flight<<" "<<age<<" "<<flightnumber<<" "<<from<<" "<<whereTo<<" "<<bill<<endl;
	}
}
int main()
{
	int choice=0,array[10][5];
	int array1[10][5]={0};
	int array2[10][5]={0};
	char main=0;
	while(choice!=6){
	system("cls");
	main_menu();
	cout<<"Enter Your Choice : ";
	cin>>choice;
	int aray[10][5];
    intialize(array);
	int response=0;
	if(choice==1)
	{
		system("cls");
		Flightdetails();
		
		cout<<"enter the flight  you want to choose"<<endl;
		cin>>response;
		if (response==1)
		cout<<"ok you want to go from pakistan to london";
		else if(response==2)
			cout<<"ok you want to go from pak to USA";
		else if(response=3)
			cout<<" ok you want to go from pak to DUBAI";
		else
			cout<<"you have entered wrong choice "<<endl;
		cout<<"Press Any Key To Return to main menu";
		cin>>main;
	}
	if(choice==2)
	{
		system("cls");
		cout<<"enter the flight number"<<endl;
		cin>>response;
		if(response==1)
		{
			cout<<"you want to go from pak to london"<<endl<<"check the available seats "<<endl;
			seatingPlan(array);
		}
		else if(response==2)
        {
			cout<<"you want to go from pak to USA"<<endl<<"check the available seats "<<endl;
			seatingPlan(array1);
		}
		else if(response==3)
		{
			cout<<"you want to go from pak to DUBAI"<<endl<<"check the available seats "<<endl;
			seatingPlan(array2);
		}
		cout<<"Press Any Key To Return ";
		cin>>main;
	}
	if(choice==3)
	{
		system("cls");
		int response2=0;
		cout<<"enter the flight number in which you want to reserve seats";
		cin>>response2;
		if (response2==1)
		{
		reservation(array);
		seatingPlan(array);
		}
		else if(response2==2)
		{
			Reservation1(array1);
		    seatingPlan(array1);
		}
		else if(response2==3)
		{
			reservation2(array2);
		    seatingPlan(array2);
		}
		cout<<"Press Any Key To Return ";
		cin>>main;
	}
	if(choice==4)
	{
		system("cls");
		checkINFO();
		cout<<"Press Any Key To Return ";
		cin>>main;
	}
	if(choice==5)
	{
		system("cls");
		int option=0;
		cout<<"enter the flight id for whch you want to cancel seat "<<endl;
		cin>>option;
		if(option==1)
		{
		cancel(array);
		cout<<"Press Any Key To Return ";
		cin>>main;
	    }
		else if(option==2)
		{
			cancel1(array);
		cout<<"Press Any Key To Return ";
		cin>>main;
		}
		else if(option==3)
		{
			cancel2(array);
		cout<<"Press Any Key To Return ";
		cin>>main;
		}
	}
	if(choice==6){
		cout<<"Close";
		break;
	}
	}

    getch();
}