/*
	hierarchical inheritance
	------------------------

		big
		 |
	-----------------
	|		|
     purchase	      sell

     1. purchase
	1. entry
	2. view
	3. main menu
     2. sell
	1. entry
	2. view
	3. main menu
     3. exit
*/

#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>
class big
{
	public:
		char name[15],cname[15],code[15],date[15];

		void b_entry();
		void b_view();
};
class purchase : public big
{
	public:
		float price,total,dis,net;
		int qty;

		void p_entry();
		void p_view();
};
class sell : public big
{
	public:
		float price,total,dis,net;
		int qty;

		void s_entry();
		void s_view();
};
void big :: b_entry()
{
	cout<<"Enter name: ";
	cin>>name;
	cout<<"enter cname: ";
	cin>>cname;
	cout<<"Enter code: ";
	cin>>code;
	cout<<"enter date: ";
	cin>>date;
}
void big :: b_view()
{
	cout<<"name: "<<name<<endl;
	cout<<"cname: "<<cname<<endl;
	cout<<"code: "<<code<<endl;
	cout<<"date: "<<date<<endl;
}
void purchase :: p_entry()
{
	b_entry();
	cout<<"Enter price: ";
	cin>>price;
	cout<<"Enter qty: ";
	cin>>qty;
	total=price*qty;
	dis=total*0.10;
	net=total-dis;
}
void purchase :: p_view()
{
	b_view();
	cout<<"price: "<<price<<endl;
	cout<<"qty: "<<qty<<endl;
	cout<<"total: "<<total<<endl;
	cout<<"discount: "<<dis<<endl;
	cout<<"net: "<<net<<endl;
}
void sell :: s_entry()
{
	b_entry();
	cout<<"Enter price: ";
	cin>>price;
	cout<<"Enter qty: ";
	cin>>qty;
	total=price*qty;
	dis=total*0.05;
	net=total-dis;
}
void sell :: s_view()
{
	b_view();
	cout<<"price: "<<price<<endl;
	cout<<"qty: "<<qty<<endl;
	cout<<"total: "<<total<<endl;
	cout<<"discount: "<<dis<<endl;
	cout<<"net: "<<net<<endl;
}
void main()
{
	purchase p[10];
	sell s[10];
	int i;
	textcolor(11);
	textbackground(1);
	clrscr();
	gotoxy(30,12);
	cout<<"WELCOME TO BIG BAZAAR";
	gotoxy(1,13);
	for(int k=1;k<=80;k++)
	{
		delay(200);
		cout<<"Ü"; // alt +220
	}
	gotoxy(50,25);
	cout<<"Press any key to main menu...";
	getch();

	do
	{
		textcolor(12);
		textbackground(2);

		clrscr();
		cout<<"\n\t 1. purchase ";
		cout<<"\n\t 2. sell";
		cout<<"\n\t 3. exit";

		cout<<"\n\t Select Option: ";
		cin>>i;

		switch(i)
		{
			case 1:
				int a=0,b=0;
				do
				{
					textcolor(13);
					textbackground(3);

					clrscr();
					cout<<"\n *** purchase ***\n";
					cout<<"\n\t 1. entry";
					cout<<"\n\t 2. view";
					cout<<"\n\t 3. main menu";

					cout<<"\n\t Select Option: ";
					cin>>a;

					switch(a)
					{
						case 1:
							char c;
							do
							{
								textcolor(14);
								textbackground(4);

								clrscr();
								cout<<"\n *** entry ***\n";
								p[b].p_entry();
								cout<<"\n\t Do you want to continue?(y/n): ";
								cin>>c;
								b++;
							}
							while(c=='y');
							break;

						case 2:
							for(int j=0;j<b;j++)
							{
								textcolor(15);
								textbackground(5);

								clrscr();
								cout<<"\n *** view ***\n";
								p[j].p_view();
								getch();
							}
							break;

						case 3:
							cout<<"\n\t Press any key to main menu..";
							break;
					}
				}
				while(a!=3);
				break;

			case 2:
				int x=0,y=0;
				do
				{
					textcolor(16);
					textbackground(6);

					clrscr();
					cout<<"\n *** sell ***\n";
					cout<<"\n\t 1. entry";
					cout<<"\n\t 2. view";
					cout<<"\n\t 3. main menu";

					cout<<"\n\t Select Option: ";
					cin>>x;

					switch(x)
					{
						case 1:
							char c;
							do
							{
								textcolor(17);
								textbackground(7);

								clrscr();
								cout<<"\n *** entry ***\n";
								s[y].s_entry();
								cout<<"\n\t Do you want to continue?(y/n): ";
								cin>>c;
								y++;
							}
							while(c=='y');
							break;

						case 2:
							for(int j=0;j<y;j++)
							{

								clrscr();
								cout<<"\n *** view ***\n";
								s[j].s_view();
								getch();
							}
							break;

						case 3:
							cout<<"\n\t Press any key to main menu..";
							break;
					}
				}
				while(x!=3);
				break;

			case 3:
				exit(0);
		}
	}
	while(i<3);
getch();
}
