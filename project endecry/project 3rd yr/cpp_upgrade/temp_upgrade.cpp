/*Code by Surya*/
#include <bits/stdc++.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
//#include <boost/multiprecision/cpp_int.hpp>
#define lli long long
#define pi 3.14159265358979323846
#define MOD 1000000007
#define foi(n)  for(lli i=0;i<n;i++)
#define foj(n)  for(lli j=0;j<n;j++)
#define test(T) lli T;cin>>T;while(T--)
#define loop(i, a, b) for(int i = (a); i<= (b); i++)
#define unbuffer cin.clear(); cin.sync();
#define unbuffer2 cout.flush();
#define option cout<<"Choose from one of the options below : \n\n\n";
using namespace std;
lli pass=0;
string ans,backup;
lli a,i=0,temp,len;
string str;
char x;
//using namespace boost::multiprecision;
string decrypt(string backup)
  {
    lli temp,len=backup.length(),i=0;
    char ans2[len],x;
    while(i<len)
      {
        if(pass>50)
          pass=0;
        temp=backup[i];
        temp-=pass;
        x=(char)temp;
        ans2[i]=x;
        i++;
        pass++;
      }
    ans2[len]='\0';
    //ans;
    //cout<<backup<<"\n";
    return ans2;
  }
string decryptv2()
  {
    string f;
    cout<<"Enter the name(with extension) of file you want to open.\n\n\t";
    cin>>f;
    ifstream file;
    file.open(f, ios_base::app);
    unbuffer
    getline(file,backup);
    file.close();
    return decrypt(backup);
    //cout<<"yayayayayayayayayayayayayaya";
    //decrypt()
  }
void save(string &backup)
  {
    string f;
    cout<<"Enter the name of the file(with extension)\n\n\t";
    cin>>f;
    ofstream file;
    file.open(f);
    file<<backup;
    cout<<"The text is succesfully saved in a file named \""<<f<<"\""<<char(24)<<"\n\n\t";
    file.close();
    getch();
  }
void save2(string &backup)
  {
    string f;
    cout<<"Enter the name of the file(with extension)\n\n\t";
    cin>>f;
    ofstream file;
    file.open(f);
    file<<backup;
    cout<<"The text is succesfully saved in a file named \""<<f<<"\""<<char(24)<<"\n\n\t";
    file.close();
    getch();
  }
string encrypt(string str)
  {
    lli len,i=0,temp;
    //file.open("decrypted_v.1.00.txt");
    //getline(file,str);
    len=str.length();
    str[len]='\0';
    char enc[len],x;
    while(i<len)
      {
        if(pass>50)
          pass=0;
        temp=str[i];
        temp+=pass;
        x=(char)temp;
        enc[i]=x;//*********************************
        i++;
        pass++;
      }
      enc[len]='\0';
  i=0;
  pass=0;
  backup=enc;
  return enc;
  }
void encryptv2()
  {
    cout<<"Enter the Filename(with extension).\n\n\t";
    string str;
    cin>>str;
    ifstream file;
    file.open(str);
    getline(file,str);
    encrypt(str);
    file.close();
  }
  void enc_option()
  {
    option
    cout<<" 1. Enter a text \n";
    cout<<" 2. Choose a .txt or .dat (binary) file by giving its name and extension \n\n\n \t";

    cin>>a;
    if(a==1)
      {
        cout<<"Enter your text below : \n";
        unbuffer
        getline(cin,str);
        //ans=encrypt(str);
      }
    else if(a==2)
      {
        string f;
        cout<<"Enter the Filename(with extension).\n\n\t";
        cin>>f;
        ifstream file;
        file.open(f);
        if(file)
          {
            getline(file,str);
            //ans=encrypt(str);
          }
        else
          {
            cout<<"\n\nEnter a valid Filename...";
            getch();
          }
      }
    cout<<"\n_________________________________________________________________\n\n"<<ans<<"\n\n";
/*---------X------------X-----------X-----------X----------X----------X--------X---------*/

    system("cls");

/*---------X------------X-----------X-----------X----------X----------X--------X---------*/
    option
    cout<<"1. default encryption (less secure)\n";
    cout<<"2. generate a random key and encrypt (more secure)\n";
    cout<<"3. provide your own key and encrypt (depends on the strength of the key)\n";
    cout<<"4. ";

    cin>>a;
    if(a==1)
      {
        ans=encrypt(str);
        cout<<ans;
      }





/*---------X------------X-----------X-----------X----------X----------X--------X---------*/



    cout<<" THIS IS YOUR ENCRYPTED TEXT \n\n Choose an option from below : \n \t1. Manually copy this text. \n \t2. Save this text to a file. \n\n";
    cin>>a;
    if(a==1)
    {
      cout<<"The text is succesfully saved in a variable named \"backup\" which is printed above, you can note it down "<<char(24)<<"\n\n\t";
      getch();
    }
    else if(a==2)
      {
        save(ans);
      }
  }

int main()
{
  //ios_base::sync_with_stdio(false);
   //cin.tie(NULL);
   //cout.tie(NULL);
   while(1)
     {
       i=0,pass=0;
       system("cls");
       //textcolor(11);
       //setcolor(5);
       cout<<setw(80)<<"DATA ENCRYPTION/DECRYPTION SOFTWARE v1.00\n\n\n";
       //gotoxy(24,30);
       option
       cout<<" 1. Encryption of a text \n";
       cout<<" 2. Decryption of a text \n";
       cout<<" 3. Exit \n\n\n\t";
       cin>>a;
       system("cls");
       if(a==1)
       {
         enc_option();
       }

 /*---------X------------X-----------X-----------X----------X----------X--------X---------*/


        else if(a==2)
         {
           option
           cout<<"1. Paste the text here and decrypt it.\n2. Decrypt the text saved to a file .\n\n\t";
           cin>>a;
           if(a==1)
           {
             cout<<"\nPaste your text below "<<(char)25<<"\n\n\t";
             unbuffer
             getline(cin,str);
             cout<<"\nDecrypted text is below "<<(char)25<<"\n\n\t"<<decrypt(str);
             cout<<"\n\nTHIS IS YOUR DECRYPTED TEXT \n Choose an option from below : \n \t1. Manually copy this text. \n \t2. Save this text to a file. \n\n";
             cin>>a;
             if(a==1)
               {
                 cout<<"The text is succesfully saved in a variable named \"backup\" which is printed above, you can note it down "<<char(24)<<"\n\n\t";
                 getch();
               }
             else if(a==2)
             {
               save2(str);
               getch();
             }
           }
           else if(a==2)
           {
             ans=decryptv2();
             cout<<"\nDecrypted text is below "<<(char)25<<"\n\n\t"<<ans;
             cout<<"\n\nTHIS IS YOUR DECRYPTED TEXT \n Choose an option from below : \n \t1. Manually copy this text. \n \t2. Save this text to a file. \n\n";
             cin>>a;
             if(a==1)
             {
               backup=ans;
               cout<<ans<<"\nThe text is succesfully saved in a variable named \"backup\" which is printed above, you can note it down "<<char(24)<<"\n\n\t";
               getch();
             }
             else if(a==2)
             {
               save2(ans);
             }
           }
         }
      else if(a==3)
        break;
        //exit(0);
      else
        {
          cout<<"Enter a Valid Option. \n \n";
        getch();
      }
     }
}
