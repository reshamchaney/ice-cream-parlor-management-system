//NAME : RESHAM CHANEY
//REGISTRATION NUMBER : 11810004
//ROLL NUMBER : RK18HKB57
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include<fstream>
#include<string.h>
using namespace std;
double iPrice = 0,bPrice=0,sunPrice=0,shkPrice=0,sodPrice=0,discount=0, payTotal=0,total = 0,iTotal = 0,sTotal = 0,fTotal = 0,cTotal = 0,lTotal = 0,gTotal = 0;
string IceC,bar,shk,sun,sod;
bool ice = false,lollipop = false,snack=false,gumdrops = false,sprinkles = false,fudge = false,cream = false,bar1=false,sun1=false,shk1=false,sod1=false;
int nLolli,nGum,scoops,nbar,nsun,nshk,nsod,a=0;
int icecream(int flavor)
{
	switch(flavor)
        {
        case 1:
            iPrice = 30;
            IceC = "Vanilla";
            return(1);
            break;
        case 2:
            iPrice = 30;
            IceC = "Strawberry";
             return(1);
            break;
        case 3:
            iPrice = 40;
            IceC = "Chocolate";
             return(1);
            break;
        case 4:
            iPrice = 40;
            IceC = "Black Current";
             return(1);
            break;
        case 5:
            iPrice = 50;
            IceC = "Mango Delight";
             return(1);
            break;
        case 6:
            iPrice = 50;
            IceC = "Kesar Pista";
             return(1);
            break;
        default:
            cout << "Please enter correct code!" << endl;
            return(0);
        }
}
int barsandcones(int flavor)
{
	bar1=true;
	int n;
	cout << endl ;
	cout<<"How many would you like to have? : ";
	cin>>n;
    nbar=n;
	switch(flavor)
        {
        case 1:
            bPrice = 40*n;
            bar = "Crazy Cone";
            return(1);
            break;
        case 2:
            bPrice = 40*n;
            bar = "Fruit Cream";
             return(1);
            break;
        case 3:
            bPrice = 45*n;
            bar = "Cassatta";
             return(1);
            break;
        case 4:
            bPrice = 50*n;
            bar = "Ice Cream Pastry";
             return(1);
            break;
        case 5:
            bPrice = 65*n;
            bar = "Nutty Cone";
             return(1);
            break;
        case 6:
            bPrice = 70*n;
            bar = "Create a cone";
             return(1);
            break;
        default:
            cout << "Please enter correct code!" << endl;
            return(0);
        }        
}
int icecreamsundaes(int flavor)
{
	sun1=true;
	int n;
	cout << endl ;
	cout<<"How many would you like to have? : ";
	cin>>n;
	nsun=n;
	switch(flavor)
        {
        case 1:
            sunPrice = 100*n;
            sun = "Fruit Hungama";
            return(1);
            break;
        case 2:
            sunPrice = 110*n;
            sun = "Chocolate Dream Sundae";
             return(1);
            break;
        case 3:
            sunPrice = 110*n;
            sun = "White Vanilla Sundae";
             return(1);
            break;
        case 4:
            sunPrice = 130*n;
            sun = "American Banana Split";
             return(1);
            break;
        case 5:
            sunPrice = 130*n;
            sun = "Hot Chocolate Fudge";
             return(1);
            break;
        case 6:
            sunPrice = 50*n;
            sun = "Family Sundae";
             return(1);
            break;
        default:
            cout << "Please enter correct code!" << endl;
            return(0);
        }
}
int icecreamshakes(int flavor)
{
	shk1=true;
	int n;
	cout << endl ;
	cout<<"How many would you like to have? : ";
	cin>>n;
	nshk=n;
	switch(flavor)
        {
        case 1:
            shkPrice = 60*n;
            shk = "Vanilla";
            return(1);
            break;
        case 2:
            shkPrice = 70*n;
             shk = "Chocolate";
             return(1);
            break;
        case 3:
            shkPrice = 70*n;
           shk = "Strawberry";
             return(1);
            break;
        case 4:
            shkPrice = 70*n;
            shk = "Butterscotch";
             return(1);
            break;
        case 5:
            shkPrice = 90*n;
            shk = "Cold coffee";
             return(1);
            break;
        default:
            cout << "Please enter correct code!" << endl;
            return(0);
        }
}
int icecreamsodas(int flavor)
{
	sod1=true;
	int n;
	cout << endl ;
	cout<<"How many would you like to have? : ";
	cin>>n;
	nsod=n;
	switch(flavor)
        {
        case 1:
            sodPrice = 80*n;
            sod = "All Golden";
            return(1);
            break;
        case 2:
            sodPrice = 80*n;
             sod = "Lime Ice Cream Soda";
             return(1);
            break;
        case 3:
            sodPrice = 80*n;
           sod = "Fruit Punch Soda";
             return(1);
            break;
        case 4:
            sodPrice = 80*n;
            sod = "Pineapple Soda";
             return(1);
            break;
        case 5:
            sodPrice = 90*n;
            sod = "Butterscotch Soda Shake";
             return(1);
            break;
        case 6:
            sodPrice = 90*n;
            sod = "California Bliss";
             return(1);
            break;   
        default:
            cout << "Please enter correct code!" << endl;
            return(0);
        }
    }
void bill()
{
	ofstream b,t;
	b.open("bill.txt",ios::app);
	t.open("billnum.txt",ios::app);
        if(ice)
        {
            b << scoops << " scoops of " << IceC << " :\tRs" << iTotal << endl;
            t<<iTotal<<endl;
            b << "Extras: " << endl;
           if(sprinkles)
           {
             b << "Sprinkles: " << scoops << " scoops * 30 :\tRs" << sTotal << endl;
             t<<sTotal<<endl;
           }
           if(fudge)
           {
            b << "Hot Fudge: " << scoops << " scoops * 40 :\tRs" << fTotal << endl;
            t<<fTotal<<endl;
           }
           if(cream)
           {
            b << "Whipped Cream: " << scoops << " scoops * 30 :\tRs" << cTotal << endl;
            t<<cTotal<<endl;
           }
        }
        if(bar1)
        { 
           b << bar << " * "<<nbar<<" :\tRs" << bPrice << endl;
           t<<bPrice<<endl;
        }
        if(sun1)
        {
           b << sun << " * "<<nsun<< " :\tRs" << sunPrice << endl;
           t<<sunPrice<<endl;
        }
        if(shk1)
        {
           b << shk << " * "<<nshk<<" :\tRs" << shkPrice << endl;
           t<<shkPrice<<endl;
        }
        if(sod1)
        {
           b << sod<< " * "<<nsod<<" :\tRs" << sodPrice << endl;
           t<<sodPrice<<endl;
        }
        
        if(lollipop)
        {
            b << nLolli << " lollipops :\tRs" << lTotal << endl;
            
        }
        if(gumdrops)
        {
            b << nGum << " gumpacks :\tRs" << gTotal << endl;
        }
        t.close();
        b.close();
}
bool cice(char choice)
{
    switch(choice)
    {
    case 'y':
    case 'Y':
        return true;
        break;
    case 'n':
    case 'N':
        return false;
        break;
    default:
        return -1;
    }
}
void snacks()
    {  
        char choice;
        snack=true;
        cout << endl << "Snacks!" << endl << "------------------------------------" << endl;
        cout << "Would you like a lollipop? Rs 20 per piece (Y or N) : ";
        cin >> choice;
        lollipop = cice(choice);
        if(lollipop)
        {
            cout << "How many lollipops would you like? : ";
            cin >> nLolli;
            lTotal = 20 * nLolli;
        }
        cout << endl ;
        cout << "Would you like a pack of gumdrops? Rs 10 per pack (Y or N) : ";
        cin >> choice;
        gumdrops = cice(choice);
        if(gumdrops)
        {
            cout << "How many packs would you like? : ";
            cin >> nGum;
            gTotal = 10 * nGum;
        }
        cout << "------------------------------------" << endl;
        if(lollipop)
        {
            total += lTotal;
        }
        if(gumdrops)
        {
            total += gTotal;
        }
        bill();
        snack=false;
    }
void extras()
{
	ice = true;
	char choice;
		cout << endl << "How many scoops of " << IceC << " would you like? : ";
        cin >> scoops;
        if(scoops < 0)
        {
            cout << "Error: You cannot have negative scoops!" << endl;
        }
        iTotal = scoops * iPrice;  
        cout << endl << "Extras!" << endl << "------------------------------------" << endl;
        cout << "Would you like sprinkles? Rs 30 per scoop (Y or N) : ";
        cin >> choice;
        sTotal = 30 * scoops;
        sprinkles = cice(choice);
        cout << "Would you like hot fudge? Rs 40 per scoop (Y or N) : ";
        cin >> choice;
        fTotal = 40 * scoops;
        fudge = cice(choice);
        cout << "Would you like whipped cream? Rs 30 per scoop (Y or N) : ";
        cin >> choice;
        cTotal = 30 * scoops;
        cream = cice(choice);
        bill();
        ice=false;
}
int category(char c)
{
	ifstream f;
	int i,flag=0;
	bool ice2=true;
	char ch,choice;
	if (c=='A'||c=='a')
	{
            f.open("icecream.txt");
             cout << endl ;
             while(!f.eof()) 
              { 
                ch=f.get(); 
                cout<<ch; 
              }
              f.close();
              while(ice2)
              {
              	 cout << endl ;
              	cout<<"enter choice : ";
              	cin>>i;
              	flag=icecream(i);
              	ice=false;
              	if(flag==1)
              	{
              	extras();
              	cout << endl ;
              	cout<<"Would you like to have more ice cream? (Y or N) : ";
              	cin>>choice;
              	ice2=cice(choice);
                }
            }
			 flag=0; 
	return (1);
    }
	else if (c=='B'||c=='b')
	{
		f.open("barsandcones.txt");
		cout << endl ;
             while(!f.eof()) 
              { 
                ch=f.get(); 
                cout<<ch; 
              }
              f.close();
              while(ice2)
              {
              	cout << endl ;
              	cout<<"enter choice : ";
              	cin>>i;
              	flag=barsandcones(i);
              	if(flag==1)
              	{
              	bill();
              	bar1=false;
              	cout << endl ;
               	cout<<"Would you like to have more bars and cones? (Y or N) : ";
              	cin>>choice;
              	ice2=cice(choice);
                }
            }
            flag=0;
	return (1);
    }
	else if (c=='C'||c=='c')
	{
		f.open("icecreamsundaes.txt");
		cout << endl ;
             while(!f.eof()) 
              { 
                ch=f.get(); 
                cout<<ch; 
              }
              f.close();
              while(ice2)
              {
              	cout << endl ;
              	cout<<"enter choice : ";
              	cin>>i;
              	flag=icecreamsundaes(i);
              	if(flag==1)
              	{
              		bill();
              		sun1=false;
              		cout << endl ;
              	cout<<"Would you like to have more ice cream sundaes? (Y or N) : ";
              	cin>>choice;
              	ice2=cice(choice);
                }
            }
            flag=0;
	return (1);
    }
	else if (c=='D'||c=='d')
	{
		f.open("icecreamshakes.txt");
		cout << endl ;
             while(!f.eof()) 
              { 
                ch=f.get(); 
                cout<<ch; 
              }
              f.close();
			  while(ice2)
              {
              	cout << endl ;
              	cout<<"enter choice : ";
              	cin>>i;
              	flag=icecreamshakes(i);
              	if(flag==1)
              	{
              		bill();
              		shk1=false;
              		cout << endl ;
              	cout<<"Would you like to have more ice cream shakes? (Y or N) : ";
              	cin>>choice;
              	ice2=cice(choice);
                }
            }
			  flag=0;
	return (1);
    }
	else if (c=='E'||c=='e')
	{
		f.open("icecreamsodas.txt");
		cout << endl ;
             while(!f.eof()) 
              { 
                ch=f.get(); 
                cout<<ch; 
              }
              f.close();
              while(ice2)
              {
              	cout << endl ;
              	cout<<"enter choice : ";
              	cin>>i;
              	flag=icecreamsodas(i);
              	if(flag==1)
              	{
              		bill();
              		sod1=false;
              		cout << endl ;
				  cout<<"would you like to have more ice cream sodas? (Y or N) : ";
              	cin>>choice;
              	ice2=cice(choice);
                }
              }
              flag=0;
		return (1);
    }
    else if(c=='f'|| c=='F')
    {
    	snacks();a=1;
    	return(1);
	}
	else
	{
		cout<<"Wrong choice!"<<endl<<endl;
	return (0);
    }
}

int main()
{
	for(;;)
    {
    char choice,ch,c;
    int f=0,flavor,x=0;
    bool cat=true;
    ofstream fin;
    iPrice = 0;bPrice=0;sunPrice=0;shkPrice=0;sodPrice=0;discount=0; payTotal=0;total = 0;iTotal = 0;sTotal = 0;fTotal = 0;cTotal = 0;lTotal = 0;gTotal = 0;
    ice = false;lollipop = false;snack=false;gumdrops = false;sprinkles = false;fudge = false;cream = false;bar1=false;sun1=false;shk1=false;sod1=false;
    nLolli=0,nGum=0,scoops=0,nbar=0,nsun=0,nshk=0,nsod=0,a=0;
    fin.open("categories.txt");
    fin<<"Categories:"<<endl;
    fin<<"Ice Creams  \t\t A"<<endl;
    fin<<"Bars and Cones \t\t B"<<endl;
    fin<<"Ice Cream Sundaes \t C"<<endl;
    fin<<"Ice Cream Shakes \t D"<<endl;
    fin<<"Ice Cream Sodas \t E"<<endl;
    fin<<"None \t\t\t F"<<endl;
    fin.close();
    fin.open("icecream.txt");
    fin<<"Icecreams:"<<endl;
    fin<<"(1)Vanilla \t\t\tRs 30.00"<<endl;
    fin<<"(2)Strawberry \t\t\tRs 30.00"<<endl;
    fin<<"(3)Chocolate \t\t\tRs 40.00"<<endl;
    fin<<"(4)Black Current \t\tRs 40.00"<<endl;
    fin<<"(5)Mango Delight \t\tRs 50.00"<<endl;
    fin<<"(6)Kesar Pista \t\t\tRs 50.00"<<endl;
    fin.close();
    fin.open("barsandcones.txt");
    fin<<"Bars and Cones:"<<endl;
    fin<<"(1)Crazy cone \t\t\tRs 40.00"<<endl;
    fin<<"(2)Fruit cream \t\t\tRs 40.00"<<endl;
    fin<<"(3)Cassatta \t\t\tRs 45.00"<<endl;
    fin<<"(4)Icecream Pastry \t\tRs 50.00"<<endl;
    fin<<"(5)Nutty Cone \t\t\tRs 65.00"<<endl;
    fin<<"(6)Create A Cone \t\tRs 70.00"<<endl;
    fin.close();
     fin.open("icecreamsundaes.txt");
     fin<<"Ice Cream Sundaes:"<<endl;
    fin<<"(1)Fruit Hungama \t\t\tRs 100.00"<<endl;
    fin<<"(2)Chocolate Dream Sunday \t\tRs 110.00"<<endl;
    fin<<"(3)White Vanilla Sundae \t\tRs 110.00"<<endl;
    fin<<"(4)American Banana Split \t\tRs 130.00"<<endl;
    fin<<"(5)Hot Chocolate Fudge \t\t\tRs 130.00"<<endl;
    fin<<"(6)Family sundae \t\t\tRs 160.00"<<endl;
    fin.close();
     fin.open("icecreamshakes.txt");
     fin<<"Ice Cream Shakes:"<<endl;
    fin<<"(1)Vanilla \t\t\tRs 60.00"<<endl;
    fin<<"(2)Chocolate \t\t\tRs 70.00"<<endl;
    fin<<"(3)Strawberry \t\t\tRs 70.00"<<endl;
    fin<<"(4)Butterscotch \t\tRs 70.00"<<endl;
    fin<<"(5)Cold Coffee \t\t\tRs 90.00"<<endl;
    fin.close();
     fin.open("icecreamsodas.txt");
     fin<<"Ice Cream Shakes:"<<endl;
    fin<<"(1)All Golden \t\t\t\tRs 80.00"<<endl;
    fin<<"(2)Lime Ice Cream Soda \t\t\tRs 80.00"<<endl;
    fin<<"(3)Fruit Punch Soda \t\t\tRs 80.00"<<endl;
    fin<<"(4)Pineapple \t\t\t\tRs 80.00"<<endl;
    fin<<"(5)Butterscotch Soda Shake \t\tRs 90.00"<<endl;
    fin<<"(6)California Bliss \t\t\tRs 90.00"<<endl;
    fin.close();
        cout << endl << endl;
        cout << "Welcome to the ice cream store!" << endl;
        cout << "Select the category:" << endl;
        cout << endl ;
        ifstream fout;
        fout.open("categories.txt");
        while(!fout.eof()) 
        { 
          ch=fout.get(); 
          cout<<ch; 
        }
        fout.close();
         cout << endl ;
        fin.open("bill.txt");
        fin<< "Receipt: " << endl;
        fin.close();
        while(cat)
        {
        cout << endl ;
		cout<<"Select the sub-category:"<<endl;
        cin>>c;
        int f=category(c);
        if(f==1)
               {
               	cout << endl ;
                 cout<<"Would you like to have anything else? (Y or N) : ";
              	cin>>choice;
              	cat=cice(choice);  
              	}
       }
       if(a!=1)
       {
	   snacks();
       }
       fout.open("billnum.txt");
       fout>>x;
         while(!fout.eof()) 
        { 
		  total+=x;
		  fout>>x; 
        }
        fout.close();
       	cout << endl <<endl;
        if (total>499 && total<800)
        {
		discount=.10*total;
		cout << "_____________________________________________" << endl<<endl;
		cout<<"Congratulations! You have got 10% discount! "<<endl;
		cout << "_____________________________________________" << endl<<endl;
	    }
        else if(total>799 && total<1000)
        {
		discount=.15*total;
		cout << "______________________________________________________________" << endl<<endl;
       	cout<<"Congratulations! You have won a nutty cone and 15% discount! "<<endl;
       	cout << "______________________________________________________________" << endl<<endl;
       }
        else if(total>999)
        {
		discount=.22*total;
		cout << "_________________________________________________________________________" << endl<<endl;
		cout<<"Congratulations! You have won a hot chocolate fudge and 20% discount ! "<<endl;
		cout << "_________________________________________________________________________" << endl<<endl;
        }
        payTotal=total-discount;
        cout << endl <<endl;
        fin.open("bill.txt",ios::app);
        fin << "-----------------------" << endl;
        fin << "Total:\tRs" << total << endl;
        fin << "-----------------------" << endl;
        fin << "Discount:\tRs" << discount << endl;
         fin << "-----------------------" << endl;
         fin << "payable Total:\tRs" << payTotal << endl;
        fin.close();
        fout.open("bill.txt");
        fin.open("billall.txt",ios::app);
        while(!fout.eof()) 
        { 
          ch=fout.get(); 
          cout<<ch; 
          fin<<ch;
        }
        fin<<endl<<endl;
        fin.close();
        fout.close();
        fin.open("billnum.txt",ios::trunc);
        fin.close();
        cout << endl << "Would you like to buy some more?(Y or N): ";
        cin >> choice;
        switch(choice)
        {
        case 'y':
        case 'Y':
            break;
        case 'n':
        case 'N':
        	exit(1);
            return 0;
        default:
            cout << "Please enter Y or N!" << endl;
            exit(1);
            return 0;
        }
    }
}
