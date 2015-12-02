//hangman

#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<time.h>
using namespace std;

//global variables in the code

int c,b,h,m,t;
int cINC=0,bINC=0,hINC=0,mINC=0,tINC=0;
int inc;

  
//functions in the code
void callentry(char *alphadata,char ch)
{
     for(int tom=0;tom<26;tom++)
     {
             if(ch==*(alphadata+tom))
             {
                                    *(alphadata+tom)=' ';
             }
     }
}          
      
      
void calldisplay(char *alphadata)
{
       for(int ponky=0;ponky<26;ponky++)
    {
     cout<<*(alphadata+ponky)<<" ";
         
     }
     
   
} 

 void initialise(char *alphadata)
    {
         
         for(int inky=97,pinky=0;inky<=122;inky++,pinky++)
    {
            *(alphadata+pinky)=(char)inky;
         
     }
    } 
    
 //functions for printing errors   
       
     void ERROR1()
{
     cout<<"\n1st ERROR";
     cout<<"\n\n\n";
     
     
      
    cout<<" *\n *\n *       \n *      \n *         \n *        \n *        \n";
    cout<<" *         \n *          \n *          \n *          \n *           \n *           \n *           \n";
    cout<<" *            \n *          \n *\n *\n *\n";
    cout<<" ***************";
    
}



void ERROR2()
{
cout<<"\n2nd ERROR"; cout<<"\n\n\n"; 



cout<<" ************\n *          *\n *          *\n *          *\n *         \n *        \n *        \n";
    cout<<" *         \n *          \n *          \n *          \n *           \n *           \n *           \n";
    cout<<" *            \n *          \n *\n *\n *\n";
    cout<<" ***************";
    
    
    }
 
 
 
 void ERROR3()
 {
      cout<<"\n3rd ERROR";
  cout<<"\n\n\n"; 
  
   cout<<" ************\n *          *\n *          *\n *          *\n *         ***\n *        *   *\n *        *   *\n";
    cout<<" *         ***\n *          \n *          \n *          \n *           \n *           \n *           \n";
    cout<<" *            \n *          \n *\n *\n *\n";
    cout<<" ***************";
    
    }
  
  
  
  void ERROR4()
  {
       cout<<"\n4th ERROR";
    cout<<"\n\n\n";
    
    
    
    cout<<" ************\n *          *\n *          *\n *          *\n *         ***\n *        *   *\n *        *   *\n";
    cout<<" *         ***\n *          *\n *          *\n *          *\n *          * \n *          * \n *          *  \n";
    cout<<" *          *  \n *          *\n *\n *\n *\n";
    cout<<" ***************";
    
    }
   
  
  
  void ERROR5()
  {
       cout<<"\n5th ERROR";
    cout<<"\n\n\n";
    
    
    
    cout<<" ************\n *          *\n *          *\n *          *\n *         ***\n *        *   *\n *        *   *\n";
    cout<<" *         ***\n *          *\n *          *\n *          *\n *         ** \n *        * * \n *       *  *  \n";
    cout<<" *       *  *  \n *          *\n *\n *\n *\n";
    cout<<" ***************";
    
    }
   
  
  
   void ERROR6()
   {
        cout<<"\n6th ERROR";
     cout<<"\n\n\n";
     
     
      cout<<" ************\n *          *\n *          *\n *          *\n *         ***\n *        *   *\n *        *   *\n";
    cout<<" *         ***\n *          *\n *          *\n *          *\n *         ***\n *        * * *\n *       *  *  *\n";
    cout<<" *       *  *  *\n *          *\n *\n *\n *\n";
    cout<<" ***************";

    }
    
   
   
    void ERROR7(string Q)
    {
         cout<<"\n7th ERROR";
      cout<<"\n\n\n";
      
      
       cout<<" ************\n *          *\n *          *\n *          *\n *         ***\n *        *   *\n *        *   *\n";
    cout<<" *         ***\n *          *\n *          *\n *          *\n *         ***\n *        * * *\n *       *  *  *\n";
    cout<<" *       *  *  *\n *          *\n *         *  \n *        *    \n *       *      \n";
    cout<<" ***************";
    
        
    cout<<"\n\nIt seems you have going out of tries\n\nOne more misinterpretation and he is gonna die\n";
    cout<<"\nTake another hint:\n\n";
    cout<<"\n\nFinal Hint:>>>>"<<Q<<"<<<<\n\n";
    
    }
     
     
     
     char ERROR8(char *alphadata,string A)
     {
          cout<<"\n8th ERROR";
      cout<<"\n\n\n";
      
      
      cout<<" ************\n *          *\n *          *\n *          *\n *         ***\n *        *   *\n *        *   *\n";
    cout<<" *         ***\n *          *\n *          *\n *          *\n *         ***\n *        * * *\n *       *  *  *\n";
    cout<<" *       *  *  *\n *          *\n *         * *\n *        *   *\n *       *     *\n";
    cout<<" ***************";
    
    cout<<"\n\n\tYou HANGED him\n\n\tYou Kiled the innocent\n\n";
    cout<<"\n\nWord :"<<A;
    initialise(alphadata);
    AGAIN:
    cout<<"\n\nDo you want to play again\n\nEnter(y/n):\n";
    char dec;
    cin>>dec;
    if(dec=='n'){exit(1);}
    else if(dec!='n'&&dec!='y') {cout<<"\n\nIncorrect Entry\n\nRETRY"; goto AGAIN;}
    return dec;
    }
char ERROR(int s,string A,string Q,char *alphadata)
{
     char ret='s';
switch(s)
{
         case 1:
              ERROR1();
              break;
         case 2:
              ERROR2();
              break;
         case 3:
              ERROR3();
              break;
         case 4:
              ERROR4();
              break;
         case 5:
              ERROR5();
              break;
         case 6:
              ERROR6();
              break;
         case 7:
              ERROR7(Q);
              break;
         case 8:
              ret=ERROR8(alphadata,A);
              break;
                           
};          
return ret;
}
          
//start of main
  
int main()
{
  
  int mistakes=0;
  
  
   char *alphadata;
    alphadata=new char[27];
    cout<<"\n\n";
    int pinky;
    for(int inky=97,pinky=0;inky<=122;inky++,pinky++)
    {
            *(alphadata+pinky)=(char)inky;
         
     }
  
     
       char cV[5],bV[5],hV[5],mV[5],tV[5];
    
 for(int derp=0;derp<5;derp++)
 {
         cV[derp]='\0';bV[derp]='\0';hV[derp]='\0';mV[derp]='\0';tV[derp]='\0';
  }   	
    //DATABASE   start----------------------------------------------------------------
    
    struct hintsA
    {
           string p[6];
    
    }pcricket,pbollywood,phollywood,pmusic,ptech;
    
    struct hintsB
    {
           string q[6];
    }qcricket,qbollywood,qhollywood,qmusic,qtech;
    
    struct answers
    {
           string a[6];
    }acricket,abollywood,ahollywood,amusic,atech;
    
    
   pcricket.p[0]="Batsman"; qcricket.q[0]="Unique";  acricket.a[0]="abraham benjamin devilliers";
   pcricket.p[1]="Spinner"; qcricket.q[1]="Doosra";  acricket.a[1]="saqlain mushtaq";
   pcricket.p[2]="Batsman"; qcricket.q[2]="115 off 55";  acricket.a[2]="wriddhiman saha";
   pcricket.p[3]="Spinner"; qcricket.q[3]="Carrom ball";  acricket.a[3]="ajanta mendis";
   pcricket.p[4]="Batsman"; qcricket.q[4]="Bike lover";  acricket.a[4]="mahendra singh dhoni";
   
   pbollywood.p[0]="Director"; qbollywood.q[0]="Aamir khan"; abollywood.a[0]="rajkumar hirani";
   pbollywood.p[1]="Actor"; qbollywood.q[1]="RJ"; abollywood.a[1]="aditya roy kapoor";
   pbollywood.p[2]="Actor"; qbollywood.q[2]="Whistle Baja"; abollywood.a[2]="tiger shroff";
   pbollywood.p[3]="Film"; qbollywood.q[3]="400 Crores"; abollywood.a[3]="chennai express";
   pbollywood.p[4]="Actor"; qbollywood.q[4]="Dishkiyaoon"; abollywood.a[4]="harman baweja";
   
   
   phollywood.p[0]="Actress"; qhollywood.q[0]="Fantastic 4"; ahollywood.a[0]="jessica alba";
   phollywood.p[1]="Actor"; qhollywood.q[1]="Spiderman"; ahollywood.a[1]="andrew garfield";
   phollywood.p[2]="Actor"; qhollywood.q[2]="Joker"; ahollywood.a[2]="heath ledger";
   phollywood.p[3]="Actor"; qhollywood.q[3]="Live by night"; ahollywood.a[3]="leonardo dicaprio";
   phollywood.p[4]="Actress"; qhollywood.q[4]="Salt"; ahollywood.a[4]="angelina jolie";
   
   pmusic.p[0]="Bollywood Singer"; qmusic.q[0]="Raabta(Agent Vinod)"; amusic.a[0]="arijit singh";
   pmusic.p[1]="Pop Singer"; qmusic.q[1]="Eminem"; amusic.a[1]="marshall bruce mathers";
   pmusic.p[2]="Bollywood Singer"; qmusic.q[2]="Sun Raha Hai(Aashiqui 2)"; amusic.a[2]="ankit tiwari";
   pmusic.p[3]="Pop Singer"; qmusic.q[3]="Hold My Hands"; amusic.a[3]="micheal jackson";
   pmusic.p[4]="Tollywood Music Director"; qmusic.q[4]="Ye Vaipugaa Daagunnado(Orange)"; amusic.a[4]="harris jayaraj";
   
  ptech.p[0]="Hardware Company";  qtech.q[0]="Bill and Dave"; atech.a[0]="hewlett packard";
  ptech.p[1]="OS founder"; qtech.q[1]="Open Source"; atech.a[1]="linus torvalds";
  ptech.p[2]="IT Company CEO"; qtech.q[2]="Screenshot"; atech.a[2]="timothy david cook";
  ptech.p[3]="Email website CEO";  qtech.q[3]="Yahoo"; atech.a[3]="marissa mayer";
  ptech.p[4]="Animation Movie";qtech.q[4]="Pixar"; atech.a[4]="toy story";
    
    
    //DATABASE end--------------------------------------------------------------------------
    
    
    
    
    cout<<"\n\n\n\tWELCOME TO THE AWESOME GAME OF HANGMAN\n\n";
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    
    SELECTION:
    cout<<"\n\nEnter your choice\n\n";
    cout<<"\n1.PLAY GAME\n2.INSTRUCTIONS\n3.CREDITS\n4.EXIT\n\n";
    
    int choice;
    cin>>choice;
    
    if(choice==1) {goto PLAY;}
    else if(choice==2) 
    {
       //start of instructions
       cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";  
       cout<<"\nHangman is a typical word guess game\n";
       cout<<"\nFirst choose your category \n";
       cout<<"\nGuess the word by entering alphabets before you kill the innocent\n";
       cout<<"\nA hint will be given for your ease\n";
       cout<<"\nThe hint has something in relation with the word you choose\n";
       cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";  
       //end of instructions  
        RETRYX:
        cout<<"\n\nEnter your choice\n\n";
        cout<<"1.PLAY GAME\n2.GO TO MAIN MENU\n"; 
        int choicex;
        cin>>choicex;
        if(choicex==1)
        {goto PLAY;}
        else if(choicex==2)
        {goto SELECTION;}
        else {cout<<"\n\nIncorrect entry\n";goto RETRYX;} 
         
    }
    
    else if(choice==3)
    {
         
     //CREDITS
     //start
     cout<<"\nThis game has been developed by:";
     cout<<"\n\n\tMohammad Aasif\t#git @Aasif312\n\n";
     
     
     //end 
     CREDITS:   
    cout<<"\n\nEnter '1' to quit to main menu\n\n";
    int xy;
    cin>>xy;
    if(xy==1){goto SELECTION;}
    else
    {cout<<"\nIncorrect entry\n";  goto CREDITS;}
    
    }
    
    
    else if(choice==4)
    {
      exit(1);
     }
     
     else
     {goto SELECTION;}
     
   
    PLAY:
         mistakes=0;
        
    
    cout<<"\n\nPlease select a category:\n\n1.Cricket\n2.Bollywood\n3.Hollywood\n4.Music\n5.Tech\n\n6.Main menu\n\n";
    int cat;
    cin>>cat;
    string P;
    string Q;
    string A;
    
    srand(time(NULL));
    switch(cat)
    {
               case 1:
                    cout<<"\n\nYou have selected CRICKET\n\n";
                    cGO:
                    c=rand()%5+0;
                    for(int lol=0;lol<5;lol++)
                    {
                            if(c==cV[lol])
                            {goto cGO;}
                    }
                    cV[cINC++]=c;
                    P=pcricket.p[c];
                    Q=qcricket.q[c];
                    A=acricket.a[c++];
                    
                    
               break;
                   
               case 2:
                    cout<<"\n\nYou have selected BOLLYWOOD\n\n";
                    
                    bGO:
                    b=rand()%5+0;
                    for(int lol=0;lol<5;lol++)
                    {
                            if(b==bV[lol])
                            {goto bGO;}
                    }
                    bV[bINC++]=b;
                    P=pbollywood.p[b];
                    Q=qbollywood.q[b];
                    A=abollywood.a[b++];
               break;
               
               case 3:
                    cout<<"\n\nYou have selected HOLLYWOOD\n\n";
                    hGO:
                    h=rand()%5+0;
                    for(int lol=0;lol<5;lol++)
                    {
                            if(h==hV[lol])
                            {goto hGO;}
                    }
                    hV[hINC++]=h;
                    P=phollywood.p[h];
                    Q=qhollywood.q[h];
                    A=ahollywood.a[h++];
               break;
                    
               
               case 4:
                    cout<<"\n\nYou have selected MUSIC\n\n";
                    mGO:
                    m=rand()%5+0;
                    for(int lol=0;lol<5;lol++)
                    {
                            if(m==mV[lol])
                            {goto mGO;}
                    }
                    mV[mINC++]=m;
                    P=pmusic.p[m];
                    Q=qmusic.q[m];
                    A=amusic.a[m++];
               break;
                              
               case 5:
                    cout<<"\n\nYou have selected TECH\n\n";
                    tGO:
                    t=rand()%5+0;
                    for(int lol=0;lol<5;lol++)
                    {
                            if(t==tV[lol])
                            {goto tGO;}
                    }
                    tV[tINC++]=t;
                    P=ptech.p[t];
                    Q=qtech.q[t];
                    A=atech.a[t++];
               break;
               case 6:
                    goto SELECTION;
               default:
                       cout<<"\n\nIncorrect entry\n";
                       goto PLAY;
    }	
    
  cout<<"\n\nGuess a word in your selected category\n\n";
  cout<<"\n\nHint:---"<<P<<"---\n\n";
   
   
    
      
    
    
    
    
    char ch;
    char *p;
    p=&A[0];
   
    char *q;
    q=new char [strlen(p)];

char alphabets[27];
for(int al=0;al<27;al++)
{
        alphabets[al]='\0';
}


cout<<"\n\n";
int S=0;
for(int OUT=0;OUT<strlen(p);OUT++)
{
        if(*(p+OUT)==' ')
        {
         S++;
         }
}
for(int OUT=0;OUT<strlen(p);OUT++)
{
        if(*(p+OUT)==' ')
        {cout<<" ";}
        else
        cout<<"_ ";
}cout<<"("<<strlen(p)-S<<" letters)";

while(1)
{


int flag=0;
for(int x=0;x<strlen(p);x++)
{
        if(*(p+x)!=*(q+x))
        {flag=1;}
        
}
if(flag==0)
{ 
cout<<"\nYIPPEEE\n\n\nYOU WON\n\nYou have saved the innocent\n\n";

cout<<"\nWord : "<<A;
initialise(alphadata);
     
cout<<"\n\nDo you want to play again\n\nEnter(y/n):\n";
    char dec2;
    cin>>dec2;
    if(dec2=='n'){exit(1);}
    else if(dec2=='y'){goto PLAY;}
    else{goto SELECTION;
    
    
}

}


  cout<<"\n\nAvailable characters:\n";
calldisplay(alphadata);
//taking alphabets
cout<<"\n\n\nEnter your guessing alphabet :\n";
ALPHA:
cin>>ch;

callentry(alphadata,ch);

for(int jaf=0;jaf<26;jaf++)
{
        if(ch==alphabets[jaf])
        {
          cout<<"\n\nYou have already entered this character\n\nRETRY:\n";
          goto ALPHA;
        }
};
alphabets[inc++]=ch;
//the main code for comparing the original string with entered characters

int found=0;
           
           for(int i=0;i<strlen(p);i++)
           {
                       if(ch==*(p+i))
                       {
                                found=1;     
                                 *(q+i)=*(p+i);
                                for(int temp=i+1;temp<strlen(p);temp++)
                                {
                                        if(ch==*(p+temp))
                                        {*(q+temp)=*(p+temp);}
                                }                             
                                   
                       }
                       else if(*(p+i)==' ')
                       {
                            *(q+i)=' ';
                        }
           
                       
           }
           
           if(found==0)
           {
                       cout<<"\n\n````````````````````````````````````````````````````````````````````";
            char retx;
            retx=ERROR(++mistakes,A,Q,alphadata);
            if(retx=='y'){goto PLAY;}
                              cout<<"\n\n````````````````````````````````````````````````````````````````````";           
           }
                                
           
           cout<<"\nInterpreted word\n";
           for(int j=0;j<strlen(p);j++)
           {
           if(*(q+j)==*(p+j))
                             cout<<*(q+j)<<" ";

           else
                             cout<<"_ ";
           }
cout<<"\n\n\n\n\n\n\n";
           
} 

return 0;
}


