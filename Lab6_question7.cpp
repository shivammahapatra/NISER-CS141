#include <iostream>
using namespace std;

/*Program to Implement snippets for the following functions: 
Strcpy
Strcat
Strlen
Strcmp
*/

int Strlen(char ch[])
{
   int i;
   for(i=0;ch[i]!='\0';i++);
   return i;
}
void Strchr(char str[])
{
   int flag=0,i;
   char ch;
   cout<<"\nEnter the character to be searched for: ";
   cin>>ch;
   for(i=0;str[i]!='\0';i++)
   {
      if(ch==str[i])
      {  flag=1;
         break;
      }
   }
   if(flag==1)
     cout<<"\nCharacter found at position: "<<(i+1);
   else
     cout<<"\nCharacter was not found ! ! ! !"; 
}
void Strstr(char str[],char substr[])
{
    /* write your code here */
    int i = 0, j = 0;
   
    while ((str[j] != '\0')||(substr[i] != '\0')) 
    {
        if (substr[i] != str[j])
        {
            j++;
            i = 0;
        }
        else {
            i++;
            j++;
        }
    }
    if (substr[i] == '\0')
        cout<<"\nSubstring found in "<<str;
    else
        cout<<"\nSubstring not found ! ! !";
}
void Strcat(char st1[],char st2[])
{
   int x=0;
   for(;st1[x]!='\0';x++);
   for(int y=0;st2[y]!='\0';y++,x++)
   {
   st1[x]=st2[y];
   }
   st1[x]='\0';
   cout<<"\nConcatenated String is: "<<st1;
}
int Strcmp(char st1[], char st2[])
{
  int t=0;
  while(st1[t]==st2[t])
  {
  if(st1[t]=='\0' || st2[t]=='\0')
   break;
  t++;
  }
  if(st1[t]=='\0' && st2[t]=='\0')
   return 0;
  else
   return 1;
}
int main()
{
  cout<<"Program to Implement snippets for the following functions: \n Strcpy\n Strcat\n Strlen\n Strcmp";
  char str1[20], str2[20];
  cout<<"\n \nEnter the first String: ";
  cin>>str1;
  cout<<"\nEnter the second String: ";
  cin>>str2;
  int flag=Strcmp(str1,str2);
  cout<<"\nComparing the strings we find: ";
  if(flag==0)
   cout<<"Both the strings are equal";
  else
   cout<<"Both the strings are unequal";
  cout<<"\nThe length of String1 and String2 respectively is: "<<Strlen(str1)<<" and "<<Strlen(str2);
  Strchr(str1);
  char substr[20];
   cout<<"\nEnter the Subtring to be searched: ";
   cin>>substr;
   Strstr(str1,substr);
   Strcat(str1,str2);
  return 0;
}
