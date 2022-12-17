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
    static string name, gender;
    int phoneNO;
    int age;
    string add;
    static int cID;
    char arr[100];
    
     void information()
     {
        cout<<"\nEnter the customer ID :";
        cin>>cID;
        cout<<"\nEnter the name :";
        cin>>name;
        cout<<"\nEnter the age :";
        cin>>age;
        cout<<"\n Address :";
        cin>>add;
        cout<<"\n Gender :";
        cin>>gender;
        cout<<"Your details are saved with us \n"<<endl;
     }
};

int Details::cID;
string Details::name;
string Details::gender;

class registration
{
    public:
    static int choice;
    int choice1;
    int back;
    static float charges;
    
    void flights()
    {
        string flightN[]={"Dubai","Canada","UK","USA","Australia","Europe"};
        for(int a=0;a<6;a++)
        {
            cout<<(a+1)<<".flight to"<<flightN[a]<<endl;
        }
        cout<<"\n Welcome to the Airlines"<<endl;
        cout<<"Press the number of country of which you want to book the flight";
        cin>>choice;
        switch (choice)
        {
           case 1:
          {
              cout<<"_______________________________Welcome to Dubai Emirates__________________\n"<<endl;
              cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
             cout<<"following are the flights\n"<<endl;
             cout<<"1. DUB - 498"<<endl;
             cout<<"\t 20-07-2022 8:04AM 10hrs. Rs. 24000"<<endl;
             cout<<"2. DUB - 786"<<endl;
             cout<<"\t 20-07-2022 8:04AM 10hrs. Rs. 22000"<<endl;
              cout<<"3. DUB - 345"<<endl;
             cout<<"\t 20-07-2022 8:04AM 10hrs. Rs. 18000"<<endl;
           
              cout<<"\nSelect the flight you want to book :";
              cin>>choice1;

             if(choice1==1)
              {
                 charges=24000; 
                 cout<<"\nYou have successfully booked the flight DUB -498"<<endl;
                  cout<<"You can go back to menu and take the ticket"<<endl;
                }
           else if(choice1==2)
           {
           charges=22000;
            cout<<"\nYou have successfully booked the flight DUB -786"<<endl;
            cout<<"You can go back to menu and take the ticket"<<endl;
           }
            else if(choice1==3)
           {
           charges=18000;
            cout<<"\nYou have successfully booked the flight DUB -345"<<endl;
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
           mainMenu();
           else
           mainMenu();
           
            } 
             case 2:
                   {
                     cout<<"_______________________________Welcome to Canada Airlines__________________\n"<<endl;
                      cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
                       cout<<"following are the flights\n"<<endl;
                        cout<<"1. CAD - 198"<<endl;
                         cout<<"\t 20-07-2022 4:04AM 10hrs. Rs. 24000"<<endl;
                           cout<<"2. CAD - 246"<<endl;
                            cout<<"\t 20-07-2022 6:04AM 10hrs. Rs. 22000"<<endl;
                             cout<<"\t 20-07-2022 8:04AM 10hrs. Rs. 18000"<<endl;
           
                              cout<<"\nSelect the flight you want to book :";
                                    cin>>choice1;

                       if(choice1==1)
                          {
                           charges=24000; 
                           cout<<"\nYou have successfully booked the flight CAD-198"<<endl;
                            cout<<"You can go back to menu and take the ticket"<<endl;
                          }
               else if(choice1==2)
               {
                 charges=22000;
                 cout<<"\nYou have successfully booked the flight CAD-246"<<endl;
                 cout<<"You can go back to menu and take the ticket"<<endl;
                }
               else if(choice1==3)
           {
             charges=18000;
               cout<<"\nYou have successfully booked the flight CAD -145"<<endl;
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
           mainMenu();
           else
           mainMenu();
           
         } 
            case 3:
          {
                       cout<<"_______________________________Welcome to UK Airlines__________________\n"<<endl;
                           cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
                           cout<<"following are the flights\n"<<endl;
                           cout<<"1. UK - 898"<<endl;
                            cout<<"\t 20-07-2022 7:04AM 10hrs. Rs. 14000"<<endl;
                             cout<<"2. UK - 986"<<endl;
                                cout<<"\t 20-07-2022 6:04AM 10hrs. Rs.11000"<<endl;
                                cout<<"3. UK - 145"<<endl;
                                 cout<<"\t 20-07-2022 4:04AM 10hrs. Rs. 17000"<<endl;
                                   cout<<"\nSelect the flight you want to book :";
                                       cin>>choice1;

                                      if(choice1==1)
                                         {
                                         charges=14000; 
                                           cout<<"\nYou have successfully booked the flight DUB -498"<<endl;
                                             cout<<"You can go back to menu and take the ticket"<<endl;
                                        }
                                     else if(choice1==2)
                                 {
                                    charges=11000;
                                    cout<<"\nYou have successfully booked the flight DUB -786"<<endl;
                                      cout<<"You can go back to menu and take the ticket"<<endl;
                                  }
                                 else if(choice1==3)
                                   {
                                     charges=17000;
                                     cout<<"\nYou have successfully booked the flight DUB -345"<<endl;
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
           mainMenu();
           else
           mainMenu();
           
         } 
           case 4:
          {
              cout<<"_______________________________Welcome to USA Airlines__________________\n"<<endl;
              cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
             cout<<"following are the flights\n"<<endl;
             cout<<"1. USA- 558"<<endl;
             cout<<"\t 20-07-2022 8:04AM 10hrs. Rs. 24000"<<endl;
             cout<<"2. USA - 666"<<endl;
             cout<<"\t 20-07-2022 8:04AM 10hrs. Rs. 22000"<<endl;
              cout<<"3. USA - 655"<<endl;
             cout<<"\t 20-07-2022 8:04AM 10hrs. Rs. 18000"<<endl;
           
              cout<<"\nSelect the flight you want to book :";
              cin>>choice1;

             if(choice1==1)
              {
                 charges=24000; 
                 cout<<"\nYou have successfully booked the flight DUB -498"<<endl;
                  cout<<"You can go back to menu and take the ticket"<<endl;
                }
           else if(choice1==2)
           {
           charges=22000;
            cout<<"\nYou have successfully booked the flight DUB -786"<<endl;
            cout<<"You can go back to menu and take the ticket"<<endl;
           }
            else if(choice1==3)
           {
           charges=18000;
            cout<<"\nYou have successfully booked the flight DUB -345"<<endl;
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
           mainMenu();
           else
           mainMenu();
           
         }
          case 5:
          {
              cout<<"_______________________________Welcome to Australia Airlines__________________\n"<<endl;
              cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
             cout<<"following are the flights\n"<<endl;
             cout<<"1. AUS - 498"<<endl;
             cout<<"\t 20-07-2022 6:04AM 10hrs. Rs. 28000"<<endl;
             cout<<"2. AUS - 786"<<endl;
             cout<<"\t 20-07-2022 3:04AM 10hrs. Rs. 23000"<<endl;
              cout<<"3. AUS - 345"<<endl;
             cout<<"\t 20-07-2022 5:04AM 10hrs. Rs. 11000"<<endl;
           
              cout<<"\nSelect the flight you want to book :";
              cin>>choice1;

             if(choice1==1)
              {
                 charges=28000; 
                 cout<<"\nYou have successfully booked the flight DUB -498"<<endl;
                  cout<<"You can go back to menu and take the ticket"<<endl;
                }
           else if(choice1==2)
           {
           charges=23000;
            cout<<"\nYou have successfully booked the flight DUB -786"<<endl;
            cout<<"You can go back to menu and take the ticket"<<endl;
           }
            else if(choice1==3)
           {
           charges=11000;
            cout<<"\nYou have successfully booked the flight DUB -345"<<endl;
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
           mainMenu();
           else
           mainMenu();
           
         } 
        case 6:
          {
              cout<<"_______________________________Welcome to Europe__________________\n"<<endl;
              cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
             cout<<"following are the flights\n"<<endl;
             cout<<"1. EUP - 558"<<endl;
             cout<<"\t 20-07-2022 8:04AM 10hrs. Rs. 27000"<<endl;
             cout<<"2. EUP - 636"<<endl;
             cout<<"\t 20-07-2022 8:04AM 10hrs. Rs. 23000"<<endl;
              cout<<"3. EUP - 653"<<endl;
             cout<<"\t 20-07-2022 8:04AM 10hrs. Rs. 20000"<<endl;
           
              cout<<"\nSelect the flight you want to book :";
              cin>>choice1;

             if(choice1==1)
              {
                 charges=27000; 
                 cout<<"\nYou have successfully booked the flight DUB -498"<<endl;
                  cout<<"You can go back to menu and take the ticket"<<endl;
                }
           else if(choice1==2)
           {
           charges=23000;
            cout<<"\nYou have successfully booked the flight DUB -786"<<endl;
            cout<<"You can go back to menu and take the ticket"<<endl;
           }
            else if(choice1==3)
           {
           charges=20000;
            cout<<"\nYou have successfully booked the flight DUB -345"<<endl;
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
           mainMenu();
           else
           mainMenu();
           
         } 
        default :
        {
            cout<<"Invalid input,shifting you to the main menu!"<<endl;
            mainMenu();
            break;
        }
        }
        
    }
};
float registration::charges;
int registration::choice;
  
class ticket : public registration, public Details
{
             public:
                     void bill()
                     {
                            string destination=" ";
                            ofstream outf("record.txt");
                            {
                                outf<<"______________Faiz Airlines_____________"<<endl;
                                outf<<"__________________Ticket______________"<<endl;
                                outf<<"_______________________________________"<<endl;
                                //cout<<Details::cID<<" "<<Details::add<<" ";
                                outf<<"Customer ID:"<<Details::cID<<endl;
                                outf<<"Customer Name:"<<Details::name<<endl;
                                outf<<"Decription"<<Details::add<<endl;

                                        if(registration::choice==1)
                                       {
                                             destination="Dubai";
                                       }

                                       else if(registration::choice==2)
                                       {
                                             destination ="Canada";
                                       }
                                        else if(registration::choice==3)
                                       {
                                             destination ="UK";
                                       }
                                        else if(registration::choice==4)
                                       {
                                             destination ="USA";
                                       }
                                        else if(registration::choice==5)
                                       {
                                             destination ="Australia";
                                       }
                                        else if(registration::choice==6)
                                       {
                                             destination ="Europe";
                                       }
                                       
                                       cout<<"Destination\t\t"<<destination<<endl;
                                       cout<<"Flight cost :\t\t"<<registration::charges<<endl;
                            }
                            outf.close();

                     }
                     void disBill()
                     {
                        ifstream ifs("records.txt");
                        {
                            /*   if(!ifs)
                               {
                                    cout<<"File error!"<<endl;
                               }
                               while(!ifs.eof())
                               {
                                ifs.getline(arr,100);
                                cout<<arr<<endl;
                               }
                               */
                        }
                        ifs.close();
                     }

};
void mainMenu()
{
    int Lchoice;
    int Schoice;
    int back;
    cout<<"\t                FaizAirlines   \n";
    cout<<"\t_______________Main Menu__________"<<endl;
    cout<<"____________________________________________________"<<endl;
  //  cout<<"\t|\t\t\t\t\t\t|"<<endl;
    cout<<"\t|\t press 1 to add the customer Details   \t|"<<endl;
    cout<<"\t|\t press 2 for flight Registration       \t|"<<endl;
    cout<<"\t|\t press 3 for Ticket and Charges        \t|"<<endl;
    cout<<"\t|\t press 4 to exit                       \t|"<<endl;
  //  cout<<"\t|\t\t\t\t\t|"<<endl;
    cout<<"_____________________________________________________"<<endl;

 cout<<"Enter the choice:";
cin>>Lchoice;
 Details d;
 registration r;
 ticket t;
 switch(Lchoice)
 {
    case 1:
    {
     cout<<"_______________customers_____________\n"<<endl;
     d.information();
      cout<<"press any key to go back to Main menu";
      cin>>back;
      if(back==1){
       mainMenu();
      }
      else{
        mainMenu();
      }
       break;
     }
       case 2:
       {
                cout<<"___________Book a flight using this system____________\n"<<endl;
                r.flights();
                break;
        }
       case 3:
       {
        cout<<"__________GET YOUT TICKET_________\n"<<endl;
        t.bill();
        cout<<"Your ticket is printed, you can collect it \n"<<endl;
        cout<<"press 1 to display your ticket ";
        cin>>back;
        if(back==1)
        {
        t.disBill();
        cout<<"press any key to go back to main menu:";
        cin>>back;
        if(back==1)
        {
            mainMenu();
        }
        else
        mainMenu();
        }
        else
         mainMenu();
        break;
       }
       case 4:
        {
            cout<<"\n\n\t____________Thank-you_______"<<endl;
            break;
        }
        default :
        {
            cout<<"Invalid input, Please try again!\n"<<endl;
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