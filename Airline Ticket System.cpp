#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

void mainMenu();


class Management
{
    public:
            Management()
            {
                mainMenu();
            }

    
};


class Details
{
    public:
        static string name,gender;
        int phoneNo;
        int age;
        string add;
        static int cId;
        char arr[100];
        
        void information()
        {
            cout<<"\n Enter the customer ID:";
            cin>>cId;
            cout<<"\n Enter the name :";
            cin>>name;
            cout<<"\n Enter the age: ";
            cin>>age;
            cout<<"\n Addrress: ";
            cin>>add;
            cout<<"\n Enter the gender:";
            cin>>gender;
            cout<<"\nYour details are saved with us:\n"<<endl;
            
        }
    
};

int Details:: cId;
string Details::name;
string Details::gender;


class Registration
{

    public:
        static int choice;
        int choice1;
        int back;
        static float charges;
        
        void flights()
        {
            string flightN[]={"Dubai","Canada","UK","USA","Austarlia","Europe"};
            
            for(int a=0;a<6;a++)
            {
                cout<<(a+1)<<".flight to"<<flightN[a]<<endl;
                
            }
            cout<<"\n Welcome to the Airlines!"<<endl;
            cout<<"Press their number of the country of which you want to book the flight:";
            cin>>choice1;
            
            switch(choice1)
            {
                case 1:
                    {
                        cout<<"________________Welcome to Dubai Emirates__________\n"<<endl;
                        
                        cout<<"Your comfort is our priority.Enjoy the journey!"<<endl;
                        
                        cout<<"Following are the flights \n"<<endl;
                        
                        cout<<"1. DUB - 495"<<endl;
                        cout<<"\t08-01-2022 8:00AM 10hrs Rs. 14000"<<endl;
                        
                        cout<<"1. DUB - 658"<<endl;
                        cout<<"\t09-01-2022 4:00AM 12hrs Rs. 10000"<<endl;
                        
                        cout<<"1. DUB - 498"<<endl;
                        cout<<"\t11-01-2022 11:00AM 11hrs Rs. 9000"<<endl;
                        
                        cout<<"\nSelect the flight you want to book:";
                        cin>>choice1;
                        
                        if(choice1==1)
                        {
                            charges=14000;
                            cout<<"\nYou have successfully booked the flight DUB-498"<<endl;
                            cout<<"You can go back to menu and take the ticket"<<endl;
                            
                        }
                        else if(choice1==2)
                        {
                            charges=10000;
                            cout<<"\nYou have successfully booked the flight DUB-658"<<endl;
                            cout<<"You can go back to menu and take the ticket"<<endl;
                        }
                        else if(choice1==3)
                        {
                            charges=9000;
                            cout<<"\nYou have successfully booked the flight DUB-508"<<endl;
                            cout<<"You can go back to menu and take the ticket"<<endl;
                        }
                        else
                        {
                            cout<<"Invalid input,shifting to the previous menu"<<endl;
                            flights();
                        }
                        
                        cout<<"Press any key to go back to the main menu:"<<endl;
                        cin>>back;
                        
                        if(back==1)
                        {
                            mainMenu();
                            
                        }
                        else
                        {
                            mainMenu();
                        }
                    }
                case 2:
                {
                    cout<<"________________Welcome to Canadian Airlines________\n"<<endl;
                    
                    cout<<"Your comfort is our priority.Enjoy the journey!"<<endl;
                        
                        cout<<"Following are the flights \n"<<endl;
                        
                        cout<<"1. CA - 198"<<endl;
                        cout<<"\t09-01-2022 2:00PM 20hrs Rs. 34000"<<endl;
                        
                        cout<<"1. CA - 158"<<endl;
                        cout<<"\t11-01-2022 6:00AM 23hrs Rs. 29000"<<endl;
                        
                        cout<<"1. CA - 208"<<endl;
                        cout<<"\t14-01-2022 12:00AM 21hrs Rs. 40000"<<endl;
                        
                        cout<<"\nSelect the flight you want to book:";
                        cin>>choice1;
                        
                        if(choice1==1)
                        {
                            charges=34000;
                            cout<<"\nYou have successfully booked the flight CA -198"<<endl;
                            cout<<"You can go back to menu and take the ticket"<<endl;
                            
                        }
                        else if(choice1==2)
                        {
                            charges=29000;
                            cout<<"\nYou have successfully booked the flight CA-158"<<endl;
                            cout<<"You can go back to menu and take the ticket"<<endl;
                        }
                        else if(choice1==3)
                        {
                            charges=40000;
                            cout<<"\nYou have successfully booked the flight CA-208"<<endl;
                            cout<<"You can go back to menu and take the ticket"<<endl;
                        }
                        else
                        {
                            cout<<"Invalid input,shifting to the previous menu"<<endl;
                            flights();
                        }
                        
                        cout<<"Press any key to go back to the main menu:"<<endl;
                        cin>>back;
                        
                        if(back==1)
                        {
                            mainMenu();
                            
                        }
                        else
                        {
                            mainMenu();
                        }
                }//end of case2
                
                case 3:
                {
                  cout<<"________________Welcome to UK Airways________\n"<<endl;
                    
                   cout<<"Your comfort is our priority.Enjoy the journey!"<<endl;
                        
                        cout<<"Following are the flights \n"<<endl;
                        
                        cout<<"1. UK - 798"<<endl;
                        cout<<"\t12-01-2022 10:00AM 14hrs Rs. 44000"<<endl;
                        
                        cout<<"\nSelect the flight you want to book:";
                        cin>>choice1;
                        
                        if(choice1==1)
                        {
                            charges=44000;
                            cout<<"\nYou have successfully booked the flight UK-798"<<endl;
                            cout<<"You can go back to menu and take the ticket"<<endl;
                            
                        }
                        else
                        {
                            cout<<"Invalid input,shifting to the previous menu"<<endl;
                            flights();
                        }
                        
                        cout<<"Press any key to go back to the main menu:"<<endl;
                        cin>>back;
                        
                        if(back==1)
                        {
                            mainMenu();
                            
                        }
                        else
                        {
                            mainMenu();
                        } 
                }//case 3
                
                case 4:
                {
                   cout<<"________________Welcome to USA Airlines________\n"<<endl;
                    
                    cout<<"Your comfort is our priority.Enjoy the journey!"<<endl;
                        
                        cout<<"Following are the flights \n"<<endl;
                        
                        cout<<"1. US - 567"<<endl;
                        cout<<"\t10-01-2022 9:00AM 22hrs Rs. 37000"<<endl;
                        
                        cout<<"1. DUB - 658"<<endl;
                        cout<<"\t09-01-2022 4:00AM 12hrs Rs. 39000"<<endl;
                        
                        cout<<"1. DUB - 508"<<endl;
                        cout<<"\t11-01-2022 11:00AM 11hrs Rs. 42000"<<endl;
                        
                        cout<<"\nSelect the flight you want to book:";
                        cin>>choice1;
                        
                        if(choice1==1)
                        {
                            charges=44000;
                            cout<<"\nYou have successfully booked the flight UK-798"<<endl;
                            cout<<"You can go back to menu and take the ticket"<<endl;
                            
                        }
                        else
                        {
                            cout<<"Invalid input,shifting to the previous menu"<<endl;
                            flights();
                        }
                        
                        cout<<"Press any key to go back to the main menu:"<<endl;
                        cin>>back;
                        
                        if(back==1)
                        {
                            mainMenu();
                            
                        }
                        else
                        {
                            mainMenu();
                        } 
                }//case 4
                case 5:
                {
                    cout<<"________________Welcome to Australian Airlines________\n"<<endl;
                    
                    cout<<"Your comfort is our priority.Enjoy the journey!"<<endl;
                        
                        cout<<"Following are the flights \n"<<endl;
                        
                        cout<<"1. As - 698"<<endl;
                        cout<<"\t18-01-2022 9:00AM 10hrs Rs. 44000"<<endl;
                        
                        cout<<"1. As - 158"<<endl;
                        cout<<"\t19-01-2022 4:00AM 12hrs Rs. 34000"<<endl;
                        
                        cout<<"1. As - 708"<<endl;
                        cout<<"\t17-01-2022 10:00AM 21hrs Rs. 42000"<<endl;
                        
                        cout<<"\nSelect the flight you want to book:";
                        cin>>choice1;
                        
                        if(choice1==1)
                        {
                            charges=44000;
                            cout<<"\nYou have successfully booked the flight UK-798"<<endl;
                            cout<<"You can go back to menu and take the ticket"<<endl;
                            
                        }
                        if(choice1==2)
                        {
                            charges=34000;
                            cout<<"\nYou have successfully booked the flight UK-798"<<endl;
                            cout<<"You can go back to menu and take the ticket"<<endl;
                            
                        }
                        if(choice1==1)
                        {
                            charges=42000;
                            cout<<"\nYou have successfully booked the flight UK-798"<<endl;
                            cout<<"You can go back to menu and take the ticket"<<endl;
                            
                        }
                        else
                        {
                            cout<<"Invalid input,shifting to the previous menu"<<endl;
                            flights();
                        }
                        
                        cout<<"Press any key to go back to the main menu:"<<endl;
                        cin>>back;
                        
                        if(back==1)
                        {
                            mainMenu();
                            
                        }
                        else
                        {
                            mainMenu();
                        }
                }//case 5
                case 6:
                {
                    cout<<"________________Welcome to European Airlines_________________\n"<<endl;
                        
                        cout<<"Your comfort is our priority.Enjoy the journey!"<<endl;
                        
                        cout<<"Following are the flights \n"<<endl;
                        
                        cout<<"1. EU - 898"<<endl;
                        cout<<"\t02-01-2022 2:00AM 18hrs Rs.36000"<<endl;
                        
                        cout<<"1. EU - 958"<<endl;
                        cout<<"\t03-01-2022 6:00AM 19hrs Rs. 37000"<<endl;
                        
                        cout<<"1. EU - 608"<<endl;
                        cout<<"\t12-01-2022 10:00AM 20hrs Rs. 31000"<<endl;
                        
                        cout<<"\nSelect the flight you want to book:";
                        cin>>choice1;
                        
                        if(choice1==1)
                        {
                            charges=36000;
                            cout<<"\nYou have successfully booked the flight EU-898"<<endl;
                            cout<<"You can go back to menu and take the ticket"<<endl;
                            
                        }
                        else if(choice1==2)
                        {
                            charges=37000;
                            cout<<"\nYou have successfully booked the flight EU-958"<<endl;
                            cout<<"You can go back to menu and take the ticket"<<endl;
                        }
                        else if(choice1==3)
                        {
                            charges=31000;
                            cout<<"\nYou have successfully booked the flight EU-608"<<endl;
                            cout<<"You can go back to menu and take the ticket"<<endl;
                        }
                        else
                        {
                            cout<<"Invalid input,shifting to the previous menu"<<endl;
                            flights();
                        }
                        
                        cout<<"Press any key to go back to the main menu:"<<endl;
                        cin>>back;
                        
                        if(back==1)
                        {
                            mainMenu();
                            
                        }
                        else
                        {
                            mainMenu();
                        }
                }//case 6
                default:
                {
                    cout<<"Invalid input,Shifting you to the main menu!"<<endl;
                    mainMenu();
                    break;
                }
            }
        }
    
};

float Registration:: charges;
int Registration:: choice;


class ticket: public Registration,Details
{
    public:
            void Bill()
            {
                string destination="";
                ofstream outf("records.txt");
                {
                    outf<<"__________________XYZ Airlines__________"<<endl;
                    outf<<"_______________Ticket____________________"<<endl;
                    outf<<"_________________________________________"<<endl;
                    
                    outf<<"Customer ID: "<<Details::cId<<endl;
                    outf<<"Customer Name: "<<Details::name<<endl;
                    outf<<"Customer Gender: "<<Details::gender<<endl;
                    outf<<"\tDescription: "<<endl<<endl;
                    
                    if(Registration::choice==1)
                    {
                        destination="Dubai";
                    }
                    if(Registration::choice==2)
                    {
                        destination="Canada";
                    }
                    if(Registration::choice==3)
                    {
                        destination="UK";
                    }
                    if(Registration::choice==4)
                    {
                        destination="USA";
                    }
                    if(Registration::choice==5)
                    {
                        destination="Australia";
                    }
                    if(Registration::choice==6)
                    {
                        destination="Europe";
                    }
                    outf<<"Destination\t\t"<<destination<<endl;
                    outf<<"Flight cost:\t\t"<<Registration::charges<<endl;
                    
                }
                outf.close();
            }
            void dispBill()
            {
                ifstream ifs("record.txt");
                {
                    if(ifs)
                    {
                        cout<<"File error!"<<endl;
                    }
                    while(!ifs.eof())
                    {
                        ifs.getline(arr,100);
                        cout<<arr<<endl;
                    }
                }
                ifs.close();
            }
};


void mainMenu()
{
    int lchoice;
    int schoice;
    int back;
    
    
    cout<<"\t             XYZ Airlines   \n"<<endl;
    cout<<"\t______________Main menu______"<<endl;
    cout<<"\t______________________________"<<endl;
    cout<<"\t|\t\t\t\t\t\t\t|"<<endl;
    
    cout<<"\t\t Press 1 to Add the customer Details   \t|"<<endl;
    cout<<"\t\t Press 2 for Flight Registration       \t|"<<endl;
    cout<<"\t\t Press 3 for Ticket and Charges        \t|"<<endl;
    cout<<"\t\t Press 4 to Exit                       \t|"<<endl;
    cout<<"\t\t*--------------------------------------*"<<endl;
    cout<<"\t___________________________________________"<<endl;
    
    cout<<"Enter the choice: ";
    cin>>lchoice;
    
    Details d;
    Registration r;
    ticket t;
    
    switch(lchoice)
    {
        case 1:
            {
                cout<<"_____________Customers____________\n";
                d.information();
                cout<<"Press 1 to go back to the Main Menu ";
                cin>>back;
                
                if(back==1)
                {
                    mainMenu();
                    
                }
                else{
                    mainMenu();
                }
                break;
            }
            
        case 2:
        {
            cout<<"_______Book a flight using this system________\n"<<endl;
            r.flights();
            break;
            
        }
        case 3:
        {
        cout<<"___________GET YOUR TICKET___________\n"<<endl;
        t.Bill();
        
        cout<<"Your ticket is printed ,you can collect it \n"<<endl;
        cout<<"Press 1 to display your ticket ";
        
        cin>>back;
        
            if(back==1)
            {
                t.dispBill();
                cout<<"Press any key to go backto main menu:";
                cin>>back;
                if(back==1)
                {
                    mainMenu();
                }
                else
                {
                    mainMenu();
                }
            }
            else
            {
                mainMenu();
            }
            break;
            
        }
        case 4:
        {
            cout<<"\n\n\t____________Thank-you_______"<<endl;
            break;
        }
        
        default:
        {
            cout<<"Invalid input,Please try again!\n"<<endl;
            mainMenu();
            break;
        }
            
            
            
            
    }
    
    
}


int main()
{
    Management Mobj;
    return 0;
    
}