/*Code by Surya a.k.a Sunny*/
/* by https://www.codechef.com/users/spsc */
#include <bits/stdc++.h>
#include<string.h>
//#include <boost/multiprecision/cpp_int.hpp>
#define lli long long
#define pi 3.14159265358979323846
#define MOD 1000000007
#define foi(n)  for(lli i=0;i<n;i++)
#define foj(n)  for(lli j=0;j<n;j++)
#define test(T) lli T;cin>>T;while(T--)
#define loop(i, a, b) for(int i = (a); i<= (b); i++)
#define unbuffer cin.clear(); cin.sync();
#define option cout<<"Choose from one of the options below : \n\n\n";
using namespace std;
lli pass=0;
string ans,backup;
//using namespace boost::multiprecision;
void createfiles()
  {
    fstream file;
    file.open("encrypted_v1.00.txt");
    file.close();
    file.open("decrypted_v1.00.txt");
    file.close();
  }
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
    ifstream file;
    file.open("encrypted_v.1.00.txt", ios_base::app);
    unbuffer
    getline(file,backup);
    file.close();
    return decrypt(backup);
    //cout<<"yayayayayayayayayayayayayaya";
    //decrypt()
  }
void save(string &backup)
  {
    ofstream file;
    file.open("encrypted_v.1.00.txt");
    file<<backup;
    file.close();
  }
void save2(string &backup)
  {
    ofstream file;
    file.open("decrypted_v.1.00.txt");
    file<<backup;
    file.close();
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
        enc[i]=x; //*********************************
        i++;
        pass++;
      }
      enc[len]='\0';
    //cout<<"\n_________________________________________________________________\n\n"<<enc<<"\n\n";
  i=0;
  pass=0;
  backup=enc;
  return enc;
  }
void encryptv2()
  {
    string str;
    ifstream file;
    file.open("decrypted_v.1.00.txt");
    getline(file,str);
    encrypt(str);
  }
int main()
{
  //ios_base::sync_with_stdio(false);
   //cin.tie(NULL);
   //cout.tie(NULL);
   lli a,i=0,temp,len;
   string str;
   char x;
   createfiles();
   while(1)
     {
       system("cls");
       cout<<"DATA ENCRYPTION SOFTWARE v1.00\n\n\n";
       //gotoxy(24,30);
       option
       cout<<" 1. Encryption of a text \n";
       cout<<" 2. Decryption of a text \n";
       cout<<" 3. Exit \n\n\n \t";
       cin>>a;
       system("cls");
       if(a==1)
        {
          option
          cout<<" 1.  Enter a text \n";
          cout<<" 2. Choose a .txt or .dat (binary) file by giving its name and extension \n\n\n \t";

          cin>>a;

/*---------X------------X-----------X-----------X----------X----------X--------X---------*/

          system("cls");
   /*if(a==1)
    {
      cout<<"Enter your text below : \n";
      unbuffer
      getline(cin,str);
      len=str.length();
      str[len]='\0';
      char enc[len],dec[len];
      while(i<len)
        {
          /*switch(str[i])
            {
              case 's':
                enc[i]='m';
                break;
              case 'u':
                enc[i]='n';
                break;
              case 'r':
                enc[i]='g';
                break;
              case 'y':
                enc[i]='l';
                break;
              case 'a':
                enc[i]='p';
                break;
            }
          if(pass>50)
            pass=0;
          temp=str[i];
          temp+=pass;
          x=(char)temp;
          //cout<<x;
          enc[i]=x; //*********************************
          i++;
          pass++;
        }
        enc[len]='\0';
      //cout<<str<<'\n';
      cout<<"\n_________________________________________________________________\n\n"<<enc<<"\n\n";
    i=0;
    pass=0;
    backup=enc; */

/*---------X------------X-----------X-----------X----------X----------X--------X---------*/

          if(a==1)
            {
              cout<<"Enter your text below : \n";
              unbuffer
              getline(cin,str);
              ans=encrypt(str);
            }
          else if(a==2)
            {
              ifstream file;
              file.open("decrypted_v.1.00.txt");
              getline(file,backup);
              ans=encrypt(backup);
            }
          cout<<"\n_________________________________________________________________\n\n"<<ans<<"\n\n";
          cout<<"THIS IS YOUR ENCRYPTED TEXT \n Choose an option from below : \n \t1. Manually copy this text. \n \t2. Save this text to a file. \n\n";
          cin>>a;
          if(a==1)
          cout<<"The text is succesfully saved in a variable named \"backup\" which is printed above, you can note it down "<<char(24)<<"\n\n\t";
          else if(a==2)
            {
              save(ans);
              cout<<"The text is succesfully saved in a file named \"encrypted_v1.txt\" "<<char(24)<<"\n\n\t";
              /*ofstream file;
              file.open("encryption_v1.00.txt");
              file<<backup;
              file.close();*/
            }
    /*while(i<len)
      {
        temp=backup[i];
        temp-=i;
        x=(char)temp;
        backup[i]=x;
        i++;
      }
    backup[len]='\0';
    cout<<backup;*/



    //  decrypt(backup,len); ######################################
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
             cout<<"The text is succesfully saved in a variable named \"backup\" which is printed above, you can note it down "<<char(24)<<"\n\n\t";
             else if(a==2)
             {
               save2(str);
               cout<<"The text is succesfully saved in a file named \"decrypted_v.1.00.txt\" "<<char(24)<<"\n\n\t";
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
               cout<<ans<<"/nThe text is succesfully saved in a variable named \"backup\" which is printed above, you can note it down "<<char(24)<<"\n\n\t";
             }
             else if(a==2)
             {
               save2(ans);
               cout<<"The text is succesfully saved in a file named \"decrypted_v.1.00.txt\" "<<char(24)<<"\n\n\t";
             }
           }
         }
      else if(a==3)
        break;
     }
}
