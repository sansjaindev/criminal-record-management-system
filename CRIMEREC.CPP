#include<iostream>
#include<fstream>
#include<direct.h>
#include<string.h>
#include<conio.h>
#include<cstdio>
#include<process.h>
#include<Windows.h>

using namespace std;

void clrscr() {
  #ifdef WINDOWS
  system("cls");
  #endif
  #ifdef LINUX
  system("clear");
  #endif
}

class criminal
{
	char name[60], place[50], crime[50], vic[60], pun[100], gen[10], sc[20], ec[20];
	int year, sno, age;
	float height, weight;

public:
	void in()
	{
		cout<<"\nS.No.\n";
		cin>>sno;
		cout<<"\nEnter the name of the criminal.\n";
		cin.getline(name, sizeof(name));
		cout<<"\nEnter Gender.(Male/Female/Other)\n";
		cin>>gen;
		cout<<"\nHeight in cm.\n";
		cin>>height;
		cout<<"\nWeight in kg.\n";
		cin>>weight;
		cout<<"\nSkin colour.\n";
		cin.getline(sc, sizeof(sc));
		cout<<"\nEye colour.\n";
		cin.getline(ec, sizeof(ec));
		cout<<"\nEnter the age of the culprit.\n";
		cin>>age;
		if(strcmpi(gen, "male")==0)
		cout<<"\nWhat did he do?\n";
		else if(strcmpi(gen, "Female")==0)
		cout<<"\nWhat did she do?\n";
		else
		cout<<"\nWhat was done?\n";
		cin.getline(crime, sizeof(crime));
		cout<<"\nEnter the name of the victim.\n";
		cin.getline(vic, sizeof(vic));
		cout<<"\nWhere did it happen?\n";
		cin.getline(place, sizeof(place));
		cout<<"\nEnter the year of act.\n";
		cin>>year;
		cout<<"\nEnter the punishment.\n";
		cin.getline(pun, sizeof(pun));
	}

	void out()
	{
		cout<<"\nS. No. : "<<sno;
		cout<<"\nName : "<<name;
		cout<<"\nGender : "<<gen;
		cout<<"\nHeight : "<<height<<" cm";
		cout<<"\nWeight : "<<weight<<" kg";
		cout<<"\nSkin Colour : "<<sc;
		cout<<"\nEye Colour : "<<ec;
		cout<<"\nAge : "<<age<<" Years";
		cout<<"\nCrime : "<<crime;
		cout<<"\nVictim : "<<vic;
		cout<<"\nPlace of Act : "<<place;
		cout<<"\nYear of Act : "<<year;
		cout<<"\nPunishment : "<<pun<<endl;
	}

	int rets()
	{
		return sno;
	}

	char n[60];
	void retnm()
	{
		strcpy(n, name);
	}

	char g[10];
	char retg()
	{
		strcpy(g, gen);
	}

	float reth()
	{
		return height;
	}

	float retw()
	{
		return weight;
	}

	char skc[20];
	void retskin()
	{
		strcpy(skc, sc);
	}

	char eyc[20];
	void reteye()
	{
		strcpy(eyc, ec);
	}

	int retage()
	{
		return age;
	}

	char cr[50];
	void retcrime()
	{
		strcpy(cr, crime);
	}

	char v[60];
	void retvic()
	{
		strcpy(v, vic);
	}

	char pl[50];
	void retplace()
	{
		strcpy(pl, place);
	}

	int retyoa()
	{
		return year;
	}

	char p[100];
	void retpun()
	{
		strcpy(p, pun);
	}

	void mods()
	{
		int s1;
		s1=sno;
		cout<<"\nEnter new S.No.\n";
		cin>>sno;
		cout<<"\nOld S.No. : "<<s1<<"\nNew S.No. : "<<sno;
	}

	void modn()
	{
		char n1[60];
		strcpy(n1, name);
		cout<<"\nEnter new name.\n";
		cin.getline(name, sizeof(name));
		cout<<"\nOld Name : "<<n1<<"\nNew Name : "<<name;
	}

	void modg()
	{
		char g1[10];
		strcpy(g1, gen);
		cout<<"\nEnter Gender(Male/Female/Other)\n";
		cin.getline(gen, sizeof(gen));
		cout<<"\nOld Gender : "<<g1<<"\nNew Gender : "<<gen;
	}
	void modh()
	{
		float h1;
		h1=height;
		cout<<"\nEnter new height in cm.\n";
		cin>>height;
		cout<<"\nOld Height : "<<h1<<"\nNew Height : "<<height;
	}

	void modw()
	{
		float w1;
		w1=weight;
		cout<<"\nEnter new weight in kg.\n";
		cin>>weight;
		cout<<"\nOld Weight : "<<w1<<"\nNew Weight : "<<weight;
	}

	void modsk()
	{
		char skc[20];
		strcpy(skc, sc);
		cout<<"\nEnter the skin colour.\n";
		cin.getline(sc, sizeof(sc));
		cout<<"\nOld Skin Colour : "<<skc<<"\nNew Skin Colour : "<<sc;
	}

	void mode()
	{
		char eyc[20];
		strcpy(eyc, ec);
		cout<<"\nEnter the eye colour.\n";
		cin.getline(ec, sizeof(ec));
		cout<<"\nOld Eye Colour : "<<eyc<<"\nNew Skin Colour : "<<ec;
	}

	void moda()
	{
		int age1;
		age1=age;
		cout<<"\nWhat is the age of the culprit.\n";
		cin>>age;
		cout<<"\nOld Age : "<<age1<<"\nNew Age : "<<age;
	}

	void modc()
	{
		char cr[50];
		strcpy(cr, crime);
		if(strcmpi(gen, "male")==0)
		cout<<"\nWhat did he do?\n";
		else if(strcmpi(gen, "female")==0)
		cout<<"\nWhat did she do?\n";
		else
		cout<<"\nWhat was done?\n";
		cin.getline(crime, sizeof(crime));
		cout<<"\nOld crime : "<<cr<<"\nNew Crime : "<<crime;
	}

	void modv()
	{
		char victim[60];
		strcpy(victim, vic);
		cout<<"\nEnter the name of the new victim.\n";
		cin.getline(vic, sizeof(vic));
		cout<<"\nOld Name of the Victim : "<<vic<<"\nNew Name of the Victim : "<<victim;
	}

	void modp()
	{
		char pl[50];
		strcpy(pl, place);
		cout<<"\nWhere did it happen?\n";
		cin.getline(place, sizeof(place));
		cout<<"\nOld Place : "<<pl<<"\nNew Place : "<<place;
	}

	void mody()
	{
		int y;
		y=year;
		cout<<"\nEnter new Year of Act.\n";
		cin>>year;
		cout<<"\nOld Data : "<<y<<"\nNew Data : "<<year;
	}

	void modpun()
	{
		char p[100];
		strcpy(p, pun);
		cout<<"\nWhat was the punishment?\n";
		cin.getline(pun, sizeof(pun));
		cout<<"\nOld Punishment : "<<p<<"\nNew Punishment : "<<pun;
	}

	void mod()
	{
		modif:
		char ch[5];
		int m;
		cout<<"\nEnter your choice.\n\nWhat do you want to modify?\n";
		cout<<"1.  S.No.\n2.  Name\n3.  Gender\n4.  Height\n5.  Weight\n6.  Skin Colour\n7.  Eye Colour\n8.  Age\n9.  Crime\n10. Victim\n11. Place of Crime\n12. Year of Act\n13. Punishment\n14. Back\n";
		modi:
		cin>>m;
		switch(m)
		{
			case 1 : mods();
			break;

			case 2 : modn();
			break;

			case 3 : modg();
			break;

			case 4 : modh();
			break;

			case 5 : modw();
			break;

			case 6 : modsk();
			break;

			case 7 : mode();
			break;

			case 8 : moda();
			break;

			case 9 : modc();
			break;

			case 10 : modv();
			break;

			case 11 : modp();
			break;

			case 12 : mody();
			break;

			case 13 : modpun();
			break;

			case 14 : break;

			default :
			{
				cout<<"Enter a valid choice.\n";
				goto modi;
				break;
			}
		}
	}
};

void create()
{
	clrscr();
	fstream f("CRMS", ios::out | ios::binary);
	criminal c;
	c.in();
	f.write((char*)&c, sizeof(c));
	f.close();
}

void append()
{
	add:
	clrscr();
	fstream f("CRMS", ios::app | ios::binary);
	criminal c;
	char ch[5];
	c.in();
	f.write((char*)&c, sizeof(c));
	f.close();
	cout<<"\nDo you want to continue adding data? (Yes/No)\n";
	cin>>ch;
	if(strcmpi("Yes", ch)==0)
	goto add;
}

void dispall()
{
	fstream f("CRMS", ios::in | ios::binary);
	criminal c;
	while(f.read((char*)&c, sizeof(c)))
	{
		clrscr();
		c.out();
		getch();
	}
	f.close();
	cout<<"\nNo more records.\nPress any key to contine.";
	getch();
}

void searchs()
{
	fstream f("CRMS", ios::in | ios::binary);
	criminal c;
	int t=0;
	int s;
	char name[50];
	cout<<"\nEnter the S.No. to display the convict record.\n";
	cin>>s;
	while(f.read((char*)&c, sizeof(c)))
	{
		if(s==c.rets())
		{
			clrscr();
			c.out();
			t=1;
			getch();
			break;
		}
	}
	if(t!=1)
	cout<<"\nNo Data Found!\n\n";
	f.close();
}

void searchnm()
{
	fstream f("CRMS", ios::in | ios::binary);
	int t=1;
	criminal c;
	char name[60];
	cout<<"\nEnter the name to search for the convict.\n";
	cin.getline(name, sizeof(name));
	while(f.read((char*)&c, sizeof(c)))
	{
		c.retnm();
		if(strcmpi(c.n, name)==0)
		{
			clrscr();
			c.out();
			t=0;
			getch();
		}
	}
	if(t!=0)
	cout<<"\nNo data Found!\n\n";
	f.close();
}

void searchg()
{
	fstream f("CRMS", ios::in | ios::binary);
	criminal c;
	int t=0;
	char g[10];
	cout<<"\nEnter the gender to search for the convict.\n";
	cin.getline(g, sizeof(g));
	while(f.read((char*)&c, sizeof(c)))
	{
		c.retg();
		if(strcmpi(g, c.g)==0)
		{
			clrscr();
			c.out();
			t=1;
			getch();
		}
	}
	if(t!=1)
	cout<<"\nNo Data Found!\n\n";
	f.close();
}

void searchh()
{
	fstream f("CRMS", ios::in | ios::binary);
	criminal c;
	int t=0;
	float h;
	cout<<"\nEnter the height (in cm) of the convict.\n";
	cin>>h;
	while(f.read((char*)&c, sizeof(c)))
	{
		if(c.reth()==h)
		{
			clrscr();
			c.out();
			t=1;
			getch();
		}
	}
	if(t!=1)
	cout<<"\nNo Data Found!\n\n";
	f.close();
}

void searchw()
{
	fstream f("CRMS", ios::in | ios::binary);
	criminal c;
	int t=0;
	float w;
	cout<<"\nEnter the weight (in kg) of the convict.\n";
	cin>>w;
	while(f.read((char*)&c, sizeof(c)))
	{
		if(c.retw()==w)
		{
			clrscr();
			c.out();
			t=1;
			getch();
		}
	}
	if(t!=1)
	cout<<"\nNo Data Found!\n\n";
	f.close();
}

void searchskin()
{
	fstream f("CRMS", ios::in | ios::binary);
	criminal c;
	int t=0;
	char skin[20];
	cout<<"\nEnter the skin colour of the convict to search for the convict.\n";
	cin.getline(skin, sizeof(skin));
	while(f.read((char*)&c, sizeof(c)))
	{
		c.retskin();
		if(strcmpi(skin, c.skc)==0)
		{
			clrscr();
			c.out();
			t=1;
			getch();
		}
	}
	if(t!=1)
	cout<<"\nNo Data Found!\n\n";
	f.close();
}

void searcheye()
{
	fstream f("CRMS", ios::in | ios::binary);
	criminal c;
	int t=0;
	char eye[20];
	cout<<"\nEnter the eye colour of the convict to search for the convict.\n";
	cin.getline(eye, sizeof(eye));
	while(f.read((char*)&c, sizeof(c)))
	{
		c.reteye();
		if(strcmpi(eye, c.eyc)==0)
		{
			clrscr();
			c.out();
			t=1;
			getch();
		}
	}
	if(t!=1)
	cout<<"\nNo Data Found!\n\n";
	f.close();
}

void searchage()
{
	fstream f("CRMS", ios::in | ios::binary);
	criminal c;
	int t=0;
	int age;
	cout<<"\nEnter the age of the convict to search for the convict.\n";
	cin>>age;
	while(f.read((char*)&c, sizeof(c)))
	{
		if(c.retage()==age)
		{
			clrscr();
			c.out();
			t=1;
			getch();
		}
	}
	if(t!=1)
	cout<<"\nNo Data Found!\n\n";
	f.close();
}

void searchcrime()
{
	fstream f("CRMS", ios::in | ios::binary);
	criminal c;
	int t=0;
	char crime[50];
	cout<<"\nEnter the crime to search for the convict.\n";
	cin.getline(crime, sizeof(crime));
	while(f.read((char*)&c, sizeof(c)))
	{
		c.retcrime();
		if(strcmpi(crime, c.cr)==0)
		{
			clrscr();
			c.out();
			t=1;
			getch();
		}
	}
	if(t!=1)
	cout<<"\nNo Data Found!\n\n";
	f.close();
}

void searchvic()
{
	fstream f("CRMS", ios::in | ios::binary);
	criminal c;
	int t=0;
	char vict[60];
	cout<<"\nEnter the name of the victim for which you want to search.\n";
	cin.getline(vict, sizeof(vict));
	while(f.read((char*)&c, sizeof(c)))
	{
		c.retvic();
		if(strcmpi(vict, c.v)==0)
		{
			clrscr();
			c.out();
			t=1;
			getch();
		}
	}
	if(t!=1)
	cout<<"\nNo Data Found!\n\n";
	f.close();
}

void searchpl()
{
	fstream f("CRMS", ios::in | ios::binary);
	criminal c;
	int t=0;
	char place[50];
	cout<<"\nEnter the place where the criminal committed the crime.\n";
	cin.getline(place, sizeof(place));
	while(f.read((char*)&c, sizeof(c)))
	{
		c.retplace();
		if(strcmpi(place, c.pl)==0)
		{
			clrscr();
			c.out();
			t=1;
			getch();
		}
	}
	if(t!=1)
	cout<<"\nNo Data Found!\n\n";
	f.close();
}

void searchyoa()
{
	fstream f("CRMS", ios::in | ios::binary);
	criminal c;
	int t=0;
	int yoa;
	cout<<"\nEnter year of act to search for the convict.\n";
	cin>>yoa;
	while(f.read((char*)&c, sizeof(c)))
	{
		if(yoa==c.retyoa())
		{
			clrscr();
			c.out();
			t=1;
			getch();
		}
	}
	if(t!=1)
	cout<<"\nNo Data Found!\n\n";
	f.close();
}

void searchpun()
{
	fstream f("CRMS", ios::in | ios::binary);
	criminal c;
	int t=0;
	char pun[100];
	cout<<"\nEnter the punishment to search for the convict.\n";
	cin.getline(pun, sizeof(pun));
	while(f.read((char*)&c, sizeof(c)))
	{
		c.retpun();
		if(strcmpi(pun, c.p)==0)
		{
			clrscr();
			c.out();
			t=1;
			getch();
		}
	}
	if(t!=1)
	cout<<"\nNo Data Found!\n\n";
	f.close();
}

void search()
{
	se:
	clrscr();
	cout<<"\nEnter your choice.\n\nSearch by : \n";
	cout<<"1.  S.No.\n2.  Name\n3.  Gender\n4.  Height\n5.  Weight\n6.  Skin Colour\n7.  Eye Colour\n8.  Age\n9.  Crime\n10. Name of the Victim\n11. Place of Crime\n12. Year of Act\n13. Punishment\n14. Back\n";
	int s;
	vc:
	cin>>s;
	switch(s)
	{
		case 1 : searchs();
		break;

		case 2 : searchnm();
		break;

		case 3 : searchg();
		break;

		case 4 : searchh();
		break;

		case 5 : searchw();
		break;

		case 6 : searchskin();
		break;

		case 7 : searcheye();
		break;

		case 8 : searchage();
		break;

		case 9 : searchcrime();
		break;

		case 10 : searchvic();
		break;

		case 11 : searchpl();
		break;

		case 12 : searchyoa();
		break;

		case 13 : searchpun();
		break;

		case 14 : break;

		default :
		{
			cout<<"\nEnter a valid choice.\n";
			goto vc;
		}
	}
	char ch[5];
	cout<<"\nDo you want to continue searching?\n";
	cin.getline(ch, sizeof(ch));
	if(strcmpi("Yes", ch)==0)
	goto se;
}

void modify()
{
	cout<<"Enter system password to continue : ";
	char pass[20];
	pw:
	cin.getline(pass, sizeof(pass));
	if(strcmp("crime@delhi", pass)==0)
	{
		modif:
		clrscr();
		fstream f("CRMS", ios::in | ios::binary | ios::out);
		criminal c;
		char ch[5];
		int s, flag=0;
		cout<<"\nEnter the S.No. whose data you want to edit.\n";
		cin>>s;
		while(f.read((char*)&c,sizeof(c)))
		{
			if(c.rets()!=s)
			{
				++flag;
			}
			else if(c.rets()==s)
			{
				c.mod();
				cout<<"\n\nDo you want to save changes? (Yes/No)\n";
				cin.getline(ch, sizeof(ch));
				if(strcmpi("No", ch)==0)
				{
					cout<<"\nNo changes made.\n";
					flag=0;
					break;
				}
				else if(strcmpi("Yes", ch)==0)
				{
					cout<<"\nPlease wait...\n\n";
					int pos=(-1)*sizeof(c);
					f.seekp(pos, ios::cur);
					f.write((char*)&c, sizeof(c));
					cout<<"Changes saved successfully!\n\n";
					flag=0;
					break;
				}
			}
		}
		if(flag!=0)
		cout<<"\nNo Data Found!\n";
		getch();
		cout<<"\nDo you want to continue editing? (Yes/No)\n";
		cin.getline(ch, sizeof(ch));
		if(strcmpi("Yes", ch)==0)
		goto modif;
		f.close();
	}
	else
	{
		cout<<"Incorrect Password. :(\nPlease try again : ";
		goto pw;
	}
}

void dels()
{
	clrscr();
	fstream f1("CRMS", ios::in | ios::binary);
	fstream f2("Temp", ios::out | ios::binary);
	cout<<"\nEnter the S.No. to delete the record.\n";
	criminal c;
	char ch[5];
	int s;
	cin>>s;
	cout<<"\nAre you sure you want to delete this record? (Yes/No)\nDeleted data won't be recovered.\n";
	cin.getline(ch, sizeof(ch));
	cout<<endl;
	if(strcmpi("no", ch)==0)
	{
		cout<<"Deletion Cancelled!\n\n";
		f1.close();
		f2.close();
		remove("Temp");
		Sleep(2);
	}

	else if(strcmpi("Yes", ch)==0)
	{
		cout<<"Task under process...\n\n";
		Sleep(2);
		while(f1.read((char*)&c, sizeof(c)))
		{
			if(c.rets()!=s)
			{
				f2.write((char*)&c, sizeof(c));
			}
		}
		f1.close();
		f2.close();
		remove("CRMS");
		rename("Temp", "CRMS");
		cout<<"Deletion Successful!\n\n";
		Sleep(2);
	}
}

void delnm()
{
	clrscr();
	fstream f1("CRMS", ios::in | ios::binary);
	fstream f2("Temp", ios::out | ios::binary);
	cout<<"\nEnter the name of the criminal whose data needs to be deleted.\n";
	criminal c;
	char ch[5];
	char n[60];
	cin.getline(n, sizeof(n));
	cout<<"\nAre you sure you want to delete this record? (Y/N)\nDeleted data won't be recovered.\n";
	cin.getline(ch, sizeof(ch));
	cout<<endl;
	if(strcmpi("No", ch)==0)
	{
		cout<<"Deletion Cancelled!\n\n";
		f1.close();
		f2.close();
		remove("Temp");
		Sleep(2);
	}

	else if(strcmpi("Yes", ch)==0)
	{
		cout<<"Task under process...\n\n";
		Sleep(2);
		while(f1.read((char*)&c, sizeof(c)))
		{
			c.retnm();
			if(strcmpi(c.n, n)!=0)
			{
				f2.write((char*)&c, sizeof(c));
			}
		}

		f1.close();
		f2.close();
		remove("CRMS");
		rename("Temp", "CRMS");
		cout<<"Deletion Successful!\n\n";
		getch();
		Sleep(2);
	}
}

void delg()
{
	clrscr();
	fstream f1("CRMS", ios::in | ios::binary);
	fstream f2("Temp", ios::out | ios::binary);
	cout<<"\nEnter the gender of the criminals whose data needs to be deleted.\n";
	criminal c;
	char ch[5], g[10];
	cin.getline(g, sizeof(g));
	cout<<"\nAre you sure you want to delete this record? (Y/N)\nDeleted data won't be recovered.\n";
	cin.getline(ch, sizeof(ch));
	cout<<endl;
	if(strcmpi("No", ch)==0)
	{
		cout<<"Deletion Cancelled!\n\n";
		f1.close();
		f2.close();
		remove("Temp");
		Sleep(2);
	}

	else if(strcmpi("Yes", ch)==0)
	{
		cout<<"Task under process...\n\n";
		Sleep(2);
		while(f1.read((char*)&c, sizeof(c)))
		{
			c.retg();
			if(strcmpi(g, c.g)!=0)
			{
				f2.write((char*)&c, sizeof(c));
			}
		}
		f1.close();
		f2.close();
		remove("CRMS");
		rename("Temp", "CRMS");
		cout<<"Deletion Successful!\n\n";
		Sleep(2);
	}
}

void delh()
{
	clrscr();
	fstream f1("CRMS", ios::in | ios::binary);
	fstream f2("Temp", ios::out | ios::binary);
	cout<<"\nEnter the height of the criminal whose data needs to be deleted.\n";
	criminal c;
	char ch[5];
	float h;
	cin>>h;
	cout<<"\nAre you sure you want to delete this record? (Y/N)\nDeleted data won't be recovered.\n";
	cin.getline(ch, sizeof(ch));
	cout<<endl;
	if(strcmpi("No", ch)==0)
	{
		cout<<"Deletion Cancelled!\n\n";
		f1.close();
		f2.close();
		remove("Temp");
		Sleep(2);
	}

	else if(strcmpi("Yes", ch)==0)
	{
		cout<<"Task under process...\n\n";
		Sleep(2);
		while(f1.read((char*)&c, sizeof(c)))
		{
			if(c.reth()!=h)
			{
				f2.write((char*)&c, sizeof(c));
			}
		}
		f1.close();
		f2.close();
		remove("CRMS");
		rename("Temp", "CRMS");
		cout<<"Deletion Successful!\n\n";
		Sleep(2);
	}
}

void delw()
{
	clrscr();
	fstream f1("CRMS", ios::in | ios::binary);
	fstream f2("Temp", ios::out | ios::binary);
	cout<<"\nEnter the weight of the criminal whose data needs to be deleted.\n";
	criminal c;
	char ch[5];
	float w;
	cin>>w;
	cout<<"\nAre you sure you want to delete this record? (Y/N)\nDeleted data won't be recovered.\n";
	cin.getline(ch, sizeof(ch));
	cout<<endl;
	if(strcmpi("No", ch)==0)
	{
		cout<<"Deletion Cancelled!\n\n";
		f1.close();
		f2.close();
		remove("Temp");
		Sleep(2);
	}

	else if(strcmpi("Yes", ch)==0)
	{
		cout<<"Task under process...\n\n";
		Sleep(2);
		while(f1.read((char*)&c, sizeof(c)))
		{
			if(c.retw()!=w)
			{
				f2.write((char*)&c, sizeof(c));
			}
		}
		f1.close();
		f2.close();
		remove("CRMS");
		rename("Temp", "CRMS");
		cout<<"Deletion Successful!\n\n";
		Sleep(2);
	}
}

void delsc()
{
	clrscr();
	fstream f1("CRMS", ios::in | ios::binary);
	fstream f2("Temp", ios::out | ios::binary);
	cout<<"\nEnter the colour of the skin of the ciminals whose data needs to be deleted.\n";
	criminal c;
	char ch[5];
	char sc[20];
	cin.getline(sc, sizeof(sc));
	cout<<"\nAre you sure you want to delete this record? (Y/N)\nDeleted data won't be recovered.\n";
	cin.getline(ch, sizeof(ch));
	cout<<endl;
	if(strcmpi("No", ch)==0)
	{
		cout<<"Deletion Cancelled!\n\n";
		f1.close();
		f2.close();
		remove("Temp");
		Sleep(2);
	}

	else if(strcmpi("Yes", ch)==0)
	{
		cout<<"Task under process...\n\n";
		Sleep(2);
		while(f1.read((char*)&c, sizeof(c)))
		{
			c.retskin();
			if(strcmpi(c.skc, sc)!=0)
			{
				f2.write((char*)&c, sizeof(c));
			}
		}

		f1.close();
		f2.close();
		remove("CRMS");
		rename("Temp", "CRMS");
		cout<<"Deletion Successful!\n\n";
		Sleep(2);
	}
}

void delec()
{
	clrscr();
	fstream f1("CRMS", ios::in | ios::binary);
	fstream f2("Temp", ios::out | ios::binary);
	cout<<"\nEnter the colour of the eyes of the criminals whose data needs to be deleted.\n";
	criminal c;
	char ch[5];
	char ec[20];
	cin.getline(ec, sizeof(ec));
	cout<<"\nAre you sure you want to delete this record? (Y/N)\nDeleted data won't be recovered.\n";
	cin.getline(ch, sizeof(ch));
	cout<<endl;
	if(strcmpi("No", ch)==0)
	{
		cout<<"Deletion Cancelled!\n\n";
		f1.close();
		f2.close();
		remove("Temp");
		Sleep(2);
	}

	else if(strcmpi("Yes", ch)==0)
	{
		cout<<"Task under process...\n\n";
		Sleep(2);
		while(f1.read((char*)&c, sizeof(c)))
		{
			c.reteye();
			if(strcmpi(c.eyc, ec)!=0)
			{
				f2.write((char*)&c, sizeof(c));
			}
		}

		f1.close();
		f2.close();
		remove("CRMS");
		rename("Temp", "CRMS");
		cout<<"Deletion Successful!\n\n";
		Sleep(2);
	}
}

void delage()
{
	clrscr();
	fstream f1("CRMS", ios::in | ios::binary);
	fstream f2("Temp", ios::out | ios::binary);
	cout<<"\nEnter the age of the criminal whose data needs to be deleted.\n";
	criminal c;
	char ch[5];
	int age;
	cin>>age;
	cout<<"\nAre you sure you want to delete this record? (Y/N)\nDeleted data won't be recovered.\n";
	cin.getline(ch, sizeof(ch));
	cout<<endl;
	if(strcmpi("No", ch)==0)
	{
		cout<<"Deletion Cancelled!\n\n";
		f1.close();
		f2.close();
		remove("Temp");
		Sleep(2);
	}

	else if(strcmpi("Yes", ch)==0)
	{
		cout<<"Task under process...\n\n";
		Sleep(2);
		while(f1.read((char*)&c, sizeof(c)))
		{
			if(c.retage()!=age)
			{
				f2.write((char*)&c, sizeof(c));
			}
		}
		f1.close();
		f2.close();
		remove("CRMS");
		rename("Temp", "CRMS");
		cout<<"Deletion Successful!\n\n";
		Sleep(2);
	}
}

void delcr()
{
	clrscr();
	fstream f1("CRMS", ios::in | ios::binary);
	fstream f2("Temp", ios::out | ios::binary);
	cout<<"\nEnter the crime committed by the criminal whose data needs to be deleted.\n";
	criminal c;
	char ch[5];
	char cr[50];
	cin.getline(cr, sizeof(cr));
	cout<<"\nAre you sure you want to delete this record? (Y/N)\nDeleted data won't be recovered.\n";
	cin.getline(ch, sizeof(ch));
	cout<<endl;
	if(strcmpi("No", ch)==0)
	{
		cout<<"Deletion Cancelled!\n\n";
		f1.close();
		f2.close();
		remove("Temp");
		Sleep(2);
	}

	else if(strcmpi("Yes", ch)==0)
	{
		cout<<"Task under process...\n\n";
		Sleep(2);
		while(f1.read((char*)&c, sizeof(c)))
		{
			c.retcrime();
			if(strcmpi(c.cr, cr)!=0)
			{
				f2.write((char*)&c, sizeof(c));
			}
		}

		f1.close();
		f2.close();
		remove("CRMS");
		rename("Temp", "CRMS");
		cout<<"Deletion Successful!\n\n";
		Sleep(2);
	}
}

void delvic()
{
	clrscr();
	fstream f1("CRMS", ios::in | ios::binary);
	fstream f2("Temp", ios::out | ios::binary);
	cout<<"\nEnter the name of the victim for whose criminal's data needs to be deleted.\n";
	criminal c;
	char ch[5];
	char v[50];
	cin.getline(v, sizeof(v));
	cout<<"\nAre you sure you want to delete this record? (Y/N)\nDeleted data won't be recovered.\n";
	cin.getline(ch, sizeof(ch));
	cout<<endl;
	if(strcmpi("No", ch)==0)
	{
		cout<<"Deletion Cancelled!\n\n";
		f1.close();
		f2.close();
		remove("Temp");
		Sleep(2);
	}

	else if(strcmpi("Yes", ch)==0)
	{
		cout<<"Task under process...\n\n";
		Sleep(2);
		while(f1.read((char*)&c, sizeof(c)))
		{
			c.retcrime();
			if(strcmpi(c.v, v)!=0)
			{
				f2.write((char*)&c, sizeof(c));
			}
		}

		f1.close();
		f2.close();
		remove("CRMS");
		rename("Temp", "CRMS");
		cout<<"Deletion Successful!\n\n";
		Sleep(2);
	}
}

void delpl()
{
	clrscr();
	fstream f1("CRMS", ios::in | ios::binary);
	fstream f2("Temp", ios::out | ios::binary);
	cout<<"\nEnter the place where crime was committed to erase the criminal data of that place.\n";
	criminal c;
	char ch[5];
	char pl[100];
	cin.getline(pl, sizeof(pl));
	cout<<"\nAre you sure you want to delete this record? (Y/N)\nDeleted data won't be recovered.\n";
	cin.getline(ch, sizeof(ch));
	cout<<endl;
	if(strcmpi("No", ch)==0)
	{
		cout<<"Deletion Cancelled!\n\n";
		f1.close();
		f2.close();
		remove("Temp");
		Sleep(2);
	}

	else if(strcmpi("Yes", ch)==0)
	{
		cout<<"Task under process...\n\n";
		Sleep(2);
		while(f1.read((char*)&c, sizeof(c)))
		{
			c.retplace();
			if(strcmpi(c.pl, pl)!=0)
			{
				f2.write((char*)&c, sizeof(c));
			}
		}

		f1.close();
		f2.close();
		remove("CRMS");
		rename("Temp", "CRMS");
		cout<<"Deletion Successful!\n\n";
		Sleep(2);
	}
}

void delyoa()
{
	clrscr();
	fstream f1("CRMS", ios::in | ios::binary);
	fstream f2("Temp", ios::out | ios::binary);
	cout<<"\nEnter the year when the crime was committed of the criminal whose data needs to be deleted.\n";
	criminal c;
	char ch[5];
	int y;
	cin>>y;
	cout<<"\nAre you sure you want to delete this record? (Y/N)\nDeleted data won't be recovered.\n";
	cin.getline(ch, sizeof(ch));
	cout<<endl;
	if(strcmpi("No", ch)==0)
	{
		cout<<"Deletion Cancelled!\n\n";
		f1.close();
		f2.close();
		remove("Temp");
		Sleep(2);
	}

	else if(strcmpi("Yes", ch)==0)
	{
		cout<<"Task under process...\n\n";
		Sleep(2);
		while(f1.read((char*)&c, sizeof(c)))
		{
			if(c.retyoa()!=y)
			{
				f2.write((char*)&c, sizeof(c));
			}
		}
		f1.close();
		f2.close();
		remove("CRMS");
		rename("Temp", "CRMS");
		cout<<"Deletion Successful!\n\n";
		Sleep(2);
	}
}

void delpun()
{
	clrscr();
	fstream f1("CRMS", ios::in | ios::binary);
	fstream f2("Temp", ios::out | ios::binary);
	cout<<"\nEnter the name whose data needs to be deleted.\n";
	criminal c;
	char ch[5];
	char pl[100];
	cin.getline(pl, sizeof(pl));
	cout<<"\nAre you sure you want to delete this record? (Y/N)\nDeleted data won't be recovered.\n";
	cin.getline(ch, sizeof(ch));
	cout<<endl;
	if(strcmpi("No", ch)==0)
	{
		cout<<"Deletion Cancelled!\n\n";
		f1.close();
		f2.close();
		remove("Temp");
		Sleep(2);
	}

	else if(strcmpi("Yes", ch)==0)
	{
		cout<<"Task under process...\n\n";
		Sleep(2);
		while(f1.read((char*)&c, sizeof(c)))
		{
			c.retplace();
			if(strcmpi(c.pl, pl)!=0)
			{
				f2.write((char*)&c, sizeof(c));
			}
		}

		f1.close();
		f2.close();
		remove("CRMS");
		rename("Temp", "CRMS");
		cout<<"Deletion Successful!\n\n";
		Sleep(2);
	}
}

void del()
{
	cout<<"Enter system password to continue.- ";
	char pass[20];
	pwd:
	cin.getline(pass, sizeof(pass));
	if(strcmp("crime@delhi", pass)==0)
	{
		del:
		clrscr();
		cout<<"Delete by : \n\n";
		cout<<"1.  S.No.\n2.  Name\n3.  Gender\n4.  Height\n5.  Weight\n6.  Skin Colour\n7.  Eye Colour\n8.  Age\n9.  Crime\n10. Name of the Victim\n11. Place of Crime\n12. Year of Act\n13. Punishment\n14. Back\n";
		int ch;
		t:
		cin>>ch;
		switch(ch)
		{
			case 1 : dels();
			break;

			case 2 : delnm();
			break;

			case 3 : delg();
			break;

			case 4 : delh();
			break;

			case 5 : delw();
			break;

			case 6 : delsc();
			break;

			case 7 : delec();
			break;

			case 8 : delage();
			break;

			case 9 : delcr();
			break;

			case 10 : delvic();
			break;

			case 11 : delpl();
			break;

			case 12 : delyoa();
			break;

			case 13 : delpun();
			break;

			case 14 : break;

			default :
			{
				cout<<"Enter a valid choice\n";
				goto t;
				break;
			}
		}
		cout<<"Do you want to continue deleting? (Yes/No)\n";
		char s[5];
		cin.getline(s, sizeof(s));
		if(strcmpi("Yes", s)==0)
			goto del;
	}
	else
	{
		cout<<"\nInavalid Password :(\nPlease try again : ";
		goto pwd;
	}
}

int main(void)
{
	clrscr();
	int ch;
	char ex[5];
	char pass[20];
	cout<<"\nHello Sir,\nPlease enter your password : ";
	lb:
	cin>>pass;
	if(strcmp(pass, "crime@delhi")==0)
	{
		ag:
		cout<<"\nAccess Granted!\nWelcome to the System!\n";
		Sleep(2);
		clrscr();
		do
		{
			ex:
			clrscr();
			cout<<"\nWhat do you wish to do?\n";
			cout<<"1. Create\n2. Add a new record\n3. Edit a record\n4. Display all records\n5. Search\n6. Delete a record\n7. Exit"<<endl;
			ch:
			cin>>ch;
			switch(ch)
			{
				case 1 : create();
				break;

				case 2 : append();
				break;

				case 3 : modify();
				break;

				case 4 : dispall();
				break;

				case 5 : search();
				break;

				case 6 : del();
				break;

				case 7 :
				{
					cout<<"\nAre you sure you want to exit? (Yes/No)\n";
					cin.getline(ex, sizeof(ex));
					if (strcmpi("yes", ex)==0)
					{
						exit(0);
					}
					else goto ex;
				}
				break;

				default :
				{
					cout<<"\nEnter a valid choice.\n";
					goto ch;
				}
				break;
			}
		}while(ch!=7);
	}

	else
	{
		for (int i=3; i>=0; )
		{
			ad:
			i--;
			cout<<"\nAccess Denied!\n";
			if(i==0)
			{
				cout<<"\nPlease try again after some time.";
				Sleep(3);
				exit(0);
			}
			else
			{
				cout<<"Please try again : ";
				cin>>pass;
				if(strcmp("crime@delhi", pass)==0)
				{
					goto ag;
				}
				else goto ad;
			}
		}
	}
	getch();
}