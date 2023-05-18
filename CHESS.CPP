// CHESS//NEEDS EXTENSIVE DOCUMENTATION
#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<ctype.h>
void main()
{
	clrscr();
	int i=0,j=0,x=0,y=0,game_count=0,b=0,z;
	char r[25],s[25]="check mate",t[25]="stale mate",a[8][8];
	cout <<"CHESS"<<endl;
	cout<<"'*' indicates white square and '0' indicates black square"<<endl;
	cout<<"white pawns are capital lettered and black pawns are small lettered"<<endl;
	cout<<"you can use the comment section to document your moves"<<endl<<endl;
		for(i=0;i<8;i++)
	{
		for(j=0;j<8;j++)
		{
			if((i+j)%2==0)
			a[i][j]='*';
			else
			a[i][j]='0';
		}

	}
	b=0;
	a[1][0]=a[1][1]=a[1][2]=a[1][3]=a[1][4]=a[1][5]=a[1][6]=a[1][7]='P';
	a[6][0]=a[6][1]=a[6][2]=a[6][3]=a[6][4]=a[6][5]=a[6][6]=a[6][7]='p';
	a[0][0]=a[0][7]='R';
	a[7][0]=a[7][7]='r';
	a[0][1]=a[0][6]='H';
	a[7][1]=a[7][6]='h';
	a[0][2]=a[0][5]='B';
	a[7][2]=a[7][5]='b';
	a[0][3]='K';
	a[7][3]='k';
	a[0][4]='Q';
	a[7][4]='q';

	cout<<"|0|1|2|3|4|5|6|7|"<<endl<<endl;
		for(i=0;i<8;i++)
	{

		for(j=0;j<8;j++)
		{
			cout<<"|"<<a[i][j];

		}
		cout<<"|"<<"  "<<b++<<endl;


	}



	 for(z=0;(strcmp(r,s)!=0 && strcmp(r,t)!=0);z++)//(r!="check mate")//(r!="stale mate"||"check mate")
    {
	cout<<"move number "<<game_count<<endl;
	if(game_count%2==0)
	{
	    cout<<"white player's chance"<<endl;
	}
	else
	{
	    cout<<"black player's chance"<<endl;
	}

	cout<<"from position"<<endl;
	cin>>i>>j;
	cout<<"to location"<<endl;
	cin>>x>>y;
	cout<<"make your move"<<endl;
	cin>>a[x][y];
   /*	if(game_count%2!=0)
	{
	   if(islower(a[x][y]))
	   {
	      cout<<"illegal move"<<endl;
	      game_count--;

	   }
	}
	 if(game_count%2==0)
	{
	    if(isupper(a[x][y]))
	    {
	       cout<<"illegal move"<<endl;
	       game_count--;

	    }
	}   */

	 if(isalpha(a[i][j])==0)
	{
	   cout<<"illegal move"<<endl;
	   game_count--;
	}



	    if(x!=i || y!=j)
	    {

		if((i+j)%2==0)
		a[i][j]='*';
		else
		a[i][j]='0';
	    }
	    else
		a[i][j]=a[x][y];


	game_count++;
	b=0;
	cout<<"|0|1|2|3|4|5|6|7|"<<endl<<endl;
	for(x=0;x<8;x++)
	{
		for(y=0;y<8;y++)
		{

			cout<<"|"<<a[x][y];
		}
		cout<<"|"<<"  "<<b++<<endl;
	}
	cout<<"comments:";
	gets(r);
	cout<<endl;
    }
    if(strcmp(r,s)==0)
    {
	if(game_count%2==0)
	cout<<"white wins";
	else
	cout<<"black wins";
    }
    else
    cout<<"draw match";

    getch();
}
/* NEED TO ADD
 undo step
 vs computer
 */

