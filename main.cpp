#include <iostream>
#include<string.h>
using namespace std;

class birthday
{
public:
    string day;
    string month;
    int year;
public:
    void get()
    {
        cout<<"enter day"<<endl;
        cin>>day;
        cout<<"enter month"<<endl;
        cin>>month;
        cout<<"enter year"<<endl;
        cin>>year;
    }
    void display()
    {
        cout<<"day= "<<day<<endl;
        cout<<"month= "<<month<<endl;
        cout<<"year= "<<year<<endl;
    }
};
int main()
{


birthday b,*objp;

objp=&b;
objp->get();
objp->display();

return 0;
}














































































/*
  void Main_menu(){
 cout<<"Employee management system"<<endl;
 cout<<"1. Admin   "<<endl;
 cout<<"2. Manager"<<endl;
 cout<<"3. Employee"<<endl;
 cout<<"0. Exit"<<endl;
 cout<<"########################################################"<<endl;
}

struct stru_employee{
    int id;
    char name[20],dip[20];
    string date ;
    float sal;

    }e[100];

class admin{
   public:  int k,b,c,l,id2,id3,id4,id5;
            string date2,date3;
            char name1[20],d[20];

         void fun1()
        {
                 c1:  cout<<"You are admin:"<<endl;
                      cout<<"You can do the following things:"<<endl;
                      cout<<"1. Add new records:"<<endl;
                      cout<<"2. Display employee details using employee id:"<<endl;
                      cout<<"3. Update record:"<<endl;
                      cout<<"0. Exit (it will take to you in main menu):"<<endl;
                      cout<<"**********************************************"<<endl;

                      cout<<"Enter your choice:"<<endl;
                      cin>>k;

                   if(k==1)
                  {     cout<<"Enter the no of employees data you want to enter:\t"<<endl;
                        cin>>b;

                       for(c=0;c<b;c++)
                    {    cout<<"Enter details of employee:"<<c+1<<endl;
                         cout<<"==================================================================="<<endl;

                         cout<<"Enter name of employee:"<<c+1<<endl;
                         cin>>e[c].name;
                         cout<<"Enter  Id of employee:"<<c+1<<endl;
                         cin>>e[c].id;
                         cout<<"Enter date of birth of employee:"<<c+1<<endl;
                         cin>>e[c].date;
                         cout<<"Enter salary of employee:"<<c+1<<endl;
                         cin>>e[c].sal;
                         cout<<"Enter department of employee:"<<c+1<<endl;
                         cin>>e[c].dip;
                         cout<<"==================================================================="<<endl;

                     }
                    goto c1;

                  }
                 else if(k==2)
                  {   cout<<"enter your id"<<endl;
                      cin>>id5;

                     for(c=0;c<b;c++)
                     {
                         if(id5==e[c].id)
                        {
                         cout<<"Details of employee:"<<c+1<<endl;
                         cout<<"==================================================================="<<endl;
                          cout<<"Your name:"<<e[c].name<<endl;
                          cout<<"Your ID:"<<e[c].id<<endl;
                          cout<<"Your salary:"<<e[c].sal<<endl;
                          cout<<"Your date of birth:"<<e[c].date<<endl;
                          cout<<"==================================================================="<<endl;
                        }
                      }
                           goto c1;

                  }
                  else if(k==3)
                {
                    cout<<"1.For update a name:"<<endl;
                    cout<<"2. For update id:"<<endl;
                    cout<<"3. To update date of birth"<<endl;
                    cout<<"Enter you choice"<<endl;
                    cin>>l;

                        if(l==1)
                       {
                              cout<<"Enter your id:"<<endl;
                              cin>>id2;
                            for(c=0;c<b;c++)
                           {
                                if(id2==e[c].id)
                               {
                                cout<<"Enter your name to change:"<<endl;
                                cin>>name1;

                                 strcpy(d,e[c].name);
                                 strcpy(e[c].name,name1);
                                 cout<<endl;
                                 cout<<"Updated name:"<<e[c].name<<endl;
                                 cout<<" name removed:"<<d<<endl;
                                 cout<<"==================================================================="<<endl;
                                }

                            } goto c1;
                        }

                        else if(l==2)
                        {
                                 cout<<"ENTER YOUR OLD ID:"<<endl;
                                 cin>>id2;
                             for(c=0;c<b;c++)
                            {
                                if(id2==e[c].id)
                               {
                                 cout<<"ENTER ID YOU WANT TO REPLACE WITH OLD ID :"<<endl;
                                 cin>>id3;
                                 id4=e[c].id;
                                 e[c].id=id3;

                                  cout<<endl;
                                  cout<<" Updated ID:"<<e[c].id<<endl;
                                  cout<<" ID removed:"<<id4<<endl;
                                  cout<<"==================================================================="<<endl;
                               }

                             }goto c1;

                         }

                         else if(l==3)
                         {        cout<<"Enter your id"<<endl;
                                  cin>>id2;
                              for(c=0;c<b;c++)
                             {
                                 if(id2==e[c].id)
                                {
                                  cout<<"Enter date of birth you want to change:"<<endl;
                                  cin>>date2;
                                  date3=e[c].date;
                                  e[c].date=date2;

                                  cout<<endl;
                                  cout<<"Updated Date:"<<e[c].date<<endl;
                                  cout<<" Date removed:"<<date3<<endl;
                                  cout<<"==================================================================="<<endl;
                                 }
                             }
                              goto c1;
                          }
                }

                 else if(k==0)
                {
                    cout<<"thanks for using "<<endl;
                    cout<<"You are in main menu:"<<endl;
                }
        }//this is clossing bracket of function:

};
class manager:public admin
{
       public:int p,q;

        void fun2()
       {
                   c2: cout<<"1. Display employee details by id"<<endl;
                       cout<<"2. Display all employee details"<<endl;
                       cout<<"0. Exit(It will take to you in main menu):"<<endl;

                       cout<<"Enter your choice:"<<endl;
                       cin>>q;

                 if(q==1)
               {
                    cout<<"enter your id"<<endl;
                    cin>>p;

                   for(c=0;c<b;c++)
                  {

                     if(p==e[c].id)
                    {
                       cout<<"Details of employee no:\t"<<c+1<<endl;

                       cout<<"Your name:"<<e[c].name<<endl;
                       cout<<"Your ID:"<<e[c].id<<endl;
                       cout<<"Your salary:"<<e[c].sal<<endl;
                       cout<<"Your date of birth:"<<e[c].date<<endl;
                       cout<<"==================================================================="<<endl;

                    }
                  } goto c2;

               }

                else if(q==2)
               {
                    for(c=0;c<b;c++)
                   {
                        cout<<"Details of employee no:\t"<<c+1<<endl;

                        cout<<"Your name:"<<e[c].name<<endl;
                        cout<<"Your ID:"<<e[c].id<<endl;
                        cout<<"Your salary:"<<e[c].sal<<endl;
                        cout<<"Your date of birth:"<<e[c].date<<endl;
                        cout<<"==================================================================="<<endl;
                    } goto c2;
               }

               else if(q==0)
              {
                  cout<<"thanks for using "<<endl;
                  cout<<"You are in main menu:"<<endl;

               }
        }

};
class Employee:public manager
{
public:
    int a,i;
     void fun3()
     {
       c3:cout<<"1.Display employee details by id"<<endl;
          cout<<"2.Display all employee details"<<endl;
          cout<<"0.Exit (it will take to you in main menu):"<<endl;

          cout<<"Enter your choice:"<<endl;
          cin>>a;

           if(a==1)
          {
            cout<<"enter your id"<<endl;
            cin>>i;

             for(c=0;c<b;c++)
            {
                if(i==e[c].id)
               {
                 cout<<"Details of employee no:\t"<<c+1<<endl;

                 cout<<"Your name:"<<e[c].name<<endl;
                 cout<<"Your ID:"<<e[c].id<<endl;
                 cout<<"Your salary:"<<e[c].sal<<endl;
                 cout<<"Your date of birth:"<<e[c].date<<endl;
                 cout<<"==================================================================="<<endl;

                }
             }goto c3;

           }
            else if(a==2)
           {
              for(c=0;c<b;c++)
             {
                 cout<<"Details of employee no:\t"<<c+1<<endl;

                 cout<<"Your name:"<<e[c].name<<endl;
                 cout<<"Your ID:"<<e[c].id<<endl;
                 cout<<"Your salary:"<<e[c].sal<<endl;
                 cout<<"Your date of birth:"<<e[c].date<<endl;
                 cout<<"==================================================================="<<endl;

              }goto c3;
           }

            else if(a==0)
           {
                 cout<<"thanks for using "<<endl;
                 cout<<"You are in main menu:"<<endl;

           }
     }
};

int main()
{      int j;
       Main_menu();
       Employee s;

  main:cout<<"Enter a number given above:"<<endl;
       cin>>j;

  switch(j)
 {
      case 1:
        {
             s.fun1();
             cout<<endl;
             Main_menu();
             goto main;


        }break;

      case 2:
        {
            s.fun2();
            cout<<endl;
            Main_menu();
            goto main;
        }break;

      case 3:
        {
            s.fun3();
            cout<<endl;
            Main_menu();
            goto main;
        }break;

        default:
        {
        cout<<"****THANK YOU FOR VISIT****"<<endl;

        }break;
  }

    return 0;
}
*/
