#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
    char password[12],ch,o[12]="Jadooo123",p,q[20],r[20],t,u[50],v[50],w[12]="Program123",ww[20]="Rishabh123",x,y,z,reply[100],ll[20],R[20],P[20],ris[20]="Rishabh",read,id[50];
    char id1[50],np[20],rnp[20],ne[50],people[20];
    int a,b,c=0,d,e,f,g,h,i=0,j,k=0,l=0,en,es,fh,pa=0,repa=0,ps=0,Pa,Ri,Ris,eid,eid1,re,ac,im,loop=0,co,lo,cm,pal,s;
    int a1,a2,a3,a4,a5,a6,a7,a8,a9,b1,b2,b3,b4,b5,b6,b7,b8,b9,c1,c2,c3,c4,c5,c6,c7,c8,c9,d1,d2,d3,d4,d5,d6,d7,d8,d9,e1,e2,e3,e4,e5,e6,e7,e8,e9,f1,f2,f3,f4,f5,f6,f7,f8,f9;
    int a11,a22,a33,a44,a55,a66,a77,a88,a99,d11,d22,d33,d44,d55,d66,d77,d88,d99,e11,e22,e33,e44,e55,e66,e77,e88,e99;
    system("title Jadooo ");
    printf("Maximize your screen.... and press ENTER....");
    y=getch();
    if(y==13)
        goto ja;
    else exit(0);
    ja :
        system("cls");
        printf("*******************************************************************************************************************************************************************************************************************");
    printf("\n\n\n\t\t\t\t                                                     *************************");
    printf("\n\t\t\t\t                                                     *__***__ LAPBOOK __***__*");
    printf("\n\t\t\t\t                                                     *************************");
    system("COLOR 07");
    printf("\n\n\t\t\t\t\t\t\t\t          WELCOME.... to the lapbook.... created by RISHABH ROSHAN \n\n\n\t\t\t\t           In this application you can talk to jadooo.... \
           \n\t\t\t\t          To use this application you need to enter password...");

        again :
    printf("\n\n\t\t\t\t   Enter password - ");
         i=0;
       while((ch = getch())!=13)
 {
  if(ch==8)
  {
      ai :
      i--;
      if (i<0)
            exit(0);
        ch='\0';
        password[i]=ch;
        printf("\b%c\b",ch);
        if(ch==8)
            goto ai;
        else
        continue;
  }
  if(ch==13)
        break;
         if (ch==27)
            exit(0);
  password[i++] = ch;
  printf("%c",'*');

 }
 password[i]='\0';
 c=0;
     for(i=0;i<=8;i++)
 {
         if (password[i]==o[i])
    c++;
  }
  if(c==9)
       {
           system("COLOR 07");
           FILE *fp,*la,*fr;
            struct account
         {
             char username[20];
             char passwords[20];
             char repassword[20];
             char emailid[50];

         }acc;
         printf("\n\n\t\t\t\t \t\t\t\t \t   PASSWORD Accepted");
         printf("\n\t\t\t\t             press any key :)...");
                           en=getch();
         start :
             system("COLOR 07");
             system("cls");
        printf("*******************************************************************************************************************************************************************************************************************");
    printf("\n\n\n\t\t\t\t                                                     *************************");
    printf("\n\t\t\t\t                                                     *__***__ LAPBOOK __***__*");
    printf("\n\t\t\t\t                                                     *************************");
    printf("\n\n\t\t\t\t\t\t\t\t          WELCOME.... to the lapbook.... created by RISHABH ROSHAN ");
             system("COLOR 07");
    printf("\n\t\t\t\t              =*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=");
    printf("\n\n\t\t\t\t                  1.  Sign in                                                               2.  Create an account\n");
    printf("\n\t\t\t\t                                                              0. EXIT     ");
         re :
         printf("\n\n\t\t\t\t   Reply - ");
         scanf("%d",&d);
         switch(d)
         {
         case 0:
            exit(0);
            break;
         case 1:
                   fp=fopen("C:\\Jadoo.txt","rb+");
                 if(fp==NULL)
                   {
                      printf("\n\t\t\t\t     Sorry!!! I Cannot able to open Jadooo's file you have to create that file by making an account");

                      printf("\n\t\t\t\t             press any key :)...");
                           en=getch();
                           goto start;
                   }
      us :
                             printf("\n\n\t\t\t\t \t\t\t\t    USERNAME - ");
                             scanf("%s",&r);
           rewind(fp);
             while(!feof(fp))
                {
                    fread(&acc,sizeof(acc),1,fp);
                 j=strcmp(r,acc.username);
               if(j==0)
                  {
                      goto pa;
                  }
                }
        pa :
                printf("\n\t\t\t\t \t\t\t\t    PASSWORD - ");
                fflush(stdin);
                ps=0;
                 while((z=getch())!=13)
              {
                  if(z==8)
  {
      ait :
      ps--;
      if (ps<0)
            goto start;
        z='\0';
        acc.passwords[ps]=z;
        printf("\b%c\b",z);
        if(ch==8)
            goto ait;
        else
        continue;
  }
                  if (z==27)
                     {
                         printf("\n");
                         goto start;
                     }
                  q[ps++]=z;
                  printf("%c",'*');
              }
              q[ps]='\0';
               rewind(fp);
                while(!feof(fp))
                 {
                     fread(&acc,sizeof(acc),1,fp);
                     k=strcmp(q,acc.passwords);
                     if(k==0)
                        goto chat;
                 }
                 chat :
                if(k==0 && j==0)
                {
                    printf("\n\n\t\t\t\t            Congrats!! Finally you have successfully entered in the JADOOO'S WORLD\
                           \n\t\t\t\t            Now press any key to talk to jadooo :)...");
                           en=getch();
                            system("COLOR 70");
                            system("cls");
                           printf("-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
                           printf("\n\t\t\t\t \t\t\t\t \t   ======================");
                           printf("\n\t\t\t\t \t\t\t\t \t   ||__**__JADOOO__**__||");
                           printf("\n\t\t\t\t \t\t\t\t \t   ======================\n");
                               printf("\n\t\t\t\t   Jadooo - hiii %s.... I am Jadooo - an alien",r);
                               Jadooo :
                                   system("COLOR 70");
                               printf("\n\t\t\t\t   %s - ",r);
                               gets(reply);
                               a1=strcmp(reply,"Hi");
                               a2=strcmp(reply,"hii");
                               a3=strcmp(reply,"hello");
                               a4=strcmp(reply,"namaste");
                               a5=strcmp(reply,"good morning");
                               a6=strcmp(reply,"good evening");
                               a7=strcmp(reply,"good night");
                               a8=strcmp(reply,"hi");
                               a9=strcmp(reply,"pagal h kya");
                               b1=strcmp(reply,"ok");
                               b2=strcmp(reply,"yes");
                               b3=strcmp(reply,"bye");
                               b4=strcmp(reply,"who are you");
                               b5=strcmp(reply,"tell me something about Rishabh");
                               b6=strcmp(reply,"how are you");
                               b7=strcmp(reply,"explain yourself in detail");
                               b8=strcmp(reply,"fine");
                               b9=strcmp(reply,"can you show me lapbook programming");
                               c1=strcmp(reply,"do you know how many accounts are there in lapbook");
                               c2=strcmp(reply,"logout");
                               c3=strcmp(reply,"sorry");
                               c4=strcmp(reply,"good afternoon");
                               c5=strcmp(reply,"please tell me my account details");
                               c6=strcmp(reply,"thank you");
                               c7=strcmp(reply,"delete my account");
                               c8=strcmp(reply,"i hate you");
                               c9=strcmp(reply,"can i be your friend");
                               d1=strcmp(reply,"who is Abhishek");
                               d2=strcmp(reply,"who is Avanish");
                               d3=strcmp(reply,"who is Ayush");
                               d4=strcmp(reply,"who is Divesh");
                               d5=strcmp(reply,"who is Kush");
                               d6=strcmp(reply,"who is Manvendra");
                               d7=strcmp(reply,"who is Mayank");
                               d8=strcmp(reply,"who is Ritesh");
                               d9=strcmp(reply,"who is Ritik");
                               e1=strcmp(reply,"who is Kriti");
                               e2=strcmp(reply,"who is Shiva");
                               e3=strcmp(reply,"who is Sravan");
                               e4=strcmp(reply,"who is Surya");
                               e5=strcmp(reply,"who is Rashi");
                               e6=strcmp(reply,"who is Pranay");
                               e7=strcmp(reply,"who is Yash");
                               e8=strcmp(reply,"who is Rishabh");
                               e9=strcmp(reply,"who is Ranjan");
                               d11=strcmp(reply,"who is abhishek");
                               d22=strcmp(reply,"who is avanish");
                               d33=strcmp(reply,"who is ayush");
                               d44=strcmp(reply,"who is divesh");
                               d55=strcmp(reply,"who is kush");
                               d66=strcmp(reply,"who is manvendra");
                               d77=strcmp(reply,"who is mayank");
                               d88=strcmp(reply,"who is ritesh");
                               d99=strcmp(reply,"who is ritik");
                               e11=strcmp(reply,"who is kriti");
                               e22=strcmp(reply,"who is shiva");
                               e33=strcmp(reply,"who is sravan");
                               e44=strcmp(reply,"who is surya");
                               e55=strcmp(reply,"who is rashi");
                               e66=strcmp(reply,"who is pranay");
                               e77=strcmp(reply,"who is yash");
                               e88=strcmp(reply,"who is rishabh");
                               e99=strcmp(reply,"who is ranjan");
                               f1=strcmp(reply,"tell me my account details");
                               f2=strcmp(reply,"cool");
                               f3=strcmp(reply,"get lost");
                               f4=strcmp(reply,"fuck off");
                               f5=strcmp(reply,"really");
                               f6=strcmp(reply,"go to hell");
                               f7=strcmp(reply,"tell me something about yourself");
                               f8=strcmp(reply,"good bye");
                               f9=strcmp(reply,"please");
                               a11=strcmp(reply,"Hello");
                               a22=strcmp(reply,"Namaste");
                               a33=strcmp(reply,"Good morning");
                               a44=strcmp(reply,"Good afternoon");
                               a55=strcmp(reply,"Good evening");
                               a66=strcmp(reply,"Good night");
                               a77=strcmp(reply,"I hate you");
                               a88=strcmp(reply,"tell me something about rishabh");
                               a99=strcmp(reply,"can I be your friend");
                               if(a1==0 || a2==0 || a3==0 || a4==0 || a8==0 || a11==0 || a22==0)
                                 printf("\n\t\t\t\t   Jadooo - hey... %s",r);
                               else
                                if(a5==0 || a6==0 || c4==0 || a33==0 || a44==0 || a55==0)
                                 printf("\n\t\t\t\t   Jadooo - %s.... Hope everything is fine ",reply);
                               else
                               if(a9==0)
                                 printf("\n\t\t\t\t   Jadooo - Please!! mind your language :(");
                               else
                               if(a7==0 || a66==0)
                               {
                                     printf("\n\t\t\t\t   Jadooo - %s.... Take care... Sweet Dreams.... bye ",reply);
                                     printf("\n-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
                             system("COLOR 07");
                              printf("\n\t\t\t\t             press any key :)...");
                           en=getch();
                               exit(0);
                               }
                               else
                                if(b1==0)
                                 printf("\n\t\t\t\t   Jadooo - okay... Anything else");
                               else
                               if(b2==0)
                                 printf("\n\t\t\t\t   Jadooo - Fine");
                               else
                               if(b3==0 || f8==0)
                               {
                                   printf("\n\t\t\t\t   Jadooo - byeee.... take care");
                                   printf("\n-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
                                 system("COLOR 07");
                                 printf("\n\t\t\t\t             press any key :)...");
                           en=getch();
                                 exit(0);
                                 }
                               else
                               if(b4==0)
                                 printf("\n\t\t\t\t   Jadooo - hahahaha... I am Jadooo... dhooop...");
                               else
                               if(b5==0 || a88==0)
                                 printf("\n\t\t\t\t   Jadooo - Rishabh... he is a nice guy... he is my first friend on earth when i have left earth he designed lapbook so\
                                         \n\t\t\t\t            that we can stay in touch but then he decided not only he but everyone on earth whom he want can talk to me....\
                                         \n\t\t\t\t            therefore then he modified his lapbook and now you all can talk to me....");
                               else
                               if(b6==0)
                                 printf("\n\t\t\t\t   Jadooo - I am absolutely fine");
                               else
                               if(b7==0 || f7==0)
                                 printf("\n\t\t\t\t   Jadooo - Actually I am living far away from you all. My planet's name is TRAPIST and also we are looking diiferent from you all.\
                                         \n\t\t\t\t            Here on my planet half time there is sunlight which gave us some sort of supernatural powers. Recently NASA had discovered\
                                         \n\t\t\t\t            this planet and prepared an article also. you can get that article from Rishabh ");
                               else
                               if(b8==0)
                                 printf("\n\t\t\t\t   Jadooo - That's cool");
                               else
                               if(b9==0)
                                 {
                                     Ris=strcmp(r,ris);
                                     if(Ris==0)
                                        goto ep;
                                     printf("\n\t\t\t\t   Jadooo - Only Rishabh is allowed to see that..... Sorry!!!");
                                     printf("\n\t\t\t\t            I can show you but you have to Enter Password If Rishabh Have told you...");
                                 printf("\n\n\t\t\t\t   Enter password - ");
                                 ps=0;
                                 while((y=getch())!=13)
              {
                  if(y==8)
  {
      aip :
      ps--;
      if (ps<0)
            goto Jadooo;
        y='\0';
        P[ps]=y;
        printf("\b%c\b",y);
        if(y==8)
            goto aip;
        else
        continue;
  }
                  if (y==27)
                     {
                         printf("\n");
                         goto Jadooo;
                     }
                  P[ps++]=y;
                  printf("%c",'*');
              }
              P[ps]='\0';
                                 Pa=strcmp(P,w);
                                 if(Pa==0)
                                 {
                                     printf("\n\t\t\t\t   Jadooo - okay... you are allowed to see lapbook's backened programming");
                                     printf("\n\n\t\t\t\t         press Enter to see.... ;)\n\n");
                                     y=getch();
                                         if(y==13)
                                         {
                                             ep :
                                               la=fopen("C:\\Lapbook.c","r");
                                               if(la==NULL)
                                                printf("\n\t\t\t\t   Jadooo - Sorry!! but its not Rishabh's laptop. I am allowed to open it in that laptop only.");
                                               while(1)
                                               {
                                                   read=fgetc(la);
                                                   if(read==EOF)
                                                    break;
                                                   printf("%c",read);
                                               }
                                               printf("\n");
                                               fclose(la);
                                         }
                                 }
                                 else
                                 {
                                     printf("\n\t\t\t\t   Jadooo - Sorry!!! but you are not allowed to see....");
                                     goto Jadooo;
                                 }
                }
                               else
                                if(c1==0)
                                 {
                                     Ris=strcmp(r,ris);
                                     if(Ris==0)
                                        goto epe;
                                     printf("\n\t\t\t\t   Jadooo - Yeah I can show you but you have to Enter Password If Rishabh Have told you...");
                                 printf("\n\n\t\t\t\t   Enter password - ");
                                 ps=0;
                                 while((y=getch())!=13)
              {
                  if(y==8)
  {
      aia :
      ps--;
      if (ps<0)
            goto Jadooo;
        y='\0';
        R[ps]=y;
        printf("\b%c\b",y);
        if(y==8)
            goto aia;
        else
        continue;
  }
                  if (z==27)
                     {
                         printf("\n");
                         goto Jadooo;
                     }
                  R[ps++]=y;
                  printf("%c",'*');
              }
              R[ps]='\0';
                                 Ri=strcmp(R,ww);
                                 if(Ri==0)
                                 {
                                    printf("\n\t\t\t\t   Jadooo - Now I can show you but first I have to check lapbook backened database....\
                                                \n\t\t\t\t     Yeah... I got it Press Enter to see... ");
                                         y=getch();
                                         if(y==13)
                                            epe :
                                           rewind(fp);
                                         while(fread(&acc,sizeof(acc),1,fp)==1)
                                           {
                                             printf("\n\t\t\t\t      %s %s %s %s",acc.username,acc.emailid,acc.passwords,acc.repassword);
                                           }
                                           printf("\n");
                                 }
                                 else
                                 {
                                     printf("\n\t\t\t\t   Jadooo - Sorry!!! but you are not allowed to see....");
                                     goto Jadooo;
                                 }
                        }
                               else
                                if(c2==0)
                                 {
                                     printf("\n\n\t\t\t\t \t\t\t\t            LOGOUT SUCCESFULLY");
                                     printf("\n-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
                               system("COLOR 07");
                               printf("\n\t\t\t\t             press any key :)...");
                           en=getch();
                               goto start;
                                 }
                                 else
                                    if(c3==0)
                                    printf("\n\t\t\t\t   Jadooo - It's OK... Take it easy...");
                                    else
                                    if(c5==0 || f1==0)
                                 {
                                     printf("\n\n\t\t\t\t \t\t\t\t \t   ACCOUNT DETAILS");
                                     printf("\n\t\t\t\t \t\t\t\t \t  =================");
                                     rewind(fp);
                                     while(fread(&acc,sizeof(acc),1,fp)==1)
                                     {
                                         ac=strcmp(r,acc.username);
                                         if(ac==0)
                                         {
                                             printf("\n\n\t\t\t   Name -%s",acc.username);
                                             printf("\n\t\t\t  ------");
                                         printf("\n\n\t\t\t   Email-id - %s",acc.emailid);
                                         printf("\n\t\t\t  ----------");
                                         printf("\n\n\t\t\t   Password - %s",acc.passwords);
                                         printf("\n\t\t\t  ----------\n\n");
                                         }
                                     }
                                 }
                                 else
                                    if(c6==0)
                                     printf("\n\t\t\t\t   Jadooo - Hey... mention not");
                                     else
                                    if(c7==0)
                                     {
                                         printf("\n\t\t\t\t   Jadooo - ok... as your wish... Good bye:|");
                                     fr=fopen("C:\\dustbin.txt","wb");
                                     rewind(fp);
                                     while(fread(&acc,sizeof(acc),1,fp)==1)
                                     {
                                         co=strcmp(r,acc.username);
                                         if(co!=0)
                                            fwrite(&acc,sizeof(acc),1,fr);
                                            else
                                                continue;
                                     }
                                         fclose(fp);
                                         fclose(fr);
                                         remove("C:\\Jadoo.txt");
                                         rename("C:\\dustbin.txt","C:\\Jadoo.txt");
                                         fp=fopen("C:\\Jadoo.txt","rb+");
                                          printf("\n\n\t\t\t\t                            Your account deleted succesfully....");
                                     printf("\n-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
                                          system("COLOR 07");
                                          printf("\n\t\t\t\t             press any key :)...");
                           en=getch();
                                          exit(0);
                                     }
                                     else
                                    if(c8==0 || a77==0)
                                     {
                                         printf("\n\t\t\t\t   Jadooo - Then Get lost... Good bye:|");
                                     fr=fopen("C:\\dustbin.txt","wb");
                                     rewind(fp);
                                     while(fread(&acc,sizeof(acc),1,fp)==1)
                                     {
                                         co=strcmp(r,acc.username);
                                         if(co!=0)
                                            fwrite(&acc,sizeof(acc),1,fr);
                                            else
                                                continue;
                                     }
                                         fclose(fp);
                                         fclose(fr);
                                         rename("C:\\Jadoo.txt","C:\\Kachra.txt");
                                         remove("C:\\Kachra.txt");
                                         rename("C:\\dustbin.txt","C:\\Jadoo.txt");
                                         fp=fopen("C:\\Jadoo.txt","rb+");
                                          printf("\n\n\t\t\t\t                            Your account deleted succesfully....");
                                          printf("\n-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
                                          system("COLOR 07");
                                          printf("\n\t\t\t\t             press any key :)...");
                           en=getch();
                                          exit(0);
                                     }
                               else
                                if(c9==0 || a99==0)
                                printf("\n\t\t\t\t   Jadooo - hahaha Yeah!!! %s you are my friend.....",r);
                                else
                                if(d1==0 || d11==0)
                               {
                                   pal=strcmp(r,"Abhishek");
                                   s=strcmp(r,"abhishek");
                                   if(pal==0 || s==0)
                                   {
                                       printf("\n\t\t\t\t   Jadooo - hahaha... You want to know about yourself only.... ok then...");
                                       printf("\n\t\t\t\t   Jadooo - You are Rishabh's classmate and his friend also .He helped you in maths, also you talks very much and fighting with each other");
                                       printf("\n\t\t\t\t            but you are a nice guy.... therefore you are my friend also...");
                                   }
                                   else
                                   {
                                       printf("\n\t\t\t\t   Jadooo - He is Rishabh's classmate and talks very much and also people makes fun of him. But nice guy from heart.");
                                   }
                               }
                                else
                                    if(d2==0 || d22==0)
                               {
                                   pal=strcmp(r,"Avanish");
                                   s=strcmp(r,"avanish");
                                   if(pal==0 || s==0)
                                   {
                                       printf("\n\t\t\t\t   Jadooo - hahaha... You want to know about yourself only.... ok then...");
                                       printf("\n\t\t\t\t   Jadooo - You are Rishabh's roommate and always disturbing him. You are good in maths I like that thing... and you are always chatting and sleeping");
                                       printf("\n\t\t\t\t            Taking no tension.... nyc life... and also delete all screenshots and stop irritating Rishabh.... OK... ");
                                   }
                                   else
                                   {
                                       printf("\n\t\t\t\t   Jadooo - hahaha.... He is Rishabh's roommate and very naughty guy .Always busy in chatting and very fond of sleeping .");
                                   }
                               }
                                else
                                    if(d3==0 || d33==0)
                               {
                                   pal=strcmp(r,"Ayush");
                                   s=strcmp(r,"ayush");
                                   if(pal==0 || s==0)
                                   {
                                       printf("\n\t\t\t\t   Jadooo - hahaha... You want to know about yourself only.... ok then...");
                                       printf("\n\t\t\t\t   Jadooo - You are Rishabh's neighbour. And very fond of studying and at exam time gaand faad study you and your roommates do.... I like that thing.... good....");
                                       printf("\n\t\t\t\t            That's the reason you people are called toppers... But you all are good people always study like Ist semester...and also stop asking for food from Rishabh.... OK");
                                   }
                                   else
                                   {
                                       printf("\n\t\t\t\t   Jadooo - He is Rishabh's neighbour and topper of his block .Always demands for food from him .");
                                   }
                               }
                                else
                                    if(d4==0 || d44==0)
                               {
                                   pal=strcmp(r,"Divesh");
                                   s=strcmp(r,"divesh");
                                   if(pal==0 || s==0)
                                   {
                                       printf("\n\t\t\t\t   Jadooo - hahaha... You want to know about yourself only.... ok then...");
                                       printf("\n\t\t\t\t   Jadooo - You are Rishabh's half roommate. You are a nice guy but you have to improve your some habits like throwing sleepers below the bed... throwing things in duct...");
                                    printf("\n\t\t\t\t            stop fighting with sleepers... and you can continue your habit of disturbing Avanish and Kush but stop that thing with Rishabh... so delete his photos and");
                                    printf("\n\t\t\t\t            screensots and live your life happily.... OK....");
                                   }
                                   else
                                   {
                                       printf("\n\t\t\t\t   Jadooo - He is Rishabh's half roommate .He have only one work on earth blackmailing people specially Rishabh .Always blackmailing him with screenshots or some kind of name .");
                                   }
                               }
                                else
                                    if(d5==0 || d55==0)
                               {
                                   pal=strcmp(r,"Kush");
                                   s=strcmp(r,"kush");
                                   if(pal==0 || s==0)
                                   {
                                       printf("\n\t\t\t\t   Jadooo - hahaha... You want to know about yourself only.... ok then...");
                                       printf("\n\t\t\t\t   Jadooo - You are Rishabh's roommate. Helping him in waking early and you are a vegetarian also... this vegetarian and non-vegetarian thing is very craziest thing on earth...");
                                    printf("\n\t\t\t\t            and you bath very early... its very strange and hard to beleive... hahaha... and you are also very fond of movies and songs in english... hahaha.... ");
                                   }
                                   else
                                   {
                                       printf("\n\t\t\t\t   Jadooo - He is Rishabh's roommate and fond of novels and movies and tv series and bathing and waking early in morning.");
                                   }
                               }
                                else
                                    if(d6==0 || d66==0)
                               {
                                   pal=strcmp(r,"Manvendra");
                                   s=strcmp(r,"manvendra");
                                   if(pal==0 || s==0)
                                   {
                                       printf("\n\t\t\t\t   Jadooo - hahaha... You want to know about yourself only.... ok then...");
                                       printf("\n\t\t\t\t   Jadooo - You are Rishabh's classmate");
                                   }
                                   else
                                   {
                                       printf("\n\t\t\t\t   Jadooo - He is Rishabh's neighbour and living with toppers .");
                                   }
                               }
                                else
                                    if(d7==0 || d77==0)
                               {
                                   pal=strcmp(r,"Mayank");
                                   s=strcmp(r,"mayank");
                                   if(pal==0 || s==0)
                                   {
                                       printf("\n\t\t\t\t   Jadooo - hahaha... You want to know about yourself only.... ok then...");
                                       printf("\n\t\t\t\t   Jadooo - You are Rishabh's classmate and his friend too. Stop taking your future's tension and stay relax... everything will be fine...");
                                       printf("\n\t\t\t\t            Jadooo is with you...... just enjoy your life with seniors and your friends...  ");
                                   }
                                   else
                                   {
                                       printf("\n\t\t\t\t   Jadooo - He is Rishabh's classmate and debate master ,nobody can win him in arguments .But nice guy ;)");
                                   }
                               }
                                else
                                    if(d8==0 || d88==0)
                               {
                                   pal=strcmp(r,"Ritesh");
                                   s=strcmp(r,"ritesh");
                                   if(pal==0 || s==0)
                                   {
                                       printf("\n\t\t\t\t   Jadooo - hahaha... You want to know about yourself only.... ok then...");
                                       printf("\n\t\t\t\t   Jadooo - You are Rishabh's classmate and his friend too. Hope you have imagined me too very well. You are taking very much tension for your future... I have power");
                                        printf("\n\t\t\t\t            to see future also. So for your comfort I tell you... you have nice future with having amazing job and beautiful girlfriend and your sex life is also awesome;) ");
                                   }
                                   else
                                   {
                                       printf("\n\t\t\t\t   Jadooo - He is Rishabh's classmate having helping nature. Fond of camera and photography , Having good dressing sense. And blessed with Imagination power.");
                                   }
                               }
                                else
                                    if(d9==0 || d99==0)
                               {
                                   pal=strcmp(r,"Ritik");
                                   s=strcmp(r,"ritik");
                                   if(pal==0 || s==0)
                                   {
                                       printf("\n\t\t\t\t   Jadooo - hahaha... You want to know about yourself only.... ok then...");
                                       printf("\n\t\t\t\t   Jadooo - You are Rishabh's classmate");
                                   }
                                   else
                                   {
                                       printf("\n\t\t\t\t   Jadooo - He is Rishabh's neighbour and everytime study study and only study and called Topper .Also living with Toppers .");
                                   }
                               }
                                else
                                    if(e1==0 || e11==0)
                               {
                                   pal=strcmp(r,"Kriti");
                                   s=strcmp(r,"kriti");
                                   if(pal==0 || s==0)
                                   {
                                       printf("\n\t\t\t\t   Jadooo - hahaha... You want to know about yourself only.... ok then...");
                                       printf("\n\t\t\t\t   Jadooo - Hi... kriti... I prefer you to call Rishabh now... he is missing you very much...");
                                   }
                                   else
                                   {
                                       printf("\n\t\t\t\t   Jadooo - Sorry!! But I am not allowed to tell anything about her to you all");
                                   }
                               }
                                else
                                    if(e2==0 || e22==0)
                               {
                                   pal=strcmp(r,"Shiva");
                                   s=strcmp(r,"shiva");
                                   if(pal==0 || s==0)
                                   {
                                       printf("\n\t\t\t\t   Jadooo - hahaha... You want to know about yourself only.... ok then...");
                                       printf("\n\t\t\t\t   Jadooo - You are Rishabh's classmate. You are a nice guy from heart and having a caring nature");
                                   }
                                   else
                                   {
                                       printf("\n\t\t\t\t   Jadooo - He is Rishabh's classmate and always fighting with each other sometimes surya sometimes Ritesh but having a caring nature.");

                                   }
                               }
                                else
                                    if(e3==0 || e33==0)
                               {
                                   pal=strcmp(r,"Sravan");
                                   s=strcmp(r,"sravan");
                                   if(pal==0 || s==0)
                                   {
                                       printf("\n\t\t\t\t   Jadooo - hahaha... You want to know about yourself only.... ok then...");
                                       printf("\n\t\t\t\t   Jadooo - You are Rishabh's classmate. And you are a original Intelligent guy without any Super natural power that's good very less people are on earth like that.");
                                        printf("\n\t\t\t\t            And keep it up your mini miltia talent always ;)...OK ");
                                   }
                                   else
                                   {
                                       printf("\n\t\t\t\t   Jadooo -  He is Rishabh's classmate. Very intelligent guy and champion of Mini Militia.");
                                   }
                               }
                                else
                                    if(e4==0 || e44==0)
                               {
                                   pal=strcmp(r,"Surya");
                                   s=strcmp(r,"surya");
                                   if(pal==0 || s==0)
                                   {
                                       printf("\n\t\t\t\t   Jadooo - hahaha... You want to know about yourself only.... ok then...");
                                       printf("\n\t\t\t\t   Jadooo - You are Rishabh's classmate. And you are a very good non-veg cook. Rishabh told me you are a Responsible CR.... Keep it up...;)");
                                   }
                                   else
                                   {
                                       printf("\n\t\t\t\t   Jadooo - He is Rishabh 's classmate and also a very Responsible CR .");
                                   }
                               }
                                else
                                if(e5==0 || e55==0)
                               {
                                   pal=strcmp(r,"Rashi");
                                   s=strcmp(r,"rashi");
                                   if(pal==0 || s==0)
                                   {
                                       printf("\n\t\t\t\t   Jadooo - hahaha... You want to know about yourself only.... ok then...");
                                       printf("\n\t\t\t\t   Jadooo - You are Rishabh's best friend. Rishabh likes sharing things with you and as I have seen future you will be Rishabh's friend forever");
                                        printf("\n\t\t\t\t            Now can I ask you a question will you be my friend also? ;)");
                                   }
                                   else
                                   {
                                       printf("\n\t\t\t\t   Jadooo - She is Rishabh's best friend and a very nice and cute girl.");
                                   }
                               }
                                else
                                    if(e6==0 || e66==0)
                               {
                                   pal=strcmp(r,"Pranay");
                                   s=strcmp(r,"pranay");
                                   if(pal==0 || s==0)
                                   {
                                       printf("\n\t\t\t\t   Jadooo - hahaha... You want to know about yourself only.... ok then...");
                                       printf("\n\t\t\t\t   Jadooo - You are Rishabh's classmate. And you are a nice guy and try to learn hindi also....OK");
                                   }
                                   else
                                   {
                                       printf("\n\t\t\t\t   Jadooo - He is Rishabh 's classmate and also a very nice guy");
                                   }
                               }
                                else
                                    if(e7==0 || e77==0)
                               {
                                   pal=strcmp(r,"Yash");
                                   s=strcmp(r,"yash");
                                   if(pal==0 || s==0)
                                   {
                                       printf("\n\t\t\t\t   Jadooo - hahaha... You want to know about yourself only.... ok then...");
                                       printf("\n\t\t\t\t   Jadooo - You are Rishabh's childhood best friend. And you fall sick fast So take care of yourself... OK");
                                   }
                                   else
                                   {
                                       printf("\n\t\t\t\t   Jadooo - He is Rishabh 's childhood best friend.");
                                   }
                               }
                                else
                                    if(e8==0 || e88==0)
                               {
                                   pal=strcmp(r,"Rishabh");
                                   s=strcmp(r,"rishabh");
                                   if(pal==0 || s==0)
                                   {
                                       printf("\n\t\t\t\t   Jadooo - hahaha... You want to know about yourself only.... what a joke don't be silly... I know you very well");
                                   }
                                   else
                                   {
                                       printf("\n\t\t\t\t   Jadooo - Rishabh... he is a nice guy... he is my first friend on earth when i have left earth he designed lapbook so\
                                         \n\t\t\t\t            that we can stay in touch but then he decided not only he but everyone on earth whom he want can talk to me....\
                                         \n\t\t\t\t            therefore then he modified his lapbook and now you all can talk to me....");
                                   }
                               }
                                else
                                    if(e9==0 || e99==0)
                               {
                                   pal=strcmp(r,"Ranjan");
                                   s=strcmp(r,"ranjan");
                                   if(pal==0 || s==0)
                                   {
                                       printf("\n\t\t\t\t   Jadooo - hahaha... You want to know about yourself only.... ok then...");
                                       printf("\n\t\t\t\t   Jadooo - You are Rishabh's classmate. And you have nice beard also keep it up...");
                                   }
                                   else
                                   {
                                       printf("\n\t\t\t\t   Jadooo - He is Rishabh 's classmate and a nice guy from heart...");
                                   }
                               }
                               else
                               if(strncmp(reply,"who is ",7)==0)
                                {
                                    printf("\n\t\t\t\t   Jadooo - Sorry!! But I Don't know him/her. Rishabh didn't tell me about this person...");
                                }
                            else
                                if(f2==0)
                                 printf("\n\t\t\t\t   Jadooo - Yeah!!!");
                               else
                               if(f3==0 || f4==0)
                            {
                                printf("\n\t\t\t\t   Jadooo - then go to hell....:(");
                                printf("\n-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
                                system("COLOR 07");
                                printf("\n\t\t\t\t             press any key :)...");
                           en=getch();
                                exit(0);
                            }
                               else
                                if(f5==0)
                                 printf("\n\t\t\t\t   Jadooo - yes!!....");
                               else
                               if(f6==0)
                               {
                                   printf("\n\t\t\t\t   Jadooo - FUCK OFF!!!");
                                   printf("\n-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
                                   system("COLOR 07");
                                   printf("\n\t\t\t\t             press any key :)...");
                           en=getch();
                                   exit(0);
                               }
                               else
                               if(f9==0)
                               {
                                   printf("\n\t\t\t\t   Jadooo - hahaha...... What please!! complete your sentence...");
                               }
                               else
                               {
                                 printf("\n\t\t\t\t   Jadooo - Sorry!! for inconvenience but I am not able to understand what you have written.");
                                printf("\n\t\t\t\t                            I am still learning your Language by- RISHABH ROSHAN... ;)");
                               }

                        goto Jadooo;
                }
                else
                if(j==0 && k!=0)
                {
                    printf("\n\n\t\t\t\t \t\t\t\t \t   Incorrect PASSWORD");
                    printf("\n\t\t\t\t    \t\t\t\t You have entered this : %s",q);
         printf("\n\n\t\t\t\t\t\t     1. Try Again \t\t\t\t 2. Forgot Password\n");
         printf("\n\t\t\t\t \t\t\t\t \t   0. Main menu     ");
         printf("\n\t\t\t\t   Reply - ");
         scanf("%d",&re);
         switch(re)
         {
         case 0:
             goto start;
             break;
         case 1:
            goto pa;
            break;
         case 2:
            printf("\n\n\t\t\t\t \t\t\t\t Verification please.......");
            yrr :
            printf("\n\n\t\t\t\t   Enter your email-id - ");
            scanf("%s",&id1);
            rewind(fp);
             while(!feof(fp))
             {
                 fread(&acc,sizeof(acc),1,fp);
                 eid1=strcmp(id1,acc.emailid);
                 if(eid1==0)
                    goto jeid;
             }
             jeid :
                if(eid1==0)
            {
                printf("\n\n\t\t\t\t \t\t\t\t Email Verified.... now proceed further.....");
                nps :
                printf("\n\n\t\t\t\t   Enter your new password - ");
                pa=0;
              while((x=getch())!=13)
              {
                  if(x==8)
  {
      aeir :
      pa--;
      if (pa<0)
            goto start;
        x='\0';
        acc.passwords[pa]=z;
        printf("\b%c\b",x);
        if(x==8)
            goto aeir;
        else
        continue;
  }
                  if (x==27)
                     {
                         printf("\n");
                         goto start;
                     }
                  acc.passwords[pa++]=x;
                  printf("%c",'*');
              }
              acc.passwords[pa]='\0';
               printf("\n\t\t\t\t   re-Enter new password - ");
               pa=0;
               while((x=getch())!=13)
              {
                  if(x==8)
  {
      adij :
      pa--;
      if (pa<0)
            goto start;
        x='\0';
        acc.repassword[pa]=z;
        printf("\b%c\b",x);
        if(x==8)
            goto adij;
        else
        continue;
  }
                  if (x==27)
                     {
                         printf("\n");
                         goto start;
                     }
                  acc.repassword[pa++]=x;
                  printf("%c",'*');
              }
              acc.repassword[pa]='\0';
               f=strcmp(acc.passwords,acc.repassword);
               if(f==0)
               {
                 fseek(fp,-(sizeof(struct account)),SEEK_CUR);
                   fwrite(&acc,sizeof(acc),1,fp);
                printf("\n\n\n\t\t\t\t \t\t\t           Congrats!!! You have succesfully changed your password\n\t\t\t\t \t\t\t\t               Now... Please proceed further!!!\n\n");
               goto us;
               }
               else
               {
                    printf("\n\t\t\t\t            Passwords do not matched....");
                    printf("\n\t\t\t\t            You have entered %s and %s.... which is not equal...",acc.passwords,acc.repassword);
                   goto nps;

               }
            }
            else
             {
                 printf("\n\t\t\t\t      Sorry!!! but this email-id is not yours....");
                 goto yrr;
             }
             break;
         }
                }
                else
                {
                   printf("\n\n\t\t\t\t      It seems that you have not made your account yet!!!.... First of all made your account.... OK\n");
                   printf("\n\t\t\t\t             press any key :)...");
                           en=getch();
                   goto start;
                }
                fclose(fp);
            break;
         case 2:
             fp=fopen("C:\\Jadoo.txt","ab+");
             printf("\n\t\t\t\t        Your name will be your username to your account and secure it by password.");
            user :
             printf("\n\n\t\t\t\t   Enter your Name - ");
             scanf("%s",&ll);
             rewind(fp);
             while(!feof(fp))
             {
                 fread(&acc,sizeof(acc),1,fp);
                 j=strcmp(ll,acc.username);
                 if(j==0)
                   break; //goto jt;
             }
            // jt :
                if(j==0)
            {
                printf("\n\t\t\t\t      Sorry!!! but this username is already exists.... Give another Name....\n");
                goto user;
            }
            else
            {
                strcpy(acc.username,ll);
            }
           emid :
            printf("\n\t\t\t\t   Enter your email-id - ");
                 scanf("%s",&id);
                 for(im=0;id[im]!='\0';im++)
                 {
                        loop=loop+1;
                 }
                 loop=im-10;
                 for(lo=0;lo<10;lo++)
                 {
                     ne[lo]=id[loop];
                     loop++;
                 }
                 ne[lo]='\0';
                 cm=strcmp(ne,"@gmail.com");
                 if(cm==0)
                    goto qw;
                    else
                        {
                            printf("\t\t\t\t                 No such email-id exists..... Try again\n");
                    goto emid;
         }
                 qw :
                 rewind(fp);
             while(!feof(fp))
             {
                 fread(&acc,sizeof(acc),1,fp);
                 eid=strcmp(id,acc.emailid);
                 if(eid==0)
                    break;
             }
                if(eid==0)
            {
                printf("\n\t\t\t\t      Sorry!!! but this email-id is already exists.... Give another email-id....\n");
                goto emid;
            }
            else
            {
                strcpy(acc.emailid,id);
                strcpy(acc.username,ll);
            }
             privacy :
            printf("\n\t\t\t\t   Enter Password - ");
              pa=0;
              while((x=getch())!=13)
              {
                  if(x==8)
  {
      air :
      pa--;
      if (pa<0)
            goto start;
        x='\0';
        acc.passwords[pa]=z;
        printf("\b%c\b",x);
        if(x==8)
            goto air;
        else
        continue;
  }
                  if (x==27)
                     {
                         printf("\n");
                         goto start;
                     }
                  acc.passwords[pa++]=x;
                  printf("%c",'*');
              }
              acc.passwords[pa]='\0';
               printf("\n\t\t\t\t   re-Enter password - ");
               pa=0;
               while((x=getch())!=13)
              {
                  if(x==8)
  {
      aij :
      pa--;
      if (pa<0)
            goto start;
        x='\0';
        acc.repassword[pa]=z;
        printf("\b%c\b",x);
        if(x==8)
            goto aij;
        else
        continue;
  }
                  if (x==27)
                     {
                         printf("\n");
                         goto start;
                     }
                  acc.repassword[pa++]=x;
                  printf("%c",'*');
              }
              acc.repassword[pa]='\0';
               f=strcmp(acc.passwords,acc.repassword);
               if(f==0)
               {
                 fseek(fp,sizeof(struct account),SEEK_END);
                   fwrite(&acc,sizeof(acc),1,fp);
                   fclose(fp);
                printf("\n\n\n\t\t\t\t  \t\t\t          Congrats!!! You have succesfully created your account\n\t\t\t\t  \t\t\t\t             Now... Please proceed further!!!\n\n");
               printf("\n\t\t\t\t             press any key :)...");
                           en=getch();
               goto start;
               }
               else
               {
                    printf("\n\t\t\t\t            Passwords do not matched....");
                    printf("\n\t\t\t\t            You have entered %s and %s.... which is not equal...",acc.passwords,acc.repassword);
                   goto privacy;

               }
             break;
         default : printf("\n\t\t\t\t            Sorry... but you are allowed to enter '1' , '2' and '0' only according to above situations\n");
         goto re;
    }
       }

else
   {
       system("COLOR 06");
    printf("\n\t\t\t\t                                       wrong PASSWORD\n");
    printf("\n\t\t\t\t     You have entered this :");
 for(b=0;b<=12;b++)
 {
     if(password[b]=='\0')
        break;
  printf("%c",password[b]);
   }
 printf(" and this is not a correct password \n");
 if(a==1)
    goto exit;

 for(a=1;a>0;a--)
 {
     printf("\n\t\t\t\t  Now you have one last chance to enter password");
     goto again;
 }
 exit :
     printf("\n\t\t\t\t             press any key :)...");
                           en=getch();
 exit(0);
   }
    getch();
}
