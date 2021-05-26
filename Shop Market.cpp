////////////////   SOPE MARKET   \\\\\\\\\\\\\\\
///////////////   POROGRAMER BY   \\\\\\\\\\\\\\\
//////////////       MOHAMAD       \\\\\\\\\\\\\\\
/////////////         SADRA         \\\\\\\\\\\\\\\
////////////        BOROMAND         \\\\\\\\\\\\\\\
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$

#include <iostream>
#include <stdio.h>
#include <string>
#include <cstdlib>
#include <stdlib.h>//For Color
#include <fstream>//For Report

using namespace std;

struct Shop
{
    string NameObj;
    int Number;
    int Serial;
    int Buy;
    int Sell;
    struct DateEnter
    {
        int Day;
        int Month;
        int Year;
    }DateE;
}Market[100]={"obj1",7,101,2000,2500,23,12,1397,
              "obj2",4,102,3000,3500,6,8,1397,
              "obj3",13,103,4000,4500,1,1,1398,
              "obj4",15,104,5000,5500,3,1,1398};

int NumShop=0;

//****************************************************************************************************

struct Employ
{
    string NameWorker;
    int HourWorking;//House Work in The Shop
    int Pay;//WAGE
    struct DateEnterWorked
    {
        int Day;
        int Month;
        int Year;
    }DateWK;
}Worker[100]={"wk1",12,45000,5,7,1397,
              "wk2",6,25500,7,10,1397,
              "wk3",18,60000,2,1,1398,
              "wk4",10,45000,3,1,1398};

    int NumWorker=0;

//****************************************************************************************************

void Menu(int *NumMenu);

void AddOneMarket(Shop *M);

void AddMoreMarket(Shop M[]);

void DisplayMarket(Shop *M);

void ReportMarketTXT(Shop *M);

void ReportMarketHTML(Shop *M);

void SearchByNameObj(Shop *M);

void SearchByNumber(Shop *M);

void SearchBySerial(Shop *M);

void SearchByBuy(Shop *M);

void SearchBySell(Shop *M);

void SearchByDateE(Shop *M);

void SellObj(Shop *M);

void BuyObj(Shop *M);

void AddOwnWorker(Employ *W);

void AddMoreWorker(Employ W[]);

void DisplayWorker(Employ *W);

void ReportWorkerTXT(Employ *W);

void ReportWorkerHTML(Employ *W);

void DisplayWandM(Employ *W,Shop *M);

void ReportWandMTXT(Employ *W,Shop *M);

void ReportWandMHTML(Employ *W,Shop *M);

void ReplaceListMarket(Shop *M);

//****************************************************************************************************************

int main()
{
    cout<<"\t      SHOP MARKET ";

    int NumMenu=0;
    NumShop=4;
    NumWorker=4;

    while(true)
    {
        Menu(&NumMenu);
        switch(NumMenu)
        {
            case 1:
                AddOneMarket(Market);//Add One Market
            break;

            case 2:
                AddMoreMarket(Market);//Add More Market
            break;

            case 3:
                DisplayMarket(Market);//Display List  Market
            break;

            case 4:
                ReportMarketTXT(Market);//Report Market TXT
            break;

            case 5:
                ReportMarketHTML(Market);//Report Market HTML
            break;

            case 6:
                SearchByNameObj(Market);//Search By NameObj
            break;

            case 7:
                SearchByNumber(Market);//Search By Number
            break;

            case 8:
                SearchBySerial(Market);//Search By Serial
            break;

            case 9:
                SearchByBuy(Market);//Search By Buy
            break;

            case 10:
                SearchBySell(Market);//Search By Sell
            break;

            case 11:
                SearchByDateE(Market);//Search By Date Enter
            break;

            case 12:
                SellObj(Market);//Sell Obj
            break;

            case 13:
                BuyObj(Market);//Buy Obj
            break;

            case 14:
                AddOwnWorker(Worker);//Add Own Worker
            break;

            case 15:
                AddMoreWorker(Worker);//Add More Worker
            break;

            case 16:
                DisplayWorker(Worker);//Display Worker
            break;

            case 17:
                ReportWorkerTXT(Worker);//Report Worker TXT
            break;

            case 18:
                ReportWorkerHTML(Worker);//Report Worker HTML
            break;

            case 19:
                DisplayWandM(Worker,Market);//Display Worker and Market
            break;

            case 20:
                ReportWandMTXT(Worker,Market);//Report Worker and Market TXT File
            break;

            case 21:
                ReportWandMHTML(Worker,Market);//Report Worker and Market HTML File
            break;

            case 0:
                system("pause");
                return 0;//Close
            break;

            default:
                cout<<"The Number is Invalid\n\n";
        }
    }
}
//****************************************************************************************************************

void Menu(int *NumMenu)
{
    //0 2 3 a b c f
    system("color 0f");

    cout<<"\n\t\t Menu \n\n";//Menu

    cout<<" Add Market \n\t| [1] Add Own Market \n\t| [2] Add More Market \n";//Add Market

    cout<<"\n Display Market";
    cout<<"\n\t|[3] Display List Market";//Display List Market
    cout<<"\n\t|[4] Report List Market ( txt file )";//Report List Market ( txt file )
    cout<<"\n\t|[5] Report List Market ( html file ) \n";//Report List Market ( html file )

    cout<<"\n Search List";
    cout<<"\n\t| [6] Search By NameObj \n\t| [7] Search By Number ";//Search By Name and Number
    cout<<"\n\t| [8] Search By Serial \n\t| [9] Search By Buy \n\t| [10] Search By Sell \n";//Search by Serial and Buy and Sell
    cout<<"\t| [11] Search By Date Enter \n";//Search

    cout<<"\n[12]\t Sell Obj \n";//Sell Obj
    cout<<"\n[13]\t Buy Obj \n";//Buy Obj

    cout<<"\n Add Worker";
    cout<<"\n\t| [14] Add Own Worker \n\t| [15] Add More Worker \n";//Add Worker

    cout<<"\n Display Worker ";//Display Worker
    cout<<"\n\t|[16] Display List Worker";//Display List Worker
    cout<<"\n\t|[17] Report List Worker ( txt File )";//Report List Worker ( txt File )
    cout<<"\n\t|[18] Report List Worker ( html File ) \n";//Report List Worker ( html File )

    cout<<"\n Display Worker and Market";
    cout<<"\n\t|[19] Display List Worker and Market";//Display List Worker and Market
    cout<<"\n\t|[20] Report Worker and Market ( txt File )";//Report Worker and Market ( txt File )
    cout<<"\n\t|[21] Report Worker and Market ( html File )";//Report Worker and Market ( html File )

    cout<<"\n\n[0]\t Close \n";//Exit

    cout<<"\nEnter Number Menu :";
        cin>>*NumMenu;

    system("cls");
}

//****************************************************************************************************************

void AddOneMarket(Shop *M)
{
    system("color 0a");

    cout<<"\n\n---------------------------------------------------------------------------------------------\n\n";

    cout<<"\t\t Add Market \n\n";

    M+=NumShop;
    cout<<"\n\t Row ["<<NumShop+1<<"]\n";
    cout<<"Enter Name Obj :";
    cin>>M->NameObj;
    cout<<"Enter Number :";
    cin>>M->Number;
    cout<<"Enter Serial :";
    cin>>M->Serial;
    cout<<"Enter Buy :";
    cin>>M->Buy;
    cout<<"Enter Sell :";
    cin>>M->Sell;
    cout<<"Enter Date Enter ( Day Month Year ) :";
    cin>>M->DateE.Day>>M->DateE.Month>>M->DateE.Year;
    NumShop++;

    cout<<"\n\n---------------------------------------------------------------------------------------------\n\n";

    system("pause");

    system("cls");
}

//****************************************************************************************************************

void AddMoreMarket(Shop M[])
{
    system("color 0a");

    cout<<"\n\n---------------------------------------------------------------------------------------------\n\n";

    cout<<"\t\t Add More Market \n\n";

    cout<<"Enter Number for Adding : ";
    int NumAdd=0;
    cin>>NumAdd;

    for(int i=NumShop;i<NumShop+NumAdd;i++)
    {
        cout<<"\n\t Row ["<<NumShop+i-3<<"]\n";
        cout<<"Enter Name Obj :";
        cin>>M[i].NameObj;
        cout<<"Enter Number :";
        cin>>M[i].Number;
        cout<<"Enter Serial :";
        cin>>M[i].Serial;
        cout<<"Enter Buy :";
        cin>>M[i].Buy;
        cout<<"Enter Sell :";
        cin>>M[i].Sell;
        cout<<"Enter Date Enter ( Day Month Year ) :";
        cin>>M[i].DateE.Day>>M[i].DateE.Month>>M[i].DateE.Year;

    }NumShop+=NumAdd;

    cout<<"\n\n---------------------------------------------------------------------------------------------\n\n";

    system("pause");

    system("cls");
}

//****************************************************************************************************************

void DisplayMarket(Shop *M)
{
    system("color 0b");

    cout<<"\n\n---------------------------------------------------------------------------------------------\n\n";

    cout<<"\t\t Display For List Market \n\n";

    cout<<"\nRow \t NameObj \t Number \t Serial \t Buy \t Sell \t Day \t Month \t Year \n";

    for(int i=0;i<NumShop;i++)
    {
        cout<<i+1<<" \t "<<M->NameObj<<" \t\t "<<M->Number<<" \t\t ";

        cout<<M->Serial<<" \t\t "<<M->Buy<<" \t "<<M->Sell<<" \t ";

        cout<<M->DateE.Day<<" \t "<<M->DateE.Month<<" \t "<<M->DateE.Year<<" \t ";

        cout<<endl;

        M++;
    }

    cout<<"\n\n---------------------------------------------------------------------------------------------\n\n";

    system("pause");

    system("cls");
}

//****************************************************************************************************************

void ReportMarketTXT(Shop *M)
{
    system("color 03");

    cout<<"\n\n---------------------------------------------------------------------------------------------\n\n";

    cout<<"\t\t Report List Market TXT File \n";

    ofstream ReportListMarket("Report List Market.txt",ios::out);

    if(!ReportListMarket)
    {
        cerr<<"some thing wrong during opening file !";
    }

    ReportListMarket<<"\nRow \t NameObj \t Number \t Serial \t Buy \t Sell \t Day \t Month \t Year \n";

    for(int i=0;i<NumShop;i++)
    {
        ReportListMarket<<i+1<<" \t "<<M->NameObj<<" \t\t "<<M->Number<<" \t\t ";

        ReportListMarket<<M->Serial<<" \t\t "<<M->Buy<<" \t "<<M->Sell<<" \t ";

        ReportListMarket<<M->DateE.Day<<" \t "<<M->DateE.Month<<" \t "<<M->DateE.Year<<endl;

        M++;

    }

    ReportListMarket<<"\n\n\t\t\tCreate By Mohammad Sadra Boromand";

    cout<<"\t\t Done All Report TXT File";
    cout<<"\n\n---------------------------------------------------------------------------------------------\n\n";

    system("pause");

    system("cls");

}

//****************************************************************************************************************

void ReportMarketHTML(Shop *M)
{
    system("color 03");

    cout<<"\n\n---------------------------------------------------------------------------------------------\n\n";

    cout<<"\t\t Report List Market HTML File \n";

    ofstream ReportListMarket("Report List Market.html",ios::out);

    if(!ReportListMarket)
    {
        cerr<<"some thing wrong during opening file !";
    }

    //Tag For HTML File

    ReportListMarket<<"<html> \n\t<head> \n\t<title> Report List Market HTML File </title> \n\t</head> \n<body> \n<pre>";

    ReportListMarket<<"<h2>";

    ReportListMarket<<"\n<p align='center'><font color='gold'> Report List Marker HTML File </font><br><br>";

    //Tag For HTML File

    ReportListMarket<<"\nRow \t NameObj \t Number \t Serial \t Buy \t Sell \t Day \t Month \t Year <br>";

    for(int i=0;i<NumShop;i++)
    {
        ReportListMarket<<"\n<font color='green'>";

        ReportListMarket<<i+1<<" \t "<<M->NameObj<<" \t\t "<<M->Number<<" \t\t ";

        ReportListMarket<<M->Serial<<" \t\t "<<M->Buy<<" \t "<<M->Sell<<" \t ";

        ReportListMarket<<M->DateE.Day<<" \t "<<M->DateE.Month<<" \t "<<M->DateE.Year<<"<br>";

        M++;
    }

    //Tag For HTML File

    ReportListMarket<<"\n\n<font color='gray'>Create By Mohammad Sadra Boromand</font>";

    ReportListMarket<<"\n</font>";

    ReportListMarket<<"\n</p> \n</h2> \n</pre> \n</body> \n</html>";

    //Tag For HTML File

    cout<<"\t\t Done All Report HTML File";
    cout<<"\n\n---------------------------------------------------------------------------------------------\n\n";

    system("pause");

    system("cls");
}

//****************************************************************************************************************

void SearchByNameObj(Shop *M)
{
    system("color 0b");

    cout<<"\n\n---------------------------------------------------------------------------------------------\n\n";

    cout<<"\t\t Search By NameObj \n\n";

    cout<<"Enter Name for Search :";
    string Name;
    cin>>Name;

    cout<<"\nNumber \t Serial \t Buy \t Sell \n";

    for(int i=0;i<NumShop;i++)
    {
        if(Name==M->NameObj)
            cout<<M->Number<<" \t "<<M->Serial<<" \t\t "<<M->Buy<<" \t "<<M->Sell<<endl;
                M++;
    }
    cout<<"\n\n---------------------------------------------------------------------------------------------\n\n";

    system("pause");

    system("cls");
}

//****************************************************************************************************************

void SearchByNumber(Shop *M)
{
    system("color 0b");

    cout<<"\n\n---------------------------------------------------------------------------------------------\n\n";

    cout<<"\t\t Search By Number \n\n";

    cout<<"Enter Number for Search :";
    int N;//Number for Search
    cin>>N;

    cout<<"\nNumber \t Serial \t Buy \t Sell \n";

    for(int i=0;i<NumShop;i++)
    {
        if(N==M->Number)
            cout<<M->NameObj<<" \t "<<M->Serial<<" \t\t "<<M->Buy<<" \t "<<M->Sell<<endl;
            M++;
    }
    cout<<"\n\n---------------------------------------------------------------------------------------------\n\n";

    system("pause");

    system("cls");
}

//****************************************************************************************************************

void SearchBySerial(Shop *M)
{
    system("color 0b");

    cout<<"\n\n---------------------------------------------------------------------------------------------\n\n";

    cout<<"\t\t Search By Serial \n\n";

    cout<<"Enter Serial for Search :";
    int S;//Serial
    cin>>S;

    cout<<"\nNumber \t Number \t Buy \t Sell \n";

    for(int i=0;i<NumShop;i++)
    {
        if(S==M->Serial)
            cout<<M->NameObj<<" \t "<<M->Number<<" \t\t "<<M->Buy<<" \t "<<M->Sell<<endl;
                M++;
    }
    cout<<"\n\n---------------------------------------------------------------------------------------------\n\n";

    system("pause");

    system("cls");
}

//****************************************************************************************************************

void SearchByBuy(Shop *M)
{
    system("color 0b");

    cout<<"\n\n---------------------------------------------------------------------------------------------\n\n";

    cout<<"\t\t Search By Buy \n\n";

    cout<<"Enter Buy for Search :";
    int B;//Buy
    cin>>B;

    cout<<"\nNumber \t Number \t Serial \t Sell \n";

    for(int i=0;i<NumShop;i++)
    {
        if(B==M->Buy)
            cout<<M->NameObj<<" \t "<<M->Number<<" \t\t "<<M->Serial<<" \t\t "<<M->Sell<<endl;
                M++;
    }
    cout<<"\n\n---------------------------------------------------------------------------------------------\n\n";

    system("pause");

    system("cls");
}

//****************************************************************************************************************

void SearchBySell(Shop *M)
{
    system("color 0b");

    cout<<"\n\n---------------------------------------------------------------------------------------------\n\n";

    cout<<"\t\t Search By Sell \n\n";

    cout<<"Enter Sell for Search :";
    int SE;//Sell
    cin>>SE;

    cout<<"\nNumber \t Number \t Serial \t Buy \n";

    for(int i=0;i<NumShop;i++)
    {
        if(SE==M->Sell)
                cout<<M->NameObj<<" \t "<<M->Number<<" \t\t "<<M->Serial<<" \t\t "<<M->Buy<<endl;
                M++;
    }
    cout<<"\n\n---------------------------------------------------------------------------------------------\n\n";

    system("pause");

    system("cls");
}

//****************************************************************************************************************

void SearchByDateE(Shop *M)
{
    system("color 0b");

    cout<<"\n\n---------------------------------------------------------------------------------------------\n\n";

    cout<<"\t\t Search By Date Enter \n\n";

    cout<<"Enter Date Enter for Search ( Day / Month / Year ) :";

    int DA,MO,YE;//Date Enter

    cin>>DA>>MO>>YE;

    cout<<"\nNameObj \t Number \t Serial \n";

    for(int i=0;i<NumShop;i++)
    {
        if(DA==M->DateE.Day && MO==M->DateE.Month && YE==M->DateE.Year)
                cout<<M->NameObj<<" \t\t "<<M->Number<<" \t\t "<<M->Serial<<endl;
                M++;
    }
    cout<<"\n\n---------------------------------------------------------------------------------------------\n\n";

    system("pause");

    system("cls");
}

//****************************************************************************************************************

void SellObj(Shop *M)
{
    system("color 0e");

    cout<<"\n\n---------------------------------------------------------------------------------------------\n\n";

    cout<<"\t\t Sell Obj \n\n";

    cout<<"Enter Name Obj : ";

    string NObj;//Name Obj

    cin>>NObj;


    cout<<"\nNumber New \t Serial \t Buy \t Number Old \n";

    for(int i=0;i<NumShop;i++)
    {
        if(NObj==M->NameObj)
        {
            cout<<M->Number<<" \t\t "<<M->Serial<<" \t\t "<<M->Buy<<" \t "<<(M->Number)--<<endl;
        }
        M++;
    }

    cout<<"\n\n---------------------------------------------------------------------------------------------\n\n";

    system("pause");

    system("cls");
}

//****************************************************************************************************************

void BuyObj(Shop *M)
{
    system("color 0e");

    cout<<"\n\n---------------------------------------------------------------------------------------------\n\n";

    cout<<"\t\t Buy Obj \n\n";


    cout<<"Enter Name Obj : ";

    string NObj;//Name Obj

    cin>>NObj;


    cout<<"\nNumber New \t Serial \t Buy \t Number Old \n";

    for(int i=0;i<NumShop;i++)
    {
        if(NObj==M->NameObj)
        {
            cout<<M->Number<<" \t\t "<<M->Serial<<" \t\t "<<M->Buy<<" \t "<<(M->Number)++<<endl;
        }
        M++;
    }

    cout<<"\n\n---------------------------------------------------------------------------------------------\n\n";

    system("pause");

    system("cls");
}

//****************************************************************************************************************

void AddOwnWorker(Employ *W)
{
    system("color 0a");

    cout<<"\n\n---------------------------------------------------------------------------------------------\n\n";

    cout<<"\t\t Add Own Worker \n\n";

        W+=NumWorker;

        cout<<"\t\t Row["<<NumWorker+1<<"]\n";

        cout<<"Enter Name Worker : ";

        cin>>W->NameWorker;

        cout<<"Enter House Working : ";

        cin>>W->HourWorking;

        cout<<"Enter Pay : ";

        cin>>W->Pay;

        cout<<"Enter Date Enter ( Day / Month / Year ) : ";

        cin>>W->DateWK.Day>>W->DateWK.Month>>W->DateWK.Year;

        NumWorker++;


    cout<<"\n\n---------------------------------------------------------------------------------------------\n\n";

    system("pause");

    system("cls");

}

//****************************************************************************************************************

void AddMoreWorker(Employ W[])
{
    system("color 0a");

    cout<<"\n\n---------------------------------------------------------------------------------------------\n\n";

    cout<<"\t\t Add Own Worker \n\n";

    cout<<"Enter Number Worker : ";

    int NW;

    cin>>NW;


    for(int i=NumWorker;i<NumWorker+NW;i++)
    {
        cout<<"\n\t\t Row["<<NumWorker+i-3<<"]\n";

        cout<<"Enter Name Worker : ";

        cin>>W[i].NameWorker;

        cout<<"Enter Hour Working : ";

        cin>>W[i].HourWorking;

        cout<<"Enter Pay : ";

        cin>>W[i].Pay;

        cout<<"Enter Date Enter ( Day / Month / Year ) : ";

        cin>>W[i].DateWK.Day>>W[i].DateWK.Month>>W[i].DateWK.Year;

    }NumWorker+=NW;

    cout<<"\n\n---------------------------------------------------------------------------------------------\n\n";

    system("pause");

    system("cls");

}

//****************************************************************************************************************

void DisplayWorker(Employ *W)
{
    system("color 0b");

    cout<<"\n\n---------------------------------------------------------------------------------------------\n\n";

    cout<<"\t\t Display For List Worker \n\n";

    cout<<"\nRow \t Name Worker \t House Working \t Pay \t\t Day \t Month \t Year \n";

    for(int i=0;i<NumWorker;i++)
    {
        cout<<i+1<<" \t ";

        cout<<W->NameWorker<<" \t\t "<<W->HourWorking<<" \t\t "<<W->Pay<<" \t\t ";

        cout<<W->DateWK.Day<<" \t "<<W->DateWK.Month<<" \t "<<W->DateWK.Year<<endl;

        W++;
    }

    cout<<"\n\n---------------------------------------------------------------------------------------------\n\n";

    system("pause");

    system("cls");

}

//****************************************************************************************************************

void ReportWorkerTXT(Employ *W)
{
    system("color 03");

    cout<<"\n\n---------------------------------------------------------------------------------------------\n\n";

    cout<<"\t\t Report List Worker By TXT File \n";

    ofstream ReportWorkerTXT("Report List Worker.txt",ios::out);

    ReportWorkerTXT<<"\nRow \t Name Worker \t House Working \t Pay \t\t Day \t Month \t Year \n";

    for(int i=0;i<NumWorker;i++)
    {
        ReportWorkerTXT<<i+1<<" \t ";

        ReportWorkerTXT<<W->NameWorker<<" \t\t "<<W->HourWorking<<" \t\t "<<W->Pay<<" \t\t ";

        ReportWorkerTXT<<W->DateWK.Day<<" \t "<<W->DateWK.Month<<" \t "<<W->DateWK.Year<<endl;

        W++;
    }

    ReportWorkerTXT<<"\n\n\t\t\tCreate By Mohammad Sadra Boromand";

    cout<<"\t\t Done All Report TXT File";

    cout<<"\n\n---------------------------------------------------------------------------------------------\n\n";

    system("pause");

    system("cls");

}

//****************************************************************************************************************

void ReportWorkerHTML(Employ *W)
{
    system("color 03");

    cout<<"\n\n---------------------------------------------------------------------------------------------\n\n";

    cout<<"\t\t Report List Worker By HTML File \n";

    ofstream ReportWorkerHTML("Report List Worker.html",ios::out);

    //Tag For HTML File

    ReportWorkerHTML<<"<html> \n\t<head> \n\t<title> Report List Worker HTML File </title> \n\t</head> \n<body> \n<pre>";

    ReportWorkerHTML<<"<h2>";

    ReportWorkerHTML<<"\n<p align='center'><font color='gold'> Report List Worker HTML File </font><br><br>";

    //Tag For HTML File

    ReportWorkerHTML<<"\nRow \t Name Worker \t House Working \t Pay \t\t Day \t Month \t Year \n";

    for(int i=0;i<NumWorker;i++)
    {
        ReportWorkerHTML<<"\n<font color='red'>";

        ReportWorkerHTML<<i+1<<" \t ";

        ReportWorkerHTML<<W->NameWorker<<" \t\t "<<W->HourWorking<<" \t\t "<<W->Pay<<" \t\t ";

        ReportWorkerHTML<<W->DateWK.Day<<" \t "<<W->DateWK.Month<<" \t "<<W->DateWK.Year<<"<br>";

        W++;
    }

    //Tag For HTML File

    ReportWorkerHTML<<"\n\n<font color='gray'>Create By Mohammad Sadra Boromand</font>";

    ReportWorkerHTML<<"\n</font>";

    ReportWorkerHTML<<"\n</p> \n</h2> \n</pre> \n</body> \n</html>";

    //Tag For HTML File

    cout<<"\t\t Done All Report HTML File";

    cout<<"\n\n---------------------------------------------------------------------------------------------\n\n";

    system("pause");

    system("cls");

}

//****************************************************************************************************************

void DisplayWandM(Employ *W,Shop *M)
{
    system("color 0b");

    cout<<"\n\n---------------------------------------------------------------------------------------------\n\n";

    cout<<"\t\t Display For List Worker and Marker \n\n";

    cout<<"\nRow \t NameObj \t Number \t Serial \t Buy \t Sell \t Day \t Month \t Year \n";

    for(int i=0;i<NumShop;i++)
    {
        cout<<i+1<<" \t "<<M->NameObj<<" \t\t "<<M->Number<<" \t\t ";

        cout<<M->Serial<<" \t\t "<<M->Buy<<" \t "<<M->Sell<<" \t ";

        cout<<M->DateE.Day<<" \t "<<M->DateE.Month<<" \t "<<M->DateE.Year<<" \t ";

        cout<<endl;

        M++;
    }

    cout<<endl;
    cout<<"_______________________________________________________________________________________\n\n";

    cout<<"\nRow \t Name Worker \t House Working \t Pay \t\t Day \t Month \t Year \n";

    for(int i=0;i<NumWorker;i++)
    {
        cout<<i+1<<" \t ";

        cout<<W->NameWorker<<" \t\t "<<W->HourWorking<<" \t\t "<<W->Pay<<" \t\t ";

        cout<<W->DateWK.Day<<" \t "<<W->DateWK.Month<<" \t "<<W->DateWK.Year<<endl;

        W++;
    }

    cout<<"\n\n---------------------------------------------------------------------------------------------\n\n";

    system("pause");

    system("cls");
}

//****************************************************************************************************************

void ReportWandMTXT(Employ *W,Shop *M)
{
    system("color 03");

    cout<<"\n\n---------------------------------------------------------------------------------------------\n\n";

    cout<<"\t\t Report List Worker and Marker TXT File \n";

    ofstream ReportWandM("Report Worker and Market.txt",ios::out);

    ReportWandM<<"\nRow \t NameObj \t Number \t Serial \t Buy \t Sell \t Day \t Month \t Year \n";

    for(int i=0;i<NumShop;i++)
    {
        ReportWandM<<i+1<<" \t "<<M->NameObj<<" \t\t "<<M->Number<<" \t\t ";

        ReportWandM<<M->Serial<<" \t\t "<<M->Buy<<" \t "<<M->Sell<<" \t ";

        ReportWandM<<M->DateE.Day<<" \t "<<M->DateE.Month<<" \t "<<M->DateE.Year<<endl;

        M++;
    }

    ReportWandM<<endl;
    ReportWandM<<"_______________________________________________________________________________________\n\n";
    ReportWandM<<endl;

    ReportWandM<<"\nRow \t Name Worker \t House Working \t Pay \t\t Day \t Month \t Year \n";

    for(int i=0;i<NumWorker;i++)
    {
        ReportWandM<<i+1<<" \t ";

        ReportWandM<<W->NameWorker<<" \t\t "<<W->HourWorking<<" \t\t "<<W->Pay<<" \t\t ";

        ReportWandM<<W->DateWK.Day<<" \t "<<W->DateWK.Month<<" \t "<<W->DateWK.Year<<endl;

        W++;
    }

    ReportWandM<<"\n\n\t\t\tCreate By Mohammad Sadra Boromand";

    cout<<"\t Done All Report List Worker and Marker TXT File";

    cout<<"\n\n---------------------------------------------------------------------------------------------\n\n";

    system("pause");

    system("cls");
}

//****************************************************************************************************************

void ReportWandMHTML(Employ *W,Shop *M)
{
    system("color 03");

    cout<<"\n\n---------------------------------------------------------------------------------------------\n\n";

    cout<<"\t\t Report List Worker and Marker HTML File \n";

    ofstream ReportWandM("Report Worker and Market.html",ios::out);

    //Tag For HTML

    ReportWandM<<"<html> \n\t<head> \n\t<title> Report List Worker and Marker HTML File </title> \n\t</head> \n<body> \n<pre>";

    ReportWandM<<"\n<h2>";

    ReportWandM<<"\n<p align='center'><font color='gold'> Report List Worker and Marker HTML File </font><br><br>";

    ReportWandM<<"\n<font color='blue'>";

    //Tag For HTML

    ReportWandM<<"\nRow \t NameObj \t Number \t Serial \t Buy \t Sell \t Day \t Month \t Year <br>";

    for(int i=0;i<NumShop;i++)
    {
        ReportWandM<<i+1<<" \t "<<M->NameObj<<" \t\t "<<M->Number<<" \t\t ";

        ReportWandM<<M->Serial<<" \t\t "<<M->Buy<<" \t "<<M->Sell<<" \t ";

        ReportWandM<<M->DateE.Day<<" \t "<<M->DateE.Month<<" \t "<<M->DateE.Year<<"<br>";

        M++;

        ReportWandM<<"<br>";
    }

    ReportWandM<<endl;
    ReportWandM<<"_______________________________________________________________________________________\n\n";
    ReportWandM<<endl;

    ReportWandM<<"\nRow \t Name Worker \t House Working \t Pay \t\t Day \t Month \t Year <br>";

    for(int i=0;i<NumWorker;i++)
    {
        ReportWandM<<i+1<<" \t ";

        ReportWandM<<W->NameWorker<<" \t\t "<<W->HourWorking<<" \t\t "<<W->Pay<<" \t\t ";

        ReportWandM<<W->DateWK.Day<<" \t "<<W->DateWK.Month<<" \t "<<W->DateWK.Year<<"<br>";

        W++;

        ReportWandM<<"<br>";
    }

    //Tag For HTML

    ReportWandM<<"\n\n<font color='gray'>Create By Mohammad Sadra Boromand</font>";

    ReportWandM<<"\n</font> \n</p> \n</h2>";

    ReportWandM<<"\n</pre> \n</body> \n<html>";

    //Tag For HTML

    cout<<"\tDone All Report List Worker and Marker HTML File";

    cout<<"\n\n---------------------------------------------------------------------------------------------\n\n";

    system("pause");

    system("cls");
}

//****************************************************************************************************************
