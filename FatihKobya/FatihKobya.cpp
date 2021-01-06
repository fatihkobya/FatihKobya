// FatihKobya.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include <cstring>
#include <string>
using namespace std;
void newemployee();
void mainmenu();
void login();
void emailpassword();

string name[100],surname[100],email[100],password[100];
int i=0;
char b='0';
int mail=0;
void mainmenu()
{
int a;
do {
	cout<<"*****Welcome to PasswordMaster***** \n";
	cout<<"Please select: \n";
	cout<<"1: to enter new employees\n";
	cout<<"2: to log in and change password\n";
	cout<<"3: to exit the program\n";
	cout<<"4: to show email and password";
	cin>>a;
     }while(a<1 || a>4);
	
	switch(a)
	{
	case 1:  newemployee();
		break;
	case 2: login();
		break;
	case 3: break;
	case 4: emailpassword();
			break;
	default : break;
	}
}
void newemployee()
{    
 string a;  int t; int z=0;
     if (i == 100)
    {
        cout<<"You reached the limited number to enter new employee(up to 100)\n";
		main: cout<< "To go  main menu press 0(zero) button";
		cin>>t;
        if (t != 0)
            goto main;
        else
			mainmenu();

    }


    else
    {
cout<<"Enter your name :";
getchar();
getline(cin,name[i],'\n');
cout<<"Enter your surname :";
getline(cin,surname[i],'\n');
a=name[i].substr(0,1);
email[i]=a+surname[i]+"@xyz.com";
for(int y=0;y<i;y++)
{ 
if(email[i] == email[y])
{
b++;
email[i]= a + surname[i]+b+"@xyz.com";
}}
b='0';
cout<<"e-mail is :"<<email[i];
z=email[i].find("@");
password[i]=email[i].erase(z,email[i].length());
cout<<endl; cout<<endl;
void login();
i++;
mainmenu();
cout<<endl;
	 }}


void login()
{   
	int b=0;  int count=0;  string newpassword,againpassword; string emaill[100];
cout<<"Please enter your email :";
 
getchar();
getline(cin,email[mail],'\n');
cout<<endl;
for(int q=0;q<i;q++)
{ 
if(email[mail]==email[q])
{
cout << "\nIf this is your first time here, your initial password is set to your first name's initial combined with your surname.For example, initial password for a \"John Doe\" would be \"jdoe\".You can change this password to anything.It can be up to a max of 8 alphanumerical characters and a minimum of 3 alphanumerical characters.\n";

cout<<"your current password is "<<password[q]<<endl;

}
else 
{
cout<<"\nThe entered email is not in the system.Please first enter your name and surname by using OPTION 1\n\n\n ";
mainmenu();
}
cout<<"Enter your current password\n"; getline(cin,password[i],'\n');
if(password[i]==password[q])
{ goto  pass; }
else
{   do { 
	cout << "Please enter your current password again because it did not match with it:"; 
        getline(cin,password[i],'\n');
		count++;
		if(count==3)
		{
		 cout << "\n You entered three times invalid password.You were directed to main menu:\n";
		 mainmenu();
            cout << endl;
		}
}while(password[i]!=password[q]); }
        
pass: cout<<"Enter a new password"; getline(cin,newpassword,'\n'); 
  if (newpassword.length()<3 || newpassword.length()>8)
        {
            do
            {
                cout << "TRY AGAIN,PLEASE: Enter your new password because your password is not valid.It should contain at least 3 or at most 8 alalphanumerical characters.:"; getline(cin,newpassword,'\n');
                cout << endl;
            } while (newpassword.length()<3 || newpassword.length()>8);

        }
cout<<"Re-enter the new password for confirmation"; getline(cin,againpassword,'\n'); 
if (againpassword.length()<3 || againpassword.length()>8)
        {
            do
            {
                cout << "TRY AGAIN,PLEASE: Enter your new password because your password is not valid.It should contain at least 3 or at most 8 alalphanumerical characters.:"; getline(cin,againpassword,'\n');
                cout << endl;
            } while (againpassword.length()<3 || againpassword.length()>8);

        }
if(newpassword==againpassword)
{
cout << "YOUR PASSWORD was created successfully\n";
		password[q] = againpassword;
		password[q]=email[q].erase(b,email[q].length())+againpassword;
		password[q] = againpassword ;
		cout<<"son email ve þifre:"<<password[q]<<endl;
		mainmenu();
}
mainmenu();
}}
void emailpassword()

{
    string emailandpassword;



    cout << "Enter email to show password:";
    getchar();
    getline(cin, emailandpassword, '\n');
    //cout << takeemailforshowpassword.substr(0, takeemailforshowpassword.find('@')) << endl;

    for (int e=0; e<100; e++)
    {

        if (emailandpassword.substr(0, emailandpassword.find('@')) == email[e].substr(0, email[e].find('@')))
        {
			cout << "\n\n--YOUR EMAIL:" << emailandpassword << endl << "--YOUR PASSWORD:" << password[e];
			cout<<endl;
        }
        else
        {
            cout << "\n register your mail with option 1 or You didnt enter valid email with in system\n\n" << endl; 
        }
        break;
    }


	mainmenu();


}

int _tmain(int argc, _TCHAR* argv[])
{    mainmenu();
	return 0;
}

