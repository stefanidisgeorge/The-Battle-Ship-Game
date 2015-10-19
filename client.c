#include <string.h>
#include <stdio.h> 
#include <stdlib.h>
#include <ctype.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <pthread.h>

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

struct sockaddr_in address, client_addr;   //Socket structure

int main(int argc, char *argv[])
{
    //game
	int labeltsek,i,j,x,y,line,thesh[210][210],problhma,reset,epanalhpsh, player_num,ACKN[2],botships[6];
	char f,temp1,temp2,answer;
	char a,c='A';
	char nthesh[210][210];
    //flag gia receive apo ton server
    int flag_rec=1,botwin,hit,times,flag1,b,d,q,w,ships[6];
	int flag=1,playerwin,signal=0,signal2=0,c_score=0;
    char aircraft[3],battleship[3],frigate[3],submarine[3],destroyer[3],target[2];
    int kati,ari8mos;
    //Dilwseis Bot
    ships[5]=5;
    ships[4]=4;
    ships[3]=3;
    ships[2]=3;
    ships[1]=2;
    botships[5]=5;
    botships[4]=4;
    botships[3]=3;
    botships[2]=3;
    botships[1]=2;
	
	//arxi
    //gia to b
     for(i=0;i<7;i++) printf(ANSI_COLOR_BLUE   "*"  ANSI_COLOR_RESET);
     //gia to a
	 for(i=6;i<15;i++) printf(" "); 
     printf(ANSI_COLOR_BLUE   "*"  ANSI_COLOR_RESET);
     
     //gia to prwto T
	 for(i=14;i<19;i++) printf(" "); 
	 for(i=20;i<27;i++) printf(ANSI_COLOR_BLUE   "*"  ANSI_COLOR_RESET);
     //gia to deutero T
     for(i=27;i<28;i++) printf(" "); 
	 for(i=28;i<35;i++) printf(ANSI_COLOR_BLUE   "*"  ANSI_COLOR_RESET); 
     //gia to L
     for(i=28;i<31;i++) printf(" "); 
	 printf(ANSI_COLOR_BLUE   "*"  ANSI_COLOR_RESET);
	 
     //gia to E
     for(i=31;i<39;i++) printf(" "); 
      
     for(i=39;i<46;i++) printf(ANSI_COLOR_BLUE   "*"  ANSI_COLOR_RESET);
     
	 
	 //gia to b 
     printf("\n");
     printf(ANSI_COLOR_BLUE   "*"  ANSI_COLOR_RESET);
     for(i=0;i<6;i++) printf(" ");
     printf(ANSI_COLOR_BLUE   "*"  ANSI_COLOR_RESET);
     //gia to a 
     for(i=6;i<13;i++) printf(" "); 
     printf(ANSI_COLOR_BLUE   "*"  ANSI_COLOR_RESET);
     for(i=13;i<14;i++) printf(" "); 
     printf(ANSI_COLOR_BLUE   "*"  ANSI_COLOR_RESET);
     
     //gia to prwto T
	 for(i=14;i<21;i++) printf(" "); 
     printf(ANSI_COLOR_BLUE   "*"  ANSI_COLOR_RESET);
	 //gia to deutero T 
	 for(i=21;i<28;i++) printf(" "); 
     printf(ANSI_COLOR_BLUE   "*"  ANSI_COLOR_RESET);
     //gia to L
     for(i=28;i<34;i++) printf(" "); 
     printf(ANSI_COLOR_BLUE   "*"  ANSI_COLOR_RESET);
     
     //gia to E
     for(i=34;i<42;i++) printf(" "); 
     printf(ANSI_COLOR_BLUE   "*"  ANSI_COLOR_RESET); 
     
     
     
     
     
     
     
     //gia to b
     printf("\n");
     printf(ANSI_COLOR_BLUE   "*"  ANSI_COLOR_RESET);
     for(i=0;i<6;i++) printf(" ");
     printf(ANSI_COLOR_BLUE   "*"  ANSI_COLOR_RESET); 
     //gia to a 
     for(i=6;i<12;i++) printf(" "); 
     printf(ANSI_COLOR_BLUE   "*"  ANSI_COLOR_RESET);
     for(i=13;i<16;i++) printf(" "); 
     printf(ANSI_COLOR_BLUE   "*"  ANSI_COLOR_RESET);
     
     //gia to prwto T
	 for(i=16;i<22;i++) printf(" "); 
     printf(ANSI_COLOR_BLUE   "*"  ANSI_COLOR_RESET);
     //gia to deutero T 
	 for(i=22;i<29;i++) printf(" "); 
     printf(ANSI_COLOR_BLUE   "*"  ANSI_COLOR_RESET);
     
     //gia to L
     for(i=29;i<35;i++) printf(" "); 
     printf(ANSI_COLOR_BLUE   "*"  ANSI_COLOR_RESET);
     
     //gia to E
     for(i=35;i<43;i++) printf(" "); 
     printf(ANSI_COLOR_BLUE   "*"  ANSI_COLOR_RESET); 
     
     //gia to b
     printf("\n");
     for(i=0;i<7;i++) printf(ANSI_COLOR_BLUE   "*"  ANSI_COLOR_RESET); 
     //gia to a
     for(i=5;i<11;i++) printf(" "); 
     printf(ANSI_COLOR_BLUE   "*"  ANSI_COLOR_RESET); 
     for(i=13;i<18;i++) printf(" "); 
     printf(ANSI_COLOR_BLUE   "*"  ANSI_COLOR_RESET);
     
     
     //gia to prwto T
	 for(i=18;i<23;i++) printf(" "); 
     printf(ANSI_COLOR_BLUE   "*"  ANSI_COLOR_RESET);
	 //gia to deutero T 
	 for(i=23;i<30;i++) printf(" "); 
     printf(ANSI_COLOR_BLUE   "*"  ANSI_COLOR_RESET);
     
     
     //gia to L
     for(i=30;i<36;i++) printf(" "); 
     printf(ANSI_COLOR_BLUE   "*"  ANSI_COLOR_RESET);
     
     //gia to E
     for(i=36;i<44;i++) printf(" "); 
     for(i=44;i<51;i++) printf(ANSI_COLOR_BLUE   "*"  ANSI_COLOR_RESET);
     
     
     //gia to b
     printf("\n");
     printf(ANSI_COLOR_BLUE   "*"  ANSI_COLOR_RESET);
     for(i=0;i<6;i++) printf(" ");
     printf(ANSI_COLOR_BLUE   "*"  ANSI_COLOR_RESET);
	 //gia to a 
     for(i=6;i<10;i++) printf(" "); 
     printf(ANSI_COLOR_BLUE   "*"  ANSI_COLOR_RESET);  
     for(i=13;i<21;i++) printf(ANSI_COLOR_BLUE   "*"  ANSI_COLOR_RESET); 
     
     //gia to prwto T
	 for(i=21;i<25;i++) printf(" "); 
     printf(ANSI_COLOR_BLUE   "*"  ANSI_COLOR_RESET);
	 //gia to deutero T 
	 for(i=25;i<32;i++) printf(" "); 
     printf(ANSI_COLOR_BLUE   "*"  ANSI_COLOR_RESET);
	 
     //gia to L
     for(i=32;i<38;i++) printf(" "); 
     printf(ANSI_COLOR_BLUE   "*"  ANSI_COLOR_RESET); 
     //gia to E
     for(i=38;i<46;i++) printf(" "); 
     printf(ANSI_COLOR_BLUE   "*"  ANSI_COLOR_RESET); 
     
     
     //gia to b
	 printf("\n");
     printf(ANSI_COLOR_BLUE   "*"  ANSI_COLOR_RESET);
     for(i=0;i<6;i++) printf(" ");
     printf(ANSI_COLOR_BLUE   "*"  ANSI_COLOR_RESET); 
     //gia to a 
     for(i=6;i<9;i++) printf(" "); 
     printf(ANSI_COLOR_BLUE   "*"  ANSI_COLOR_RESET);  
     for(i=13;i<22;i++) printf(" "); 
     printf(ANSI_COLOR_BLUE   "*"  ANSI_COLOR_RESET); 
     //gia to prwto T
	 for(i=22;i<25;i++) printf(" "); 
     printf(ANSI_COLOR_BLUE   "*"  ANSI_COLOR_RESET);  
     
     //gia to deutero T 
	 for(i=25;i<32;i++) printf(" "); 
     printf(ANSI_COLOR_BLUE   "*"  ANSI_COLOR_RESET);
     
     //gia to L
     for(i=32;i<38;i++) printf(" "); 
     printf(ANSI_COLOR_BLUE   "*"  ANSI_COLOR_RESET);
     //gia to E
     for(i=38;i<46;i++) printf(" "); 
     printf(ANSI_COLOR_BLUE   "*"  ANSI_COLOR_RESET); 
     
     //gia to b
     printf("\n");
     for(i=0;i<7;i++) printf(ANSI_COLOR_BLUE   "*"  ANSI_COLOR_RESET); 
     //gia to a
     for(i=7;i<10;i++) printf(" "); 
     printf(ANSI_COLOR_BLUE   "*"  ANSI_COLOR_RESET);  
     for(i=13;i<24;i++) printf(" "); 
     printf(ANSI_COLOR_BLUE   "*"  ANSI_COLOR_RESET);
     //gia to prwto T
	 for(i=24;i<26;i++) printf(" "); 
     printf(ANSI_COLOR_BLUE   "*"  ANSI_COLOR_RESET);  
	 //gia to deutero T 
	 for(i=26;i<33;i++) printf(" "); 
     printf(ANSI_COLOR_BLUE   "*"  ANSI_COLOR_RESET);	
     
	 
	 
     //gia to L
     for(i=33;i<39;i++) printf(" "); 
     for(i=39;i<46;i++) printf(ANSI_COLOR_BLUE   "*"  ANSI_COLOR_RESET);	 
    //gia to E
     for(i=46;i<48;i++) printf(" "); 
     for(i=48;i<55;i++) printf(ANSI_COLOR_BLUE   "*"  ANSI_COLOR_RESET); 	
	
	//epomenh grammh
	printf("\n\n");
	//gia to S
	for(i=0;i<23;i++) printf(" "); 
	for(i=23;i<30;i++) printf(ANSI_COLOR_BLUE   "*"  ANSI_COLOR_RESET); 
	//gia to H
	for(i=30;i<34;i++) printf(" ");
	printf(ANSI_COLOR_BLUE   "*"  ANSI_COLOR_RESET);
	for(i=23;i<28;i++) printf(" ");
	printf(ANSI_COLOR_BLUE   "*"  ANSI_COLOR_RESET);
	//gia to I
	for(i=28;i<31;i++) printf(" ");
	for(i=23;i<30;i++) printf(ANSI_COLOR_BLUE   "*"  ANSI_COLOR_RESET);
	//gia to P
	for(i=28;i<31;i++) printf(" ");
	printf(ANSI_COLOR_BLUE   "*"  ANSI_COLOR_RESET);
	for(i=28;i<34;i++) printf(ANSI_COLOR_BLUE   "*"  ANSI_COLOR_RESET);
	
	
	//gia to S
	printf ("\n");
	for(i=0;i<22;i++) printf(" "); 
    printf(ANSI_COLOR_BLUE   "*"  ANSI_COLOR_RESET);
    //gia to H
	for(i=22;i<33;i++) printf(" ");
	printf(ANSI_COLOR_BLUE   "*"  ANSI_COLOR_RESET);
	for(i=23;i<28;i++) printf(" ");
	printf(ANSI_COLOR_BLUE   "*"  ANSI_COLOR_RESET);
	//gia to I
	for(i=28;i<34;i++) printf(" ");
	printf(ANSI_COLOR_BLUE   "*"  ANSI_COLOR_RESET);
	//gia to P
	for(i=28;i<34;i++) printf(" ");
	printf(ANSI_COLOR_BLUE   "*"  ANSI_COLOR_RESET);
	for(i=28;i<33;i++) printf(" ");
	printf(ANSI_COLOR_BLUE   "*"  ANSI_COLOR_RESET);
	
    //gia to S
    printf ("\n");
    for(i=0;i<22;i++) printf(" "); 
    printf(ANSI_COLOR_BLUE   "*"  ANSI_COLOR_RESET);
    //gia to H
	for(i=22;i<33;i++) printf(" ");
	printf(ANSI_COLOR_BLUE   "*"  ANSI_COLOR_RESET);
	for(i=23;i<28;i++) printf(" ");
	printf(ANSI_COLOR_BLUE   "*"  ANSI_COLOR_RESET);
	//gia to I
	for(i=28;i<34;i++) printf(" ");
	printf(ANSI_COLOR_BLUE   "*"  ANSI_COLOR_RESET);
	//gia to P
	for(i=28;i<34;i++) printf(" ");
	printf(ANSI_COLOR_BLUE   "*"  ANSI_COLOR_RESET);
	
	for(i=28;i<33;i++) printf(" ");
	printf(ANSI_COLOR_BLUE   "*"  ANSI_COLOR_RESET);
	
    //gia to S
    printf ("\n");
	for(i=0;i<23;i++) printf(" "); 
	for(i=23;i<30;i++) printf(ANSI_COLOR_BLUE   "*"  ANSI_COLOR_RESET);
	//gia to H
	for(i=30;i<34;i++) printf(" ");
	for(i=23;i<30;i++) printf(ANSI_COLOR_BLUE   "*"  ANSI_COLOR_RESET);
	//gia to I
	for(i=28;i<34;i++) printf(" ");
	printf(ANSI_COLOR_BLUE   "*"  ANSI_COLOR_RESET);
	//gia to P
	for(i=28;i<34;i++) printf(" ");
	printf(ANSI_COLOR_BLUE   "*"  ANSI_COLOR_RESET);
	
	for(i=28;i<34;i++) printf(ANSI_COLOR_BLUE   "*"  ANSI_COLOR_RESET);
	
	//gia to S
	printf ("\n");
	for(i=0;i<30;i++) printf(" ");
	printf(ANSI_COLOR_BLUE   "*"  ANSI_COLOR_RESET);
	//gia to H
	for(i=30;i<33;i++) printf(" ");
	printf(ANSI_COLOR_BLUE   "*"  ANSI_COLOR_RESET);
	for(i=23;i<28;i++) printf(" ");
	printf(ANSI_COLOR_BLUE   "*"  ANSI_COLOR_RESET);
	//gia to I
	for(i=28;i<34;i++) printf(" ");
	printf(ANSI_COLOR_BLUE   "*"  ANSI_COLOR_RESET);
	//gia to P
	for(i=28;i<34;i++) printf(" ");
	printf(ANSI_COLOR_BLUE   "*"  ANSI_COLOR_RESET);
	
	//gia to S
	printf ("\n");
	for(i=0;i<30;i++) printf(" ");
	printf(ANSI_COLOR_BLUE   "*"  ANSI_COLOR_RESET);
	//gia to H
	for(i=30;i<33;i++) printf(" ");
	printf(ANSI_COLOR_BLUE   "*"  ANSI_COLOR_RESET);
	for(i=23;i<28;i++) printf(" ");
	printf(ANSI_COLOR_BLUE   "*"  ANSI_COLOR_RESET);
	//gia to I
	for(i=28;i<34;i++) printf(" ");
	printf(ANSI_COLOR_BLUE   "*"  ANSI_COLOR_RESET);
	//gia to P
	for(i=28;i<34;i++) printf(" ");
	printf(ANSI_COLOR_BLUE   "*"  ANSI_COLOR_RESET);
	
	//gia to S
	printf("\n");
	for(i=0;i<23;i++) printf(" "); 
	for(i=23;i<30;i++) printf(ANSI_COLOR_BLUE   "*"  ANSI_COLOR_RESET); 
	//gia to H
	for(i=30;i<34;i++) printf(" ");
	printf(ANSI_COLOR_BLUE   "*"  ANSI_COLOR_RESET);
	for(i=23;i<28;i++) printf(" ");
	printf(ANSI_COLOR_BLUE   "*"  ANSI_COLOR_RESET);
	//gia to I
	for(i=28;i<31;i++) printf(" ");
	for(i=23;i<30;i++) printf(ANSI_COLOR_BLUE   "*"  ANSI_COLOR_RESET);
	//gia to P
	for(i=28;i<31;i++) printf(" ");
	printf(ANSI_COLOR_BLUE   "*"  ANSI_COLOR_RESET);
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");


	
	printf("\t\t\tPress any number + Enter to continue....");
	printf("\n");
	scanf("%d",&kati); 
	system("clear");
 	

	printf("\n\n\n\n\t\t");
     for(i=0;i<50;i++)   printf(ANSI_COLOR_GREEN   "*"   ANSI_COLOR_RESET );
     printf("\n\t\t");
     printf(ANSI_COLOR_GREEN   "*"   ANSI_COLOR_RESET );
     for(i=0;i<22;i++) printf(" ");
     printf(ANSI_COLOR_GREEN   "MENU"   ANSI_COLOR_RESET );
     for(i=0;i<22;i++) printf(" ");
     printf(ANSI_COLOR_GREEN   "*"   ANSI_COLOR_RESET "\n" );
     printf("\t\t");
     printf(ANSI_COLOR_GREEN   "*"   ANSI_COLOR_RESET );
     for(i=0;i<48;i++) printf(" ");
     printf(ANSI_COLOR_GREEN   "*"   ANSI_COLOR_RESET "\n" );
     printf("\t\t");
     printf(ANSI_COLOR_GREEN   "*"   ANSI_COLOR_RESET );
     for(i=0;i<13;i++) printf(" ");
     printf(ANSI_COLOR_GREEN   "Please Select an Option"   ANSI_COLOR_RESET );
     for(i=0;i<12;i++) printf(" ");
     printf(ANSI_COLOR_GREEN   "*"   ANSI_COLOR_RESET "\n" );
     printf("\t\t");
     printf(ANSI_COLOR_GREEN   "*"   ANSI_COLOR_RESET );
     for(i=0;i<48;i++) printf(" ");
     printf(ANSI_COLOR_GREEN   "*"   ANSI_COLOR_RESET "\n" );
     printf("\t\t");
     printf(ANSI_COLOR_GREEN   "*"   ANSI_COLOR_RESET );
     printf(ANSI_COLOR_GREEN   " 1. Player VS Player"   ANSI_COLOR_RESET );
     for(i=0;i<28;i++) printf(" ");
     printf(ANSI_COLOR_GREEN   "*"   ANSI_COLOR_RESET "\n" );
     printf("\t\t");
     printf(ANSI_COLOR_GREEN   "*"   ANSI_COLOR_RESET );
     printf(ANSI_COLOR_GREEN   " 2. Player VS AI"   ANSI_COLOR_RESET );
     for(i=0;i<32;i++) printf(" ");
     printf(ANSI_COLOR_GREEN   "*"   ANSI_COLOR_RESET "\n" );
     printf("\t\t");
     printf(ANSI_COLOR_GREEN   "*"   ANSI_COLOR_RESET );
     printf(ANSI_COLOR_GREEN   " 3. Quit Battleship"   ANSI_COLOR_RESET );
     for(i=0;i<29;i++) printf(" ");
     printf(ANSI_COLOR_GREEN   "*"   ANSI_COLOR_RESET "\n" );
     printf("\t\t");
     printf(ANSI_COLOR_GREEN   "*"   ANSI_COLOR_RESET );
     for(i=0;i<48;i++) printf(" ");
     printf(ANSI_COLOR_GREEN   "*"   ANSI_COLOR_RESET "\n" );
     printf("\t\t");
     printf(ANSI_COLOR_GREEN   "*"   ANSI_COLOR_RESET );
     for(i=0;i<48;i++) printf(" ");
     printf(ANSI_COLOR_GREEN   "*"   ANSI_COLOR_RESET "\n" );
     printf("\t\t");
     printf(ANSI_COLOR_GREEN   "*"   ANSI_COLOR_RESET );
     for(i=0;i<49;i++) printf(ANSI_COLOR_GREEN   "*"   ANSI_COLOR_RESET );
	printf("\n \n \n ");
     scanf("%d",&ari8mos);
    
   
    //telos arxis
    
    
    if (ari8mos==1){
     system("clear");
	
    //parameter check
    if (argc!=3){
        printf("2 Parametres: <port>, <ip>\n");
        exit(0);
    }
    int port=atoi(argv[1]);//thyra epikoinwnias
    int buf=strlen(argv[2]);
    char *ip=malloc(buf*sizeof(char));//dynamiki desmeusi gia tin ip
    ip= argv[2];//ip epikoinwnias
    printf("You Select...\nport: %d, ip: %s\n================================\n", port, ip);
    //end check
    
   //create socket
    int socket_ret;
    socket_ret=socket(PF_INET, SOCK_STREAM, 0);
    if (socket_ret==-1) {
        perror("Socket Error"); exit(0);
    }
    else printf("Socket Created \n");
    address.sin_family = PF_INET;
    address.sin_addr.s_addr = inet_addr(ip);
    address.sin_port = htons(port);
    //syndesi sto socket
    int connect_ret;
    connect_ret=connect(socket_ret, (struct sockaddr *) &address, sizeof(address));
    if (connect_ret==-1){
        perror("Connect Error");
        exit(0);
    }
    else printf("Connection Established\n");
    //egine sundesi
    sleep(5);
    system("clear");

    //eisagogi name
    char name[15]="NAME ",buf_name[10];
    int write_ret,read_ret;
    printf("Hello User, What Is Your Name?: ");
    scanf("%s", &buf_name);
    strcat(name,buf_name);
    sleep(1);
    system("clear");
    printf("%s\n", name);
    buf=strlen(name);
    
    write_ret=write(socket_ret, name, buf);
    
    if (write_ret==-1){
        perror("Write Error");
        exit(0);}
    //exei sthlei to name tou
    
    
    //apantisi welcome
    char wellcome[15];
    read_ret=read(socket_ret, wellcome, sizeof(wellcome));
    if (read_ret==-1){
        perror("Read Error");
        exit(0);
    }
    else printf("%s\n", wellcome);
    player_num= ((int)wellcome[10]) - 48;
    //read_ret=read(socket_ret);
    if (read_ret==-1){
        perror("Read Error");
        exit(0);
        }
    //******************************************************************************************************************************
    //startingplacement
    char starting[20];
    printf("Waiting for the other player\n");
    read_ret=read(socket_ret, starting, sizeof(starting));
    if (read_ret==-1){
        perror("Read Error");
        exit(0);
        }
    
    
    sleep(2);
    system("clear");
  
    while(strcmp(starting,"STARTINGPLACEMENT")!=0){
        printf("Waiting for the other player\n");
        sleep(2);
        read_ret=read(socket_ret, starting, sizeof(starting));
        if (read_ret==-1){
            perror("Read Error");
            exit(0);
        }
    }
    //**************************************************************************************************************************************
        
        
        sleep(2);
        system("clear");
        printf("%s\n", starting);
    
    
	reset=1;
   while(reset==1)
   {
    
	for (i=0; i<210; i++){
		for (j=0; j<210; j++){
			thesh[i][j]=0;	
		}
	}
	printf("\t|0  |1  |2  |3  |4  |5  |6  |7  |8  |9   |10 \n");
	for(j=0; j < 10 ; j++ ){
            printf("%d",j);
            printf("\t|%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d   |%d", thesh[0][j],thesh[1][j],thesh[2][j],thesh[3][j],thesh[4][j],thesh[5][j],thesh[6][j],thesh[7][j],thesh[8][j],thesh[9][j],thesh[10][j]);
            printf("\n");
            
	}	
	//Aircraft Carrier
	problhma=1;
 while(problhma==1)
 {
    problhma=0;
	printf("Position for Aircraft Carrier(5 slots)? \n");
	fflush(stdin);
	scanf("%d %c %d %c %c", &i,&temp1,&j,&temp2,&f);
	if( isdigit(i)==0 && isdigit(j)==0 && isalpha(f)==0){
		problhma=1;
	}
	
	
	
	if (i >= 0 && i<=10 && j>=0 && j<=9)
	{
	if ( f=='U' || f=='D' || f=='L' || f=='R')
	{
	if ( f == 'U')
		{
			if (j >= 4)
			{
			thesh[i][j]=5;
			thesh[i][j-1]=5;
			thesh[i][j-2]=5;
			thesh[i][j-3]=5;
			thesh[i][j-4]=5;
		
			printf("\t|0  |1  |2  |3  |4  |5  |6  |7  |8  |9   |10 \n");
			for(j=0; j < 10 ; j++ )
				{
            	printf("%d",j);
            	printf("\t|%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d   |%d", thesh[0][j],thesh[1][j],thesh[2][j],thesh[3][j],thesh[4][j],thesh[5][j],thesh[6][j],thesh[7][j],thesh[8][j],thesh[9][j],thesh[10][j]);
            	printf("\n");
    	 		}
    	 	}
    	 	
			else
			{
				printf("Wrong placement, please try again! \n");
				problhma=1;
			}
		}
	if ( f == 'D')
		{
			if (j <= 5)
			{
			thesh[i][j]=5;
			thesh[i][j+1]=5;
			thesh[i][j+2]=5;
			thesh[i][j+3]=5;
			thesh[i][j+4]=5;
		
			printf("\t|0  |1  |2  |3  |4  |5  |6  |7  |8  |9   |10 \n");
			for(j=0; j < 10 ; j++ )
				{
            	printf("%d",j);
            	printf("\t|%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d   |%d", thesh[0][j],thesh[1][j],thesh[2][j],thesh[3][j],thesh[4][j],thesh[5][j],thesh[6][j],thesh[7][j],thesh[8][j],thesh[9][j],thesh[10][j]);
            	printf("\n");
    	 		}
    	 	}
    	 	
			else
			{
				printf("Wrong placement, please try again! \n");
				problhma=1;
			}
		}
	if ( f == 'L')
		{
			if (i >= 4)
			{
			thesh[i][j]=5;
			thesh[i-1][j]=5;
			thesh[i-2][j]=5;
			thesh[i-3][j]=5;
			thesh[i-4][j]=5;
		
			printf("\t|0  |1  |2  |3  |4  |5  |6  |7  |8  |9   |10 \n");
			for(j=0; j < 10 ; j++ )
				{
            	printf("%d",j);
            	printf("\t|%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d   |%d", thesh[0][j],thesh[1][j],thesh[2][j],thesh[3][j],thesh[4][j],thesh[5][j],thesh[6][j],thesh[7][j],thesh[8][j],thesh[9][j],thesh[10][j]);
            	printf("\n");
    	 		}
    	 	}
    	 	
			else
			{
				printf("Wrong placement, please try again! \n");
				problhma=1;
			}
		}
	if ( f == 'R')
		{
			if (i <= 5)
			{
			thesh[i][j]=5;
			thesh[i+1][j]=5;
			thesh[i+2][j]=5;
			thesh[i+3][j]=5;
			thesh[i+4][j]=5;
		
			printf("\t|0  |1  |2  |3  |4  |5  |6  |7  |8  |9   |10 \n");
			for(j=0; j < 10 ; j++ )
				{
            	printf("%d",j);
            	printf("\t|%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d   |%d", thesh[0][j],thesh[1][j],thesh[2][j],thesh[3][j],thesh[4][j],thesh[5][j],thesh[6][j],thesh[7][j],thesh[8][j],thesh[9][j],thesh[10][j]);
            	printf("\n");
    	 		}
    	 	}
			else
			{
				printf("Wrong placement, please try again! \n");
				problhma=1;
			}
		}
	}
	else
	{
		printf("No such command,Navy Captain! \n");
		problhma=1;
	}
	}
	else
	{
		printf("No such command,Navy Captain! \n");
		problhma=1;
	}
 }
	char dig1 = (char)(((int)'0')+i);
	char dig2 = (char)(((int)'0')+i);
	aircraft[0]=dig1;
	aircraft[1]=dig2;
	aircraft[2]=f;
	//Battleship
	problhma=1;
 	while(problhma==1)
 	{
    problhma=0;
	printf("Position for Battleship(4 slots)? \n");
	fflush(stdin);
	scanf("%d %c %d %c %c", &i,&temp1,&j,&temp2,&f);
	if( isdigit(i)==0 && isdigit(j)==0 && isalpha(f)==0){
		problhma=1;
	}
	if (i >= 0 && i<=10 && j>=0 && j<=9)
	{
	if ( f=='U' || f=='D' || f=='L' || f=='R')
	{
	if ( f == 'U')
		{
			if (j >= 3 && thesh[i][j]==0 && thesh[i][j-1]==0 && thesh[i][j-2]==0 && thesh[i][j-3]==0)
			{
			thesh[i][j]=4;
			thesh[i][j-1]=4;
			thesh[i][j-2]=4;
			thesh[i][j-3]=4;
		
			printf("\t|0  |1  |2  |3  |4  |5  |6  |7  |8  |9   |10 \n");
			for(j=0; j < 10 ; j++ )
				{
            	printf("%d",j);
            	printf("\t|%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d   |%d", thesh[0][j],thesh[1][j],thesh[2][j],thesh[3][j],thesh[4][j],thesh[5][j],thesh[6][j],thesh[7][j],thesh[8][j],thesh[9][j],thesh[10][j]);
            	printf("\n");
    	 		}
    	 	}
			else
			{
				printf("Wrong placement, please try again! \n");
				problhma=1;
			}
		}
	if ( f == 'D')
		{
			if (j <= 6 && thesh[i][j]==0 && thesh[i][j+1]==0 && thesh[i][j+2]==0 && thesh[i][j+3]==0)
			{
			thesh[i][j]=4;
			thesh[i][j+1]=4;
			thesh[i][j+2]=4;
			thesh[i][j+3]=4;
		
			printf("\t|0  |1  |2  |3  |4  |5  |6  |7  |8  |9   |10 \n");
			for(j=0; j < 10 ; j++ )
				{
            	printf("%d",j);
            	printf("\t|%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d   |%d", thesh[0][j],thesh[1][j],thesh[2][j],thesh[3][j],thesh[4][j],thesh[5][j],thesh[6][j],thesh[7][j],thesh[8][j],thesh[9][j],thesh[10][j]);
            	printf("\n");
    	 		}
    	 	}
			else
			{
				printf("Wrong placement, please try again! \n");
				problhma=1;
			}
		}
	if ( f == 'L')
		{
			if (i >= 3 && thesh[i][j]==0 && thesh[i-1][j]==0 && thesh[i-2][j]==0 && thesh[i-3][j]==0)
			{
			thesh[i][j]=4;
			thesh[i-1][j]=4;
			thesh[i-2][j]=4;
			thesh[i-3][j]=4;
		
			printf("\t|0  |1  |2  |3  |4  |5  |6  |7  |8  |9   |10 \n");
			for(j=0; j < 10 ; j++ )
				{
            	printf("%d",j);
            	printf("\t|%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d   |%d", thesh[0][j],thesh[1][j],thesh[2][j],thesh[3][j],thesh[4][j],thesh[5][j],thesh[6][j],thesh[7][j],thesh[8][j],thesh[9][j],thesh[10][j]);
            	printf("\n");
    	 		}
    	 	}
			else
			{
				printf("Wrong placement, please try again! \n");
				problhma=1;
			}
		}
	if ( f == 'R')
		{
			if (i <= 6 && thesh[i][j]==0 && thesh[i+1][j]==0 && thesh[i+2][j]==0 && thesh[i+3][j]==0)
			{
			thesh[i][j]=4;
			thesh[i+1][j]=4;
			thesh[i+2][j]=4;
			thesh[i+3][j]=4;
		
			printf("\t|0  |1  |2  |3  |4  |5  |6  |7  |8  |9   |10 \n");
			for(j=0; j < 10 ; j++ )
				{
            	printf("%d",j);
            	printf("\t|%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d   |%d", thesh[0][j],thesh[1][j],thesh[2][j],thesh[3][j],thesh[4][j],thesh[5][j],thesh[6][j],thesh[7][j],thesh[8][j],thesh[9][j],thesh[10][j]);
            	printf("\n");
    	 		}
    	 	}
			else
			{
				printf("Wrong placement, please try again! \n");
				problhma=1;
			}
		}
	}
	else
	{
		printf("No such command,Navy Captain! \n");
		problhma=1;
	}
	}
	else
	{
		printf("No such command,Navy Captain! \n");
		problhma=1;
	}
}
	char dig3 = (char)(((int)'0')+i);
	char dig4 = (char)(((int)'0')+i);
	battleship[0]=dig3;
	battleship[1]=dig4;
	battleship[2]=f;
	//Submarine
	problhma=1;
 	while(problhma==1)
 	{
    problhma=0;
	printf("Position for Submarine(3 slots)? \n");
	fflush(stdin);
	scanf("%d %c %d %c %c", &i,&temp1,&j,&temp2,&f);
	if( isdigit(i)==0 && isdigit(j)==0 && isalpha(f)==0){
		problhma=1;
	}
	if (i >= 0 && i<=10 && j>=0 && j<=9)
	{
	if ( f=='U' || f=='D' || f=='L' || f=='R')
	{
	if ( f == 'U')
		{
			if (j >= 2 && thesh[i][j]==0 && thesh[i][j-1]==0 && thesh[i][j-2]==0)
			{
			thesh[i][j]=3;
			thesh[i][j-1]=3;
			thesh[i][j-2]=3;
		
			printf("\t|0  |1  |2  |3  |4  |5  |6  |7  |8  |9   |10 \n");
			for(j=0; j < 10 ; j++ )
				{
            	printf("%d",j);
            	printf("\t|%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d   |%d", thesh[0][j],thesh[1][j],thesh[2][j],thesh[3][j],thesh[4][j],thesh[5][j],thesh[6][j],thesh[7][j],thesh[8][j],thesh[9][j],thesh[10][j]);
            	printf("\n");
    	 		}
    	 	}
			else
			{
				printf("Wrong placement, please try again! \n");
				problhma=1;
			}
		}
	if ( f == 'D')
		{
			if (j <= 7 && thesh[i][j]==0 && thesh[i][j+1]==0 && thesh[i][j+2]==0)
			{
			thesh[i][j]=3;
			thesh[i][j+1]=3;
			thesh[i][j+2]=3;
		
			printf("\t|0  |1  |2  |3  |4  |5  |6  |7  |8  |9   |10 \n");
			for(j=0; j < 10 ; j++ )
				{
            	printf("%d",j);
            	printf("\t|%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d   |%d", thesh[0][j],thesh[1][j],thesh[2][j],thesh[3][j],thesh[4][j],thesh[5][j],thesh[6][j],thesh[7][j],thesh[8][j],thesh[9][j],thesh[10][j]);
            	printf("\n");
    	 		}
    	 	}
			else
			{
				printf("Wrong placement, please try again! \n");
				problhma=1;
			}
		}
	if ( f == 'L')
		{
			if (i >= 2 && thesh[i][j]==0 && thesh[i-1][j]==0 && thesh[i-2][j]==0)
			{
			thesh[i][j]=3;
			thesh[i-1][j]=3;
			thesh[i-2][j]=3;
		
			printf("\t|0  |1  |2  |3  |4  |5  |6  |7  |8  |9   |10 \n");
			for(j=0; j < 10 ; j++ )
				{
            	printf("%d",j);
            	printf("\t|%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d   |%d", thesh[0][j],thesh[1][j],thesh[2][j],thesh[3][j],thesh[4][j],thesh[5][j],thesh[6][j],thesh[7][j],thesh[8][j],thesh[9][j],thesh[10][j]);
            	printf("\n");
    	 		}
    	 	}
			else
			{
				printf("Wrong placement, please try again! \n");
				problhma=1;
			}
		}
	if ( f == 'R')
		{
			if (i <= 7 && thesh[i][j]==0 && thesh[i+1][j]==0 && thesh[i+2][j]==0)
			{
			thesh[i][j]=3;
			thesh[i+1][j]=3;
			thesh[i+2][j]=3;
		
			printf("\t|0  |1  |2  |3  |4  |5  |6  |7  |8  |9   |10 \n");
			for(j=0; j < 10 ; j++ )
				{
            	printf("%d",j);
            	printf("\t|%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d   |%d", thesh[0][j],thesh[1][j],thesh[2][j],thesh[3][j],thesh[4][j],thesh[5][j],thesh[6][j],thesh[7][j],thesh[8][j],thesh[9][j],thesh[10][j]);
            	printf("\n");
    	 		}
    	 	}
			else
			{
				printf("Wrong placement, please try again! \n");
				problhma=1;
			}
		}
	}
	else
	{
		printf("No such command,Navy Captain! \n");
		problhma=1;
	}
	}
	else
	{
		printf("No such command,Navy Captain! \n");
		problhma=1;
	}
}
	char dig5 = (char)(((int)'0')+i);
	char dig6 = (char)(((int)'0')+i);
	submarine[0]=dig5;
	submarine[1]=dig6;
	submarine[2]=f;
	//Frigate
	problhma=1;
 	while(problhma==1)
 	{
    problhma=0;
	printf("Position for Frigate(3 slots)? \n");
	fflush(stdin);
	scanf("%d %c %d %c %c", &i,&temp1,&j,&temp2,&f);
	if( isdigit(i)==0 && isdigit(j)==0 && isalpha(f)==0){
		problhma=1;
	}
	if (i >= 0 && i<=10 && j>=0 && j<=9)
	{
	if ( f=='U' || f=='D' || f=='L' || f=='R')
	{
	if ( f == 'U')
		{
			if (j >= 2 && thesh[i][j]==0 && thesh[i][j-1]==0 && thesh[i][j-2]==0)
			{
			thesh[i][j]=2;
			thesh[i][j-1]=2;
			thesh[i][j-2]=2;
            
			printf("\t|0  |1  |2  |3  |4  |5  |6  |7  |8  |9   |10 \n");
			for(j=0; j < 10 ; j++ )
				{
            	printf("%d",j);
            	printf("\t|%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d   |%d", thesh[0][j],thesh[1][j],thesh[2][j],thesh[3][j],thesh[4][j],thesh[5][j],thesh[6][j],thesh[7][j],thesh[8][j],thesh[9][j],thesh[10][j]);
            	printf("\n");
    	 		}
    	 	}
			else
			{
				printf("Wrong placement, please try again! \n");
				problhma=1;
			}
		}
	if ( f == 'D')
		{
			if (j <= 7 && thesh[i][j]==0 && thesh[i][j+1]==0 && thesh[i][j+2]==0)
			{
			thesh[i][j]=2;
			thesh[i][j+1]=2;
			thesh[i][j+2]=2;
		
			printf("\t|0  |1  |2  |3  |4  |5  |6  |7  |8  |9   |10 \n");
			for(j=0; j < 10 ; j++ )
				{
            	printf("%d",j);
            	printf("\t|%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d   |%d", thesh[0][j],thesh[1][j],thesh[2][j],thesh[3][j],thesh[4][j],thesh[5][j],thesh[6][j],thesh[7][j],thesh[8][j],thesh[9][j],thesh[10][j]);
            	printf("\n");
    	 		}
    	 	}
			else
			{
				printf("Wrong placement, please try again! \n");
				problhma=1;
			}
		}
	if ( f == 'L')
		{
			if (i >= 2 && thesh[i][j]==0 && thesh[i-1][j]==0 && thesh[i-2][j]==0)
			{
			thesh[i][j]=2;
			thesh[i-1][j]=2;
			thesh[i-2][j]=2;
		
			printf("\t|0  |1  |2  |3  |4  |5  |6  |7  |8  |9   |10 \n");
			for(j=0; j < 10 ; j++ )
				{
            	printf("%d",j);
            	printf("\t|%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d   |%d", thesh[0][j],thesh[1][j],thesh[2][j],thesh[3][j],thesh[4][j],thesh[5][j],thesh[6][j],thesh[7][j],thesh[8][j],thesh[9][j],thesh[10][j]);
            	printf("\n");
    	 		}
    	 	}
			else
			{
				printf("Wrong placement, please try again! \n");
				problhma=1;
			}
		}
	if ( f == 'R')
		{
			if (i <= 7 && thesh[i][j]==0 && thesh[i+1][j]==0 && thesh[i+2][j]==0)
			{
			thesh[i][j]=2;
			thesh[i+1][j]=2;
			thesh[i+2][j]=2;
		
			printf("\t|0  |1  |2  |3  |4  |5  |6  |7  |8  |9   |10 \n");
			for(j=0; j < 10 ; j++ )
				{
            	printf("%d",j);
            	printf("\t|%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d   |%d", thesh[0][j],thesh[1][j],thesh[2][j],thesh[3][j],thesh[4][j],thesh[5][j],thesh[6][j],thesh[7][j],thesh[8][j],thesh[9][j],thesh[10][j]);
            	printf("\n");
    	 		}
    	 	}
			else
			{
				printf("Wrong placement, please try again! \n");
				problhma=1;
			}
		}
	}
	else
	{
		printf("No such command,Navy Captain! \n");
		problhma=1;
	}
	}
	else
	{
		printf("No such command,Navy Captain! \n");
		problhma=1;
	}
}
	char dig7 = (char)(((int)'0')+i);
	char dig8 = (char)(((int)'0')+i);
	frigate[0]=dig7;
	frigate[1]=dig8;
	frigate[2]=f;
	//Patrol Boat
	problhma=1;
 	while(problhma==1)
 	{
    problhma=0;
	printf("Position for Patrol boat(2 slots)? \n");
	fflush(stdin);
	scanf("%d %c %d %c %c", &i,&temp1,&j,&temp2,&f);
	if( isdigit(i)==0 && isdigit(j)==0 && isalpha(f)==0){
		problhma=1;
	}
	if (i >= 0 && i<=10 && j>=0 && j<=9)
	{
	if ( f=='U' || f=='D' || f=='L' || f=='R')
	{
	if ( f == 'U')
		{
			if (j >= 1 && thesh[i][j]==0 && thesh[i][j-1]==0)
			{
			thesh[i][j]=1;
			thesh[i][j-1]=1;
		
			printf("\t|0  |1  |2  |3  |4  |5  |6  |7  |8  |9   |10 \n");
			for(j=0; j < 10 ; j++ )
				{
            	printf("%d",j);
            	printf("\t|%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d   |%d", thesh[0][j],thesh[1][j],thesh[2][j],thesh[3][j],thesh[4][j],thesh[5][j],thesh[6][j],thesh[7][j],thesh[8][j],thesh[9][j],thesh[10][j]);
            	printf("\n");
    	 		}
    	 	}
			else
			{
				printf("Wrong placement, please try again! \n");
				problhma=1;
			}
		}
	if ( f == 'D')
		{
			if (j <= 8 && thesh[i][j]==0 && thesh[i][j+1]==0)
			{
			thesh[i][j]=1;
			thesh[i][j+1]=1;
		
			printf("\t|0  |1  |2  |3  |4  |5  |6  |7  |8  |9   |10 \n");
			for(j=0; j < 10 ; j++ )
				{
            	printf("%d",j);
            	printf("\t|%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d   |%d", thesh[0][j],thesh[1][j],thesh[2][j],thesh[3][j],thesh[4][j],thesh[5][j],thesh[6][j],thesh[7][j],thesh[8][j],thesh[9][j],thesh[10][j]);
            	printf("\n");
    	 		}
    	 	}
			else
			{
				printf("Wrong placement, please try again! \n");
				problhma=1;
			}
		}
	if ( f == 'L')
		{
			if (i >= 1 && thesh[i][j]==0 && thesh[i-1][j]==0)
			{
			thesh[i][j]=1;
			thesh[i-1][j]=1;
		
			printf("\t|0  |1  |2  |3  |4  |5  |6  |7  |8  |9   |10 \n");
			for(j=0; j < 10 ; j++ )
				{
            	printf("%d",j);
            	printf("\t|%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d   |%d", thesh[0][j],thesh[1][j],thesh[2][j],thesh[3][j],thesh[4][j],thesh[5][j],thesh[6][j],thesh[7][j],thesh[8][j],thesh[9][j],thesh[10][j]);
            	printf("\n");
    	 		}
    	 	}
			else
			{
				printf("Wrong placement, please try again! \n");
				problhma=1;
			}
		}
	if ( f == 'R')
		{
			if (i <= 8 && thesh[i][j]==0 && thesh[i+1][j]==0)
			{
			thesh[i][j]=1;
			thesh[i+1][j]=1;
		
			printf("\t|0  |1  |2  |3  |4  |5  |6  |7  |8  |9   |10 \n");
			for(j=0; j < 10 ; j++ )
				{
            	printf("%d",j);
            	printf("\t|%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d   |%d", thesh[0][j],thesh[1][j],thesh[2][j],thesh[3][j],thesh[4][j],thesh[5][j],thesh[6][j],thesh[7][j],thesh[8][j],thesh[9][j],thesh[10][j]);
            	printf("\n");
    	 		}
    	 	}
			else
			{
				printf("Wrong placement, please try again! \n");
				problhma=1;
			}
		}
	}
	else
	{
		printf("No such command,Navy Captain! \n");
		problhma=1;
	}
	}
	else
	{
		printf("No such command,Navy Captain! \n");
		problhma=1;
	}
}
	char dig9 = (char)(((int)'0')+i);
	char dig10 = (char)(((int)'0')+i);
	destroyer[0]=dig9;
	destroyer[1]=dig10;
	destroyer[2]=f;
	//Completed Operation
	
        printf("Sumbit or reset placement?(s/r) \n");
        scanf(" %c", &a);
    	epanalhpsh=1;
    	while(epanalhpsh==1)
        {	
        epanalhpsh=0;
        	if ( a != 's' && a != 'r'){
        		epanalhpsh=1;
           	}
    		if ( a == 'r' )
		{
			printf("Repeat placement operation \n");
			reset=1;
		}
		else if ( a == 's' )
		{
            
			printf("Sending to Server...\n");
			reset=0;
			//apostoli sto server
			
			
			//metatropi thesewn se paketo
            char paketo[25];
            paketo[0]='P';
            paketo[1]='L';
            paketo[2]='A';
            paketo[3]='C';
            paketo[4]='E';
            paketo[5]='_';
            paketo[6]=aircraft[0];
            paketo[7]=aircraft[1];
            paketo[8]=aircraft[2];
            paketo[9]='_';
            paketo[10]=battleship[0];
            paketo[11]=battleship[1];
            paketo[12]=battleship[2];
            paketo[13]='_';
            paketo[14]=frigate[0];
            paketo[15]=frigate[1];
            paketo[16]=frigate[2];
            paketo[17]='_';
            paketo[18]=submarine[0];
            paketo[19]=submarine[1];
            paketo[20]=submarine[2];
            paketo[21]='_';
            paketo[22]=destroyer[0];
            paketo[23]=destroyer[1];
            paketo[24]=destroyer[2];
            
            
                write_ret= write(socket_ret, paketo, sizeof(paketo));
                
                if(write_ret==-1) {
                    perror("cannot send data ");
                    exit(1);
                    }
            
            
        }
		else
            {
            	printf("Sumbit or reset placement?(s/r) \n");
        		scanf(" %c", &a);
            }
        }
    }

        //placeok
        char placeok[20];
        read_ret=read(socket_ret, placeok, sizeof(placeok));
        if (read_ret==-1){
            perror("Read Error");
            exit(0);
        }
        
        
        
        
        sleep(2);
        system("clear");
        
        while(strcmp(placeok,"PLACEOK")!=0){
           
            sleep(2);
            read_ret=read(socket_ret, placeok, sizeof(placeok));
            if (read_ret==-1){
                perror("Read Error");
                exit(0);
            }
        }
         printf("Placement ok\n");
        /*
        //read poios varaei protos
        char p_bomb[1];
        read_ret=read(socket_ret,p_bomb,sizeof(p_bomb));
        if (read_ret==-1){
            perror("Read Error");
            exit(0);
        }
        
        
        
        printf("BATTLE %s\n",p_bomb);
    */
    	
		//bombing by player
				for (i=0; i<210; i++){
				for (j=0; j<210; j++){
				nthesh[i][j]='o';	
				}
				}
				printf("\t|0  |1  |2  |3  |4  |5  |6  |7  |8  |9   |10 \n");
				for(j=0; j < 10 ; j++ ){
           		printf("%d",j);
            	printf("\t|%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c   |%c", nthesh[0][j],nthesh[1][j],nthesh[2][j],nthesh[3][j],nthesh[4][j],nthesh[5][j],nthesh[6][j],nthesh[7][j],nthesh[8][j],nthesh[9][j],nthesh[10][j]);
            	printf("\n");
            	}
		while ( flag_rec == 1){
		do{
            
            
            
            //wait for other player
           /* char bomb[20];
            read_ret=read(socket_ret, bomb, sizeof(bomb));
            if (read_ret==-1){
                perror("Read Error");
                exit(0);
            }
            
            
            
            
            sleep(2);
            system("clear");
            
            while(strcmp(bomb,"BOMB")!=0){
                printf("Wait for other player bombing\n");
                sleep(2);
                read_ret=read(socket_ret, bomb, sizeof(bomb));
                if (read_ret==-1){
                    perror("Read Error");
                    exit(0);
                }
            }
            printf("Bomb\n");*/
	    printf("Give the couple of coordinates. \n");
		fflush(stdin);
		labeltsek=0;
		scanf("%d %c %d", &x,&temp1,&y);
		//isdigit check not included
		if((x<0) || (x>10) || (y<0) || (y>9)){
		printf("Error,give the correct type of coordinates \n");	
		labeltsek=1;
		}
		}while(labeltsek==1);
				char dig11 = (char)(((int)'0')+x);
				char dig12 = (char)(((int)'0')+y);
				target[0]=dig11;
				target[1]=dig12;
				//apostoli target
                write_ret = write(socket_ret, target, sizeof(target), 0);
                if(write_ret==-1) {
                    perror("cannot send data ");
                    close(socket_ret);
                    exit(1);
                }
        read_ret=read(socket_ret, ACKN, sizeof(ACKN));    
		//edw erxontai ta dedomena apo to server
		system("clear");
		if ( ACKN[0] == 1 )
		{
				for(i=0;i<48;i++) printf(ANSI_COLOR_GREEN   "="  ANSI_COLOR_RESET);
        		printf("\n\t\t ");
        		printf(ANSI_COLOR_GREEN   "Hit!"  ANSI_COLOR_RESET);
        		printf("\n");
        		for(i=0;i<48;i++) printf(ANSI_COLOR_GREEN   "="  ANSI_COLOR_RESET);
        		printf("\n");
				nthesh[x][y]='x';
				printf("\t|0  |1  |2  |3  |4  |5  |6  |7  |8  |9   |10 \n");
				for(j=0; j < 10 ; j++ ){
           		printf("%d",j);
            	printf("\t|%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c   |%c", nthesh[0][j],nthesh[1][j],nthesh[2][j],nthesh[3][j],nthesh[4][j],nthesh[5][j],nthesh[6][j],nthesh[7][j],nthesh[8][j],nthesh[9][j],nthesh[10][j]);
            	printf("\n");
            	
            	}
            	if ( ACKN[1] == 1 )
            {
            	  for(i=0;i<48;i++) printf(ANSI_COLOR_CYAN   "="  ANSI_COLOR_RESET);
        			printf("\n\t\t ");
        			printf(ANSI_COLOR_CYAN   "Hit & Sunk"  ANSI_COLOR_RESET);
        			printf("\n");
        		  for(i=0;i<48;i++) printf(ANSI_COLOR_CYAN   "="  ANSI_COLOR_RESET);
        			printf("\n");
					c_score=c_score+1;	
            }
            
		}
		if ( ACKN[0] == 0)
		{
			for(i=0;i<48;i++) printf(ANSI_COLOR_RED   "=" ANSI_COLOR_RESET);
        printf("\n\t\t ");
        printf(ANSI_COLOR_RED   "Miss!"  ANSI_COLOR_RESET);
        printf("\n");
        for(i=0;i<48;i++) printf(ANSI_COLOR_RED   "=" ANSI_COLOR_RESET);
        printf("\n");
			nthesh[x][y]='.';
			printf("\t|0  |1  |2  |3  |4  |5  |6  |7  |8  |9   |10 \n");
				for(j=0; j < 10 ; j++ ){
           		printf("%d",j);
            	printf("\t|%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c   |%c", nthesh[0][j],nthesh[1][j],nthesh[2][j],nthesh[3][j],nthesh[4][j],nthesh[5][j],nthesh[6][j],nthesh[7][j],nthesh[8][j],nthesh[9][j],nthesh[10][j]);
            	printf("\n");
            	}
		}
		if( ACKN[0] == 0 && ACKN[1] == 1)	
		{
			printf("Lose");
			flag_rec = 0;
		}
		if (c_score == 5)
		{
			flag_rec = 0;
			target[0]=11;
			target[1]=11;
			write_ret = write(socket_ret, target, sizeof(target));
		}
}
	int i;
	printf("\n");
	if( c_score == 5){

	 

	 
	 //gia to w
     printf(ANSI_COLOR_GREEN   "*"   ANSI_COLOR_RESET );
//tetarth grammh
for(i=0;i<29;i++) printf(" ");
     printf(ANSI_COLOR_GREEN   "*"   ANSI_COLOR_RESET );
//gia to I
	for(i=28;i<31;i++) printf(" ");
	for(i=23;i<33;i++) printf(ANSI_COLOR_GREEN   "*"   ANSI_COLOR_RESET );
//gia to N
	for(i=28;i<31;i++) printf(" ");
	printf(ANSI_COLOR_GREEN   "*"   ANSI_COLOR_RESET );
	for(i=0;i<7;i++) printf(" ");
	printf(ANSI_COLOR_GREEN   "*"   ANSI_COLOR_RESET );
	

     


	 
	 //gia to w
     printf("\n");
     for(i=0;i<1;i++) printf(" ");
     printf(ANSI_COLOR_GREEN   "*"   ANSI_COLOR_RESET );
     //deuerh grammh
     for(i=0;i<13;i++) printf(" ");
     printf(ANSI_COLOR_GREEN   "*"   ANSI_COLOR_RESET );
//tetarth grammh
for(i=0;i<13;i++) printf(" ");
     printf(ANSI_COLOR_GREEN   "*"   ANSI_COLOR_RESET );
//gia to I
	for(i=28;i<36;i++) printf(" ");
	printf(ANSI_COLOR_GREEN   "*"   ANSI_COLOR_RESET );
//gia to N
	for(i=23;i<31;i++) printf(" ");
	printf(ANSI_COLOR_GREEN   "*"   ANSI_COLOR_RESET );
	printf(ANSI_COLOR_GREEN   "*"   ANSI_COLOR_RESET );
	for(i=0;i<6;i++) printf(" ");
	printf(ANSI_COLOR_GREEN   "*"   ANSI_COLOR_RESET );
     
     
     
     
     
     

     //gia to w
     printf("\n");
     for(i=0;i<2;i++) printf(" ");
     printf(ANSI_COLOR_GREEN   "*"   ANSI_COLOR_RESET );
     //deuterh grammh
     for(i=0;i<11;i++) printf(" ");
     printf(ANSI_COLOR_GREEN   "*"   ANSI_COLOR_RESET );
	//trith grammh
     for(i=0;i<1;i++) printf(" ");
     printf(ANSI_COLOR_GREEN   "*"   ANSI_COLOR_RESET );
//tetarth grammh
for(i=0;i<11;i++) printf(" ");
     printf(ANSI_COLOR_GREEN   "*"   ANSI_COLOR_RESET );
//gia to I
	for(i=28;i<37;i++) printf(" ");
	printf(ANSI_COLOR_GREEN   "*"   ANSI_COLOR_RESET );
//gia to N
	for(i=23;i<31;i++) printf(" ");
	printf(ANSI_COLOR_GREEN   "*"   ANSI_COLOR_RESET );
	for(i=0;i<1;i++) printf(" ");
	printf(ANSI_COLOR_GREEN   "*"   ANSI_COLOR_RESET );
	for(i=0;i<5;i++) printf(" ");
	printf(ANSI_COLOR_GREEN   "*"   ANSI_COLOR_RESET );

	


 
     //gia to w
     printf("\n");
	 for(i=0;i<3;i++) printf(" ");
	 printf(ANSI_COLOR_GREEN   "*"   ANSI_COLOR_RESET ); 
     //deuterh grammh	 
     for(i=0;i<9;i++) printf(" ");
    printf(ANSI_COLOR_GREEN   "*"   ANSI_COLOR_RESET );
	//trith grammh
     for(i=0;i<3;i++) printf(" ");
     printf(ANSI_COLOR_GREEN   "*"   ANSI_COLOR_RESET );
//tetarth grammh
for(i=0;i<9;i++) printf(" ");
     printf(ANSI_COLOR_GREEN   "*"   ANSI_COLOR_RESET );
//gia to I
	for(i=28;i<38;i++) printf(" ");
	printf(ANSI_COLOR_GREEN   "*"   ANSI_COLOR_RESET );
//gia to N
	for(i=23;i<31;i++) printf(" ");
	printf(ANSI_COLOR_GREEN   "*"   ANSI_COLOR_RESET );
	for(i=0;i<2;i++) printf(" ");
	printf(ANSI_COLOR_GREEN   "*"   ANSI_COLOR_RESET );
	for(i=0;i<4;i++) printf(" ");
	printf(ANSI_COLOR_GREEN   "*"   ANSI_COLOR_RESET );





     //gia to w
     printf("\n");
     for(i=0;i<4;i++) printf(" ");
    printf(ANSI_COLOR_GREEN   "*"   ANSI_COLOR_RESET );
     //deuterh grammh
     for(i=0;i<7;i++) printf(" ");
    printf(ANSI_COLOR_GREEN   "*"   ANSI_COLOR_RESET );
//trith grammh
     for(i=0;i<5;i++) printf(" ");
     printf(ANSI_COLOR_GREEN   "*"   ANSI_COLOR_RESET );
//tetarth grammh
for(i=0;i<7;i++) printf(" ");
     printf(ANSI_COLOR_GREEN   "*"   ANSI_COLOR_RESET );
//gia to I
	for(i=28;i<39;i++) printf(" ");
	printf(ANSI_COLOR_GREEN   "*"   ANSI_COLOR_RESET );
//gia to N
	for(i=23;i<31;i++) printf(" ");
	printf(ANSI_COLOR_GREEN   "*"   ANSI_COLOR_RESET );
	for(i=0;i<3;i++) printf(" ");
	printf(ANSI_COLOR_GREEN   "*"   ANSI_COLOR_RESET );
	for(i=0;i<3;i++) printf(" ");
	printf(ANSI_COLOR_GREEN   "*"   ANSI_COLOR_RESET );



     
  
   //gia to w
     printf("\n");
     for(i=0;i<5;i++) printf(" ");
    printf(ANSI_COLOR_GREEN   "*"   ANSI_COLOR_RESET );
     //deuterh grammh
     for(i=0;i<5;i++) printf(" ");
    printf(ANSI_COLOR_GREEN   "*"   ANSI_COLOR_RESET ); 
//trith grammh
     for(i=0;i<7;i++) printf(" ");
     printf(ANSI_COLOR_GREEN   "*"   ANSI_COLOR_RESET );
//tetarth grammh
for(i=0;i<5;i++) printf(" ");
     printf(ANSI_COLOR_GREEN   "*"   ANSI_COLOR_RESET );
//gia to I
	for(i=28;i<40;i++) printf(" ");
	printf(ANSI_COLOR_GREEN   "*"   ANSI_COLOR_RESET );
//gia to N
	for(i=23;i<31;i++) printf(" ");
	printf(ANSI_COLOR_GREEN   "*"   ANSI_COLOR_RESET );
	for(i=0;i<4;i++) printf(" ");
	printf(ANSI_COLOR_GREEN   "*"   ANSI_COLOR_RESET );
	for(i=0;i<2;i++) printf(" ");
	printf(ANSI_COLOR_GREEN   "*"   ANSI_COLOR_RESET );




     //gia to w
     printf("\n");
     for(i=0;i<6;i++) printf(" ");
    printf(ANSI_COLOR_GREEN   "*"   ANSI_COLOR_RESET );
     //deyterh grammh 
     for(i=0;i<3;i++) printf(" ");
    printf(ANSI_COLOR_GREEN   "*"   ANSI_COLOR_RESET );
//trith grammh
     for(i=0;i<9;i++) printf(" ");
     printf(ANSI_COLOR_GREEN   "*"   ANSI_COLOR_RESET );
//tetarth grammh
for(i=0;i<3;i++) printf(" ");
     printf(ANSI_COLOR_GREEN   "*"   ANSI_COLOR_RESET );
//gia to I
	for(i=28;i<41;i++) printf(" ");
	printf(ANSI_COLOR_GREEN   "*"   ANSI_COLOR_RESET );
//gia to N
	for(i=23;i<31;i++) printf(" ");
	printf(ANSI_COLOR_GREEN   "*"   ANSI_COLOR_RESET );
	for(i=0;i<5;i++) printf(" ");
	printf(ANSI_COLOR_GREEN   "*"   ANSI_COLOR_RESET );
	for(i=0;i<1;i++) printf(" ");
	printf(ANSI_COLOR_GREEN   "*"   ANSI_COLOR_RESET );





     //gia to w
     printf("\n");
     for(i=0;i<7;i++) printf(" ");
     printf(ANSI_COLOR_GREEN   "*"   ANSI_COLOR_RESET );
	//deuterh grammh
     for(i=0;i<1;i++) printf(" ");
     printf(ANSI_COLOR_GREEN   "*"   ANSI_COLOR_RESET );
//trith grammh
     for(i=0;i<11;i++) printf(" ");
     printf(ANSI_COLOR_GREEN   "*"   ANSI_COLOR_RESET );
//tetarth grammh
for(i=0;i<1;i++) printf(" ");
     printf(ANSI_COLOR_GREEN   "*"   ANSI_COLOR_RESET );
//gia to I
for(i=28;i<42;i++) printf(" ");
	printf(ANSI_COLOR_GREEN   "*"   ANSI_COLOR_RESET );
//gia to N
	for(i=23;i<31;i++) printf(" ");
	printf(ANSI_COLOR_GREEN   "*"   ANSI_COLOR_RESET );
	for(i=0;i<6;i++) printf(" ");
	printf(ANSI_COLOR_GREEN   "*"   ANSI_COLOR_RESET );
	printf(ANSI_COLOR_GREEN   "*"   ANSI_COLOR_RESET );



     //gia to w
     printf("\n");
     for(i=0;i<8;i++) printf(" ");
     printf(ANSI_COLOR_GREEN   "*"   ANSI_COLOR_RESET );
//trith grammh
     for(i=0;i<13;i++) printf(" ");
     printf(ANSI_COLOR_GREEN   "*"   ANSI_COLOR_RESET );
//gia to I
for(i=28;i<39;i++) printf(" ");
for(i=23;i<33;i++) printf(ANSI_COLOR_GREEN   "*"   ANSI_COLOR_RESET );
//gia to N
	for(i=28;i<31;i++) printf(" ");
	printf(ANSI_COLOR_GREEN   "*"   ANSI_COLOR_RESET );
	for(i=0;i<7;i++) printf(" ");
	printf(ANSI_COLOR_GREEN   "*"   ANSI_COLOR_RESET );
printf("\n");
		signal=1;
		write_ret = write(socket_ret, signal, sizeof(signal));
	}
} 


/*******************************************************************

BBBBBBBBBBBBBB     OOOOOOOOOOOOOOOOOOO  TTTTTTTTTTTTTTTTTTTTTT
BBB         BBB    OOOOOOOOOOOOOOOOOOO  TTTTTTTTTTTTTTTTTTTTTT     
BBB          BBB   OOO             OOO           TTTT
BBB          BBB   OOO             OOO           TTTT
BBB         BBB    OOO             OOO           TTTT
BBBBBBBBBBBBBB     OOO             OOO           TTTT
BBBBBBBBBBBBBB     OOO             OOO           TTTT
BBB         BBB    OOO             OOO           TTTT
BBB          BBB   OOO             OOO           TTTT
BBB          BBB   OOO             OOO           TTTT  
BBB         BBB    OOOOOOOOOOOOOOOOOOO           TTTT
BBBBBBBBBBBBBB     OOOOOOOOOOOOOOOOOOO           TTTT

*********************************************************************/




	if (ari8mos==2){
		system("clear");

	int theshbot[11][11];
	char screenbot[11][11],screenplayer[11][11];
	reset=1;	
    for (i=0;i<10;i++)
    {
    	for (j=0;j<10;j++)
    	{
    		screenbot[i][j]=' ';
		}
	}   
	// the bot is placing the ships
		
	//Aircraft Carrier placement
	problhma=1;
 while(problhma==1)
 {
 	//using time so that everytime the randoms are different
 	srand(time(NULL));  
	i=rand() % 5;
		j=rand() % 5;
		temp1= rand() % 4;
		switch(temp1)
		{
			case 0:
				f='U';
				break;
			case 1:
				f='D';
				break;
			case 2:
				f='R';
				break;
			case 3:
				f='L';
				break;				
		}	
	if (i >= 0 && i<=9 && j>=0 && j<=9)
	{
	if ( f == 'U')
		{
			if (j >= 4)
			{
			theshbot[i][j]=5;
			theshbot[i][j-1]=5;
			theshbot[i][j-2]=5;
			theshbot[i][j-3]=5;
			theshbot[i][j-4]=5;
		
			problhma=0;
			
    	 	}
		}
	else if ( f == 'D')
		{
			if (j <= 5)
			{
			theshbot[i][j]=5;
			theshbot[i][j+1]=5;
			theshbot[i][j+2]=5;
			theshbot[i][j+3]=5;
			theshbot[i][j+4]=5;
		
			problhma=0;
			}
		}
	else if ( f == 'L')
		{
			if (i >= 4)
			{
			theshbot[i][j]=5;
			theshbot[i-1][j]=5;
			theshbot[i-2][j]=5;
			theshbot[i-3][j]=5;
			theshbot[i-4][j]=5;
		
			problhma=0;
			}
		}
	else if ( f == 'R')
		{
			if (i <= 5)
			{
			theshbot[i][j]=5;
			theshbot[i+1][j]=5;
			theshbot[i+2][j]=5;
			theshbot[i+3][j]=5;
			theshbot[i+4][j]=5;
		
			problhma=0;
		}
		}	
 }
}

    	 		
	//The Bot has placed the aircraft!!
	//Battleship placement
	
	problhma=1;
 	while(problhma==1)
 	{
	i=rand() % 10;
		j=rand() % 10;
		temp1= rand() % 4;
		switch(temp1)
		{
			case 0:
				f='U';
				break;
			case 1:
				f='D';
				break;
			case 2:
				f='R';
				break;
			case 3:
				f='L';
				break;				
		}
	if (i >= 0 && i<=9 && j>=0 && j<=9)
	{
	if ( f=='U' || f=='D' || f=='L' || f=='R')
	{
	if ( f == 'U')
		{
			if (j >= 3 && theshbot[i][j]==0 && theshbot[i][j-1]==0 && theshbot[i][j-2]==0 && theshbot[i][j-3]==0)
			{
			theshbot[i][j]=4;
			theshbot[i][j-1]=4;
			theshbot[i][j-2]=4;
			theshbot[i][j-3]=4;
		
			problhma=0;
    	 	}
			
		}
	else if ( f == 'D')
		{
			if (j <= 6 && theshbot[i][j]==0 && theshbot[i][j+1]==0 && theshbot[i][j+2]==0 && theshbot[i][j+3]==0)
			{
			theshbot[i][j]=4;
			theshbot[i][j+1]=4;
			theshbot[i][j+2]=4;
			theshbot[i][j+3]=4;
		
			problhma=0;
    	 	}
			
		}
	else if ( f == 'L')
		{
			if (i >= 3 && theshbot[i][j]==0 && theshbot[i-1][j]==0 && theshbot[i-2][j]==0 && theshbot[i-3][j]==0)
			{
			theshbot[i][j]=4;
			theshbot[i-1][j]=4;
			theshbot[i-2][j]=4;
			theshbot[i-3][j]=4;
		
			problhma=0;
    	 	}
			
		}
	else if ( f == 'R')
		{
			if (i <= 6 && theshbot[i][j]==0 && theshbot[i+1][j]==0 && theshbot[i+2][j]==0 && theshbot[i+3][j]==0)
			{
			theshbot[i][j]=4;
			theshbot[i+1][j]=4;
			theshbot[i+2][j]=4;
			theshbot[i+3][j]=4;
		
			problhma=0;
			}
		}
	}
	
	}

}

    	 		
	//The Bot has placed the battleship!!
	//Submarine placement
	problhma=1;
 	while(problhma==1)
 	{
	i=rand() % 10;
		j=rand() % 10;
		temp1= rand() % 4;
		switch(temp1)
		{
			case 0:
				f='U';
				break;
			case 1:
				f='D';
				break;
			case 2:
				f='R';
				break;
			case 3:
				f='L';
				break;				
		}
	if (i >= 0 && i<=9 && j>=0 && j<=9)
	{
	if ( f=='U' || f=='D' || f=='L' || f=='R')
	{
	if ( f == 'U')
		{
			if (j >= 2 && theshbot[i][j]==0 && theshbot[i][j-1]==0 && theshbot[i][j-2]==0)
			{
			theshbot[i][j]=3;
			theshbot[i][j-1]=3;
			theshbot[i][j-2]=3;
		
			problhma=0;
			}
		}
	else if ( f == 'D')
		{
			if (j <= 7 && theshbot[i][j]==0 && theshbot[i][j+1]==0 && theshbot[i][j+2]==0)
			{
			theshbot[i][j]=3;
			theshbot[i][j+1]=3;
			theshbot[i][j+2]=3;
		
			problhma=0;
			}
		}
	else if ( f == 'L')
		{
			if (i >= 2 && theshbot[i][j]==0 && theshbot[i-1][j]==0 && theshbot[i-2][j]==0)
			{
			theshbot[i][j]=3;
			theshbot[i-1][j]=3;
			theshbot[i-2][j]=3;
		
			problhma=0;
			}
		}
	else if ( f == 'R')
		{
			if (i <= 7 && theshbot[i][j]==0 && theshbot[i+1][j]==0 && theshbot[i+2][j]==0)
			{
			theshbot[i][j]=3;
			theshbot[i+1][j]=3;
			theshbot[i+2][j]=3;
		
			problhma=0;
			}
		}
	}
	
	}
	  
}

    	 		
	//The Bot has placed the submarine!!
	//Frigate placement
		
	problhma=1;
 	while(problhma==1)
 	{
	i=rand() % 10;
		j=rand() % 10;
		temp1= rand() % 4;
		switch(temp1)
		{
			case 0:
				f='U';
				break;
			case 1:
				f='D';
				break;
			case 2:
				f='R';
				break;
			case 3:
				f='L';
				break;				
		}
	if (i >= 0 && i<=9 && j>=0 && j<=9)
	{
	if ( f=='U' || f=='D' || f=='L' || f=='R')
	{
	if ( f == 'U')
		{
			if (j >= 2 && theshbot[i][j]==0 && theshbot[i][j-1]==0 && theshbot[i][j-2]==0)
			{
			theshbot[i][j]=2;
			theshbot[i][j-1]=2;
			theshbot[i][j-2]=2;
            
			problhma=0;
			}
		}
	else if ( f == 'D')
		{
			if (j <= 7 && theshbot[i][j]==0 && theshbot[i][j+1]==0 && theshbot[i][j+2]==0)
			{
			theshbot[i][j]=2;
			theshbot[i][j+1]=2;
			theshbot[i][j+2]=2;
		
			problhma=0;
			}
		}
	else if ( f == 'L')
		{
			if (i >= 2 && theshbot[i][j]==0 && theshbot[i-1][j]==0 && theshbot[i-2][j]==0)
			{
			theshbot[i][j]=2;
			theshbot[i-1][j]=2;
			theshbot[i-2][j]=2;
		
			problhma=0;
			}
		}
	else if ( f == 'R')
		{
			if (i <= 7 && theshbot[i][j]==0 && theshbot[i+1][j]==0 && theshbot[i+2][j]==0)
			{
			theshbot[i][j]=2;
			theshbot[i+1][j]=2;
			theshbot[i+2][j]=2;
		
			problhma=0;
			}
		}
	}	
	}	
}    	 		
	//The Bot has placed the frigate!!  
	//Patrol boat placement
	problhma=1;
 	while(problhma==1)
 	{
	i=rand() % 10;
		j=rand() % 10;
		temp1= rand() % 4;
		switch(temp1)
		{
			case 0:
				f='U';
				break;
			case 1:
				f='D';
				break;
			case 2:
				f='R';
				break;
			case 3:
				f='L';
				break;				
		}
	if (i >= 0 && i<=9 && j>=0 && j<=9)
	{
	if ( f=='U' || f=='D' || f=='L' || f=='R')
	{
	if ( f == 'U')
		{
			if (j >= 1 && theshbot[i][j]==0 && theshbot[i][j-1]==0)
			{
			theshbot[i][j]=1;
			theshbot[i][j-1]=1;
		
			problhma=0;
			}
		}
	else if ( f == 'D')
		{
			if (j <= 8 && theshbot[i][j]==0 && theshbot[i][j+1]==0)
			{
			theshbot[i][j]=1;
			theshbot[i][j+1]=1;
		
			problhma=0;
			}
		}
	else if ( f == 'L')
		{
			if (i >= 1 && theshbot[i][j]==0 && theshbot[i-1][j]==0)
			{
			theshbot[i][j]=1;
			theshbot[i-1][j]=1;
		
			problhma=0;
			}
		}
	else if ( f == 'R')
		{
			if (i <= 8 && theshbot[i][j]==0 && theshbot[i+1][j]==0)
			{
			theshbot[i][j]=1;
			theshbot[i+1][j]=1;
		
			problhma=0;
			}
		}
	}	
	}	
	}	
	//The Bot has placed the patrol boat!!
	
	//END OF BOT PLACEMENT
	
	/* THAT PART IS ONLY IF WE WANT TO SEE THE PLACEMENT OF THE BOT AND THAT IS WHY IT IS IN COMMENTS
		printf("\t 0   1   2   3   4   5   6   7   8   9\n");  
		for(j=0; j < 10 ; j++ )
				{
            	printf("%c",c+j);
            	printf("\t|%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d", theshbot[0][j],theshbot[1][j],theshbot[2][j],theshbot[3][j],theshbot[4][j],theshbot[5][j],theshbot[6][j],theshbot[7][j],theshbot[8][j],theshbot[9][j]);
            	printf("\n");
    	 		}
	*/
	printf("Hello little sailor... Time for a real adventure\n");
	printf("It's time for you to position your ships\n");	
	
	//The player is placing his ships	
   do
   {
    
	for (i=0; i<210; i++){
		for (j=0; j<210; j++){
			thesh[i][j]=0;	
		}
	}
	printf("\t 0   1   2   3   4   5   6   7   8   9\n");  
	for(j=0; j < 10 ; j++ ){
            printf("%c",c+j);
            printf("\t|%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d", thesh[0][j],thesh[1][j],thesh[2][j],thesh[3][j],thesh[4][j],thesh[5][j],thesh[6][j],thesh[7][j],thesh[8][j],thesh[9][j]);
            printf("\n");
            
	}	
	//Aircraft Carrier placement(player)
	
	problhma=1;
	
 while(problhma==1)
 {
    problhma=0;
	printf("Position for Aircraft Carrier(5 slots)? \n");
	fflush(stdin);
	scanf("%d %c %c %c %c", &i,&temp1,&c,&temp2,&f);
	if( isdigit(i)==0 && isalpha(c)==0 && isalpha(f)==0){
		problhma=1;
	}
	if (c=='A') j=0;
	if (c=='B') j=1;
	if (c=='C') j=2;
	if (c=='D') j=3;
	if (c=='E') j=4;
	if (c=='F') j=5;
	if (c=='G') j=6;
	if (c=='H') j=7;
	if (c=='I') j=8;
	if (c=='J') j=9;	
	if (i >= 0 && i<=10 && j>=0 && j<=9)
	{
	if ( f=='U' || f=='D' || f=='L' || f=='R')
	{
	if ( f == 'U')
		{
			if (j >= 4)
			{
			thesh[i][j]=5;
			thesh[i][j-1]=5;
			thesh[i][j-2]=5;
			thesh[i][j-3]=5;
			thesh[i][j-4]=5;
		
			c='A'; 
			printf("\t 0   1   2   3   4   5   6   7   8   9\n");  
			for(j=0; j < 10 ; j++ ){
            printf("%c",c+j);
            printf("\t|%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d", thesh[0][j],thesh[1][j],thesh[2][j],thesh[3][j],thesh[4][j],thesh[5][j],thesh[6][j],thesh[7][j],thesh[8][j],thesh[9][j]);
            printf("\n");
            
			}		
    	 	}
    	 	
			else
			{
				printf("Wrong placement, please try again! \n");
				problhma=1;
			}
		}
	if ( f == 'D')
		{
			if (j <= 5)
			{
			thesh[i][j]=5;
			thesh[i][j+1]=5;
			thesh[i][j+2]=5;
			thesh[i][j+3]=5;
			thesh[i][j+4]=5;
		
			c='A'; 
			printf("\t 0   1   2   3   4   5   6   7   8   9\n");  
			for(j=0; j < 10 ; j++ ){
            printf("%c",c+j);
            printf("\t|%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d", thesh[0][j],thesh[1][j],thesh[2][j],thesh[3][j],thesh[4][j],thesh[5][j],thesh[6][j],thesh[7][j],thesh[8][j],thesh[9][j]);
            printf("\n");
            
			}
    	 	}
    	 	
			else
			{
				printf("Wrong placement, please try again! \n");
				problhma=1;
			}
		}
	if ( f == 'L')
		{
			if (i >= 4)
			{
			thesh[i][j]=5;
			thesh[i-1][j]=5;
			thesh[i-2][j]=5;
			thesh[i-3][j]=5;
			thesh[i-4][j]=5;
		
			c='A'; 
			printf("\t 0   1   2   3   4   5   6   7   8   9\n");  
			for(j=0; j < 10 ; j++ ){
            printf("%c",c+j);
            printf("\t|%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d", thesh[0][j],thesh[1][j],thesh[2][j],thesh[3][j],thesh[4][j],thesh[5][j],thesh[6][j],thesh[7][j],thesh[8][j],thesh[9][j]);
            printf("\n");            
			}
    	 	}    	 	
			else
			{
				printf("Wrong placement, please try again! \n");
				problhma=1;
			}
		}
	if ( f == 'R')
		{
			if (i <= 5)
			{
			thesh[i][j]=5;
			thesh[i+1][j]=5;
			thesh[i+2][j]=5;
			thesh[i+3][j]=5;
			thesh[i+4][j]=5;	
			
			c='A'; 
			printf("\t 0   1   2   3   4   5   6   7   8   9\n");  
			for(j=0; j < 10 ; j++ ){
            printf("%c",c+j);
            printf("\t|%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d", thesh[0][j],thesh[1][j],thesh[2][j],thesh[3][j],thesh[4][j],thesh[5][j],thesh[6][j],thesh[7][j],thesh[8][j],thesh[9][j]);
            printf("\n");            
			}
    	 	}
			else
			{
				printf("Wrong placement, please try again! \n");
				problhma=1;
			}
		}
	}
	else
	{
		printf("No such command,Navy Captain! \n");
		problhma=1;
	}
	}
	else
	{
		printf("No such command,Navy Captain! \n");
		problhma=1;
	}
 }
	printf("You have placed your aircraft!!\n");
	//Battleship placement(player)
	problhma=1;
 	while(problhma==1)
 	{
    problhma=0;
	printf("Position for Battleship(4 slots)? \n");
	fflush(stdin);
	scanf("%d %c %c %c %c", &i,&temp1,&c,&temp2,&f);
	if( isdigit(i)==0 && isalpha(c)==0 && isalpha(f)==0){
		problhma=1;
	}
	if (c=='A') j=0;
	if (c=='B') j=1;
	if (c=='C') j=2;
	if (c=='D') j=3;
	if (c=='E') j=4;
	if (c=='F') j=5;
	if (c=='G') j=6;
	if (c=='H') j=7;
	if (c=='I') j=8;
	if (c=='J') j=9;
	if (i >= 0 && i<=10 && j>=0 && j<=9)
	{
	if ( f=='U' || f=='D' || f=='L' || f=='R')
	{
	if ( f == 'U')
		{
			if (j >= 3 && thesh[i][j]==0 && thesh[i][j-1]==0 && thesh[i][j-2]==0 && thesh[i][j-3]==0)
			{
			thesh[i][j]=4;
			thesh[i][j-1]=4;
			thesh[i][j-2]=4;
			thesh[i][j-3]=4;
		
			c='A'; 
			printf("\t 0   1   2   3   4   5   6   7   8   9\n");  
			for(j=0; j < 10 ; j++ ){
            printf("%c",c+j);
            printf("\t|%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d", thesh[0][j],thesh[1][j],thesh[2][j],thesh[3][j],thesh[4][j],thesh[5][j],thesh[6][j],thesh[7][j],thesh[8][j],thesh[9][j]);
            printf("\n");            
			}
    	 	}
			else
			{
				printf("Wrong placement, please try again! \n");
				problhma=1;
			}
		}
	if ( f == 'D')
		{
			if (j <= 6 && thesh[i][j]==0 && thesh[i][j+1]==0 && thesh[i][j+2]==0 && thesh[i][j+3]==0)
			{
			thesh[i][j]=4;
			thesh[i][j+1]=4;
			thesh[i][j+2]=4;
			thesh[i][j+3]=4;
		
			c='A'; 
			printf("\t 0   1   2   3   4   5   6   7   8   9\n");  
			for(j=0; j < 10 ; j++ ){
            printf("%c",c+j);
            printf("\t|%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d", thesh[0][j],thesh[1][j],thesh[2][j],thesh[3][j],thesh[4][j],thesh[5][j],thesh[6][j],thesh[7][j],thesh[8][j],thesh[9][j]);
            printf("\n");            
			}
    	 	}
			else
			{
				printf("Wrong placement, please try again! \n");
				problhma=1;
			}
		}
	if ( f == 'L')
		{
			if (i >= 3 && thesh[i][j]==0 && thesh[i-1][j]==0 && thesh[i-2][j]==0 && thesh[i-3][j]==0)
			{
			thesh[i][j]=4;
			thesh[i-1][j]=4;
			thesh[i-2][j]=4;
			thesh[i-3][j]=4;
		
			c='A'; 
			printf("\t 0   1   2   3   4   5   6   7   8   9\n");  
			for(j=0; j < 10 ; j++ ){
            printf("%c",c+j);
            printf("\t|%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d", thesh[0][j],thesh[1][j],thesh[2][j],thesh[3][j],thesh[4][j],thesh[5][j],thesh[6][j],thesh[7][j],thesh[8][j],thesh[9][j]);
            printf("\n");            
			}
    	 	}
			else
			{
				printf("Wrong placement, please try again! \n");
				problhma=1;
			}
		}
	if ( f == 'R')
		{
			if (i <= 6 && thesh[i][j]==0 && thesh[i+1][j]==0 && thesh[i+2][j]==0 && thesh[i+3][j]==0)
			{
			thesh[i][j]=4;
			thesh[i+1][j]=4;
			thesh[i+2][j]=4;
			thesh[i+3][j]=4;
		
			c='A'; 
			printf("\t 0   1   2   3   4   5   6   7   8   9\n");  
			for(j=0; j < 10 ; j++ ){
            printf("%c",c+j);
            printf("\t|%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d", thesh[0][j],thesh[1][j],thesh[2][j],thesh[3][j],thesh[4][j],thesh[5][j],thesh[6][j],thesh[7][j],thesh[8][j],thesh[9][j]);
            printf("\n");
            
			}
    	 	}
			else
			{
				printf("Wrong placement, please try again! \n");
				problhma=1;
			}
		}
	}
	else
	{
		printf("No such command,Navy Captain! \n");
		problhma=1;
	}
	}
	else
	{
		printf("No such command,Navy Captain! \n");
		problhma=1;
	}
}
	printf("You have placed your battleship!!\n");
	//Submarine placement(player)
	problhma=1;
 	while(problhma==1)
 	{
    problhma=0;
	printf("Position for Submarine(3 slots)? \n");
	fflush(stdin);
	scanf("%d %c %c %c %c", &i,&temp1,&c,&temp2,&f);
	if( isdigit(i)==0 && isalpha(c)==0 && isalpha(f)==0){
		problhma=1;
	}
	if (c=='A') j=0;
	if (c=='B') j=1;
	if (c=='C') j=2;
	if (c=='D') j=3;
	if (c=='E') j=4;
	if (c=='F') j=5;
	if (c=='G') j=6;
	if (c=='H') j=7;
	if (c=='I') j=8;
	if (c=='J') j=9;
	if (i >= 0 && i<=10 && j>=0 && j<=9)
	{
	if ( f=='U' || f=='D' || f=='L' || f=='R')
	{
	if ( f == 'U')
		{
			if (j >= 2 && thesh[i][j]==0 && thesh[i][j-1]==0 && thesh[i][j-2]==0)
			{
			thesh[i][j]=3;
			thesh[i][j-1]=3;
			thesh[i][j-2]=3;
		
			c='A'; 
			printf("\t 0   1   2   3   4   5   6   7   8   9\n");  
			for(j=0; j < 10 ; j++ ){
            printf("%c",c+j);
            printf("\t|%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d", thesh[0][j],thesh[1][j],thesh[2][j],thesh[3][j],thesh[4][j],thesh[5][j],thesh[6][j],thesh[7][j],thesh[8][j],thesh[9][j]);
            printf("\n");
            
			}
    	 	}
			else
			{
				printf("Wrong placement, please try again! \n");
				problhma=1;
			}
		}
	if ( f == 'D')
		{
			if (j <= 7 && thesh[i][j]==0 && thesh[i][j+1]==0 && thesh[i][j+2]==0)
			{
			thesh[i][j]=3;
			thesh[i][j+1]=3;
			thesh[i][j+2]=3;
		
			c='A'; 
			printf("\t 0   1   2   3   4   5   6   7   8   9\n");  
			for(j=0; j < 10 ; j++ ){
            printf("%c",c+j);
            printf("\t|%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d", thesh[0][j],thesh[1][j],thesh[2][j],thesh[3][j],thesh[4][j],thesh[5][j],thesh[6][j],thesh[7][j],thesh[8][j],thesh[9][j]);
            printf("\n");
            
			}
    	 	}
			else
			{
				printf("Wrong placement, please try again! \n");
				problhma=1;
			}
		}
	if ( f == 'L')
		{
			if (i >= 2 && thesh[i][j]==0 && thesh[i-1][j]==0 && thesh[i-2][j]==0)
			{
			thesh[i][j]=3;
			thesh[i-1][j]=3;
			thesh[i-2][j]=3;
		
			c='A'; 
			printf("\t 0   1   2   3   4   5   6   7   8   9\n");  
			for(j=0; j < 10 ; j++ ){
            printf("%c",c+j);
            printf("\t|%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d", thesh[0][j],thesh[1][j],thesh[2][j],thesh[3][j],thesh[4][j],thesh[5][j],thesh[6][j],thesh[7][j],thesh[8][j],thesh[9][j]);
            printf("\n");            
			}
    	 	}
			else
			{
				printf("Wrong placement, please try again! \n");
				problhma=1;
			}
		}
	if ( f == 'R')
		{
			if (i <= 7 && thesh[i][j]==0 && thesh[i+1][j]==0 && thesh[i+2][j]==0)
			{
			thesh[i][j]=3;
			thesh[i+1][j]=3;
			thesh[i+2][j]=3;
		
			c='A'; 
			printf("\t 0   1   2   3   4   5   6   7   8   9\n");  
			for(j=0; j < 10 ; j++ ){
            printf("%c",c+j);
            printf("\t|%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d", thesh[0][j],thesh[1][j],thesh[2][j],thesh[3][j],thesh[4][j],thesh[5][j],thesh[6][j],thesh[7][j],thesh[8][j],thesh[9][j]);
            printf("\n");            
			}
    	 	}
			else
			{
				printf("Wrong placement, please try again! \n");
				problhma=1;
			}
		}
	}
	else
	{
		printf("No such command,Navy Captain! \n");
		problhma=1;
	}
	}
	else
	{
		printf("No such command,Navy Captain! \n");
		problhma=1;
	}
}
	printf("You have placed your submarine!!\n");
	//Frigate placement(player)
	problhma=1;
 	while(problhma==1)
 	{
    problhma=0;
	printf("Position for Frigate(3 slots)? \n");
	fflush(stdin);
	scanf("%d %c %c %c %c", &i,&temp1,&c,&temp2,&f);
	if( isdigit(i)==0 && isalpha(c)==0 && isalpha(f)==0){
		problhma=1;
	}
	if (c=='A') j=0;
	if (c=='B') j=1;
	if (c=='C') j=2;
	if (c=='D') j=3;
	if (c=='E') j=4;
	if (c=='F') j=5;
	if (c=='G') j=6;
	if (c=='H') j=7;
	if (c=='I') j=8;
	if (c=='J') j=9;
	if (i >= 0 && i<=10 && j>=0 && j<=9)
	{
	if ( f=='U' || f=='D' || f=='L' || f=='R')
	{
	if ( f == 'U')
		{
			if (j >= 2 && thesh[i][j]==0 && thesh[i][j-1]==0 && thesh[i][j-2]==0)
			{
			thesh[i][j]=2;
			thesh[i][j-1]=2;
			thesh[i][j-2]=2;
            
			c='A'; 
			printf("\t 0   1   2   3   4   5   6   7   8   9\n");  
			for(j=0; j < 10 ; j++ ){
            printf("%c",c+j);
            printf("\t|%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d", thesh[0][j],thesh[1][j],thesh[2][j],thesh[3][j],thesh[4][j],thesh[5][j],thesh[6][j],thesh[7][j],thesh[8][j],thesh[9][j]);
            printf("\n");
            
			}
    	 	}
			else
			{
				printf("Wrong placement, please try again! \n");
				problhma=1;
			}
		}
	if ( f == 'D')
		{
			if (j <= 7 && thesh[i][j]==0 && thesh[i][j+1]==0 && thesh[i][j+2]==0)
			{
			thesh[i][j]=2;
			thesh[i][j+1]=2;
			thesh[i][j+2]=2;
		
			c='A'; 
			printf("\t 0   1   2   3   4   5   6   7   8   9\n");  
			for(j=0; j < 10 ; j++ ){
            printf("%c",c+j);
            printf("\t|%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d", thesh[0][j],thesh[1][j],thesh[2][j],thesh[3][j],thesh[4][j],thesh[5][j],thesh[6][j],thesh[7][j],thesh[8][j],thesh[9][j]);
            printf("\n");
            
			}
    	 	}
			else
			{
				printf("Wrong placement, please try again! \n");
				problhma=1;
			}
		}
	if ( f == 'L')
		{
			if (i >= 2 && thesh[i][j]==0 && thesh[i-1][j]==0 && thesh[i-2][j]==0)
			{
			thesh[i][j]=2;
			thesh[i-1][j]=2;
			thesh[i-2][j]=2;
		
			c='A'; 
			printf("\t 0   1   2   3   4   5   6   7   8   9\n");  
			for(j=0; j < 10 ; j++ ){
            printf("%c",c+j);
            printf("\t|%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d", thesh[0][j],thesh[1][j],thesh[2][j],thesh[3][j],thesh[4][j],thesh[5][j],thesh[6][j],thesh[7][j],thesh[8][j],thesh[9][j]);
            printf("\n");
            
			}
    	 	}
			else
			{
				printf("Wrong placement, please try again! \n");
				problhma=1;
			}
		}
	if ( f == 'R')
		{
			if (i <= 7 && thesh[i][j]==0 && thesh[i+1][j]==0 && thesh[i+2][j]==0)
			{
			thesh[i][j]=2;
			thesh[i+1][j]=2;
			thesh[i+2][j]=2;
		
			c='A'; 
			printf("\t 0   1   2   3   4   5   6   7   8   9\n");  
			for(j=0; j < 10 ; j++ ){
            printf("%c",c+j);
            printf("\t|%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d", thesh[0][j],thesh[1][j],thesh[2][j],thesh[3][j],thesh[4][j],thesh[5][j],thesh[6][j],thesh[7][j],thesh[8][j],thesh[9][j]);
            printf("\n");
            
			}
    	 	}
			else
			{
				printf("Wrong placement, please try again! \n");
				problhma=1;
			}
		}
	}
	else
	{
		printf("No such command,Navy Captain! \n");
		problhma=1;
	}
	}
	else
	{
		printf("No such command,Navy Captain! \n");
		problhma=1;
	}
}
	printf("You have placed your frigate!!\n");
	//Patrol Boat placement(player)
	problhma=1;
 	while(problhma==1)
 	{
    problhma=0;
	printf("Position for Patrol Boat(2 slots)? \n");
	fflush(stdin);
	scanf("%d %c %c %c %c", &i,&temp1,&c,&temp2,&f);
	if( isdigit(i)==0 && isalpha(c)==0 && isalpha(f)==0){
		problhma=1;
	}
	if (c=='A') j=0;
	if (c=='B') j=1;
	if (c=='C') j=2;
	if (c=='D') j=3;
	if (c=='E') j=4;
	if (c=='F') j=5;
	if (c=='G') j=6;
	if (c=='H') j=7;
	if (c=='I') j=8;
	if (c=='J') j=9;
	if (i >= 0 && i<=10 && j>=0 && j<=9)
	{
	if ( f=='U' || f=='D' || f=='L' || f=='R')
	{
	if ( f == 'U')
		{
			if (j >= 1 && thesh[i][j]==0 && thesh[i][j-1]==0)
			{
			thesh[i][j]=1;
			thesh[i][j-1]=1;
		
			c='A'; 
			printf("\t 0   1   2   3   4   5   6   7   8   9\n");  
			for(j=0; j < 10 ; j++ ){
            printf("%c",c+j);
            printf("\t|%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d", thesh[0][j],thesh[1][j],thesh[2][j],thesh[3][j],thesh[4][j],thesh[5][j],thesh[6][j],thesh[7][j],thesh[8][j],thesh[9][j]);
            printf("\n");
            
			}
    	 	}
			else
			{
				printf("Wrong placement, please try again! \n");
				problhma=1;
			}
		}
	if ( f == 'D')
		{
			if (j <= 8 && thesh[i][j]==0 && thesh[i][j+1]==0)
			{
			thesh[i][j]=1;
			thesh[i][j+1]=1;
		
			c='A'; 
			printf("\t 0   1   2   3   4   5   6   7   8   9\n");  
			for(j=0; j < 10 ; j++ ){
            printf("%c",c+j);
            printf("\t|%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d", thesh[0][j],thesh[1][j],thesh[2][j],thesh[3][j],thesh[4][j],thesh[5][j],thesh[6][j],thesh[7][j],thesh[8][j],thesh[9][j]);
            printf("\n");
            
			}
    	 	}
			else
			{
				printf("Wrong placement, please try again! \n");
				problhma=1;
			}
		}
	if ( f == 'L')
		{
			if (i >= 1 && thesh[i][j]==0 && thesh[i-1][j]==0)
			{
			thesh[i][j]=1;
			thesh[i-1][j]=1;
		
			c='A'; 
			printf("\t 0   1   2   3   4   5   6   7   8   9\n");  
			for(j=0; j < 10 ; j++ ){
            printf("%c",c+j);
            printf("\t|%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d", thesh[0][j],thesh[1][j],thesh[2][j],thesh[3][j],thesh[4][j],thesh[5][j],thesh[6][j],thesh[7][j],thesh[8][j],thesh[9][j]);
            printf("\n");
            
			}
    	 	}
			else
			{
				printf("Wrong placement, please try again! \n");
				problhma=1;
			}
		}
	if ( f == 'R')
		{
			if (i <= 8 && thesh[i][j]==0 && thesh[i+1][j]==0)
			{
			thesh[i][j]=1;
			thesh[i+1][j]=1;
		
			c='A'; 
			printf("\t 0   1   2   3   4   5   6   7   8   9\n");  
			for(j=0; j < 10 ; j++ ){
            printf("%c",c+j);
            printf("\t|%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d  |%d", thesh[0][j],thesh[1][j],thesh[2][j],thesh[3][j],thesh[4][j],thesh[5][j],thesh[6][j],thesh[7][j],thesh[8][j],thesh[9][j]);
            printf("\n");
            
			}
    	 	}
			else
			{
				printf("Wrong placement, please try again! \n");
				problhma=1;
			}
		}
	}
	else
	{
		printf("No such command,Navy Captain! \n");
		problhma=1;
	}
	}
	else
	{
		printf("No such command,Navy Captain! \n");
		problhma=1;
	}
}
	
	printf("You have placed your patrol boat!!\n");
	//END OF PLAYER's SHIPS PLACEMENT
	
	printf("Do you want to reset?(Y/N)\n");
	
	scanf(" %c", &temp1);
	//anything else than N will make him to reset
	if (temp1=='N')	reset=0;
	
} while (reset==1);
	 
	 //creating player screen
	for (i=0;i<10;i++)
    {
    	for (j=0;j<10;j++)
    	{
    		if (thesh[i][j]==0) screenplayer[i][j]=' ';
			else screenplayer[i][j]='A';
		}
	} 
	 //deciding who's playing first
	 //if the player plays second the program skips that part and goes straight to the loop
	 system("clear");
	 srand(time(NULL));  
	 int order= rand() % 2;
	 if (order==0)	 
	 {
	 	printf("The coin has been flipped and you go FIRST!!\n");
	 	do
	 	{
		    printf("Give the couple of coordinates. \n");
			labeltsek=0;
			scanf("%d %c %c", &x,&temp1,&c);
			
			//isdigit check not included
			if((x<0) || (x>9) || (c<'A') || (c>'J')){
			printf("Error,give the correct type of coordinates \n");	
			labeltsek=1;	
			}
			if (c=='A') y=0;
			if (c=='B') y=1;
			if (c=='C') y=2;
			if (c=='D') y=3;
			if (c=='E') y=4;
			if (c=='F') y=5;
			if (c=='G') y=6;
			if (c=='H') y=7;
			if (c=='I') y=8;
			if (c=='J') y=9;
		}while(labeltsek==1);
		system("clear");
		if (theshbot[x][y]==0) 
		{
			printf("MISS\n");
			screenbot[x][y]='X';
			printf("\t 0   1   2   3   4   5   6   7   8   9\n");  
		for(j=0; j < 10 ; j++ )
				{
				c='A'; 
            	printf("%c",c+j);
            	printf("\t|%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c", screenbot[0][j],screenbot[1][j],screenbot[2][j],screenbot[3][j],screenbot[4][j],screenbot[5][j],screenbot[6][j],screenbot[7][j],screenbot[8][j],screenbot[9][j]);
				printf("\n");
    	 		}				
		}
		else 
		{
		botships[theshbot[x][y]]--;	
		printf("============\nITS A HIT!\n============\n");
	 	screenbot[x][y]='O';
			printf("\t 0   1   2   3   4   5   6   7   8   9\n");  
		for(j=0; j < 10 ; j++ )
				{
				c='A'; 
            	printf("%c",c+j);
            	printf("\t|%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c", screenbot[0][j],screenbot[1][j],screenbot[2][j],screenbot[3][j],screenbot[4][j],screenbot[5][j],screenbot[6][j],screenbot[7][j],screenbot[8][j],screenbot[9][j]);
            	printf("\n");
    	 		}		 
		}
	 }
	else printf("The coin has been flipped and you go SECOND!!\n");
	//when playerwin or botwin becomes 5 the game ends
	playerwin=0;
	botwin=0;
	//hit and times help the bot's decisionmaking
	hit=0;	
	times=0;
	// loop for the game 
	do
	{
		flag1=0;
		//HERE IS THE PART WHERE THE BOT DECIDES WHERE TO HIT
		if (hit==0)
		{
			do
			{
				srand(time(NULL));
				labeltsek= rand()% 2;
				if (labeltsek=0)
				{
					srand(time(NULL));
					x= rand()% 10;
					b=x;
					y= rand()% 10;
					d=y;
				}
				else
				{
					srand(time(NULL));
					x= rand()% 10;
					x= 9-x;
					b=x;
					y= rand()% 10;
					y= 9-y;
					d=y;					
				}	
						
			}	while (thesh[x][y]==7);
		}
		if (hit==1)
		{
			q=b;
			w=d;
			if (q+times<=9) 
			{
				q=q+times;
			}
			x=q;
			y=w;
			if (thesh[x][y]==7) hit=2;
		}
		if (hit==2)
		{
			q=b;
			w=d;
			if (q-times>=0)  
			{
				q=q-times;
			}
			x=q;
			y=w;
			if (thesh[x][y]==7) hit=3;			
		}
		if (hit==3)
		{
			q=b;
			w=d;
			if (w+times<=9) 
			{
				w=w+times;
			}
			x=q;
			y=w;
			if (thesh[x][y]==7) hit=4;	
		}
		if (hit==4)
		{
			q=b;
			w=d;
			if (w-times>=0) 
			{
				w=w-times;
			}
			x=q;
			y=w;
			if (thesh[x][y]==7) hit=5;	
		}
		if (hit==5)
		{
			hit=0;
			do
			{
			srand(time(NULL));
			x= rand()% 10;
			b=x;
			srand(time(NULL));
			y= rand()% 10;
			d=y;		
			}	while (thesh[x][y]==7);
		}
		//END OF BOT "BRAIN" 
		
		//bot misses
		if(thesh[x][y]==0)
		{
			if (hit==0) times=0;
			else 		times=1;
			if (hit==1) hit=2;
			else if (hit==2) hit=3;
			else if (hit==3) hit=4;
			else if (hit==4) hit=5;
			printf("You are lucky!!The bot hit the see\n");
			screenplayer[x][y]='X';
			printf("\t 0   1   2   3   4   5   6   7   8   9\n");  
			for(j=0; j < 10 ; j++ )
			{
				c='A'; 
            	printf("%c",c+j);
            	printf("\t|%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c", screenplayer[0][j],screenplayer[1][j],screenplayer[2][j],screenplayer[3][j],screenplayer[4][j],screenplayer[5][j],screenplayer[6][j],screenplayer[7][j],screenplayer[8][j],screenplayer[9][j]);
            	printf("\n");
    	 	}		
				
			thesh[x][y]=7;
			//PLAYER TURN
			do
	 		{
			    printf("Give the couple of coordinates. \n");
				labeltsek=0;
				scanf("%d %c %c", &x,&temp1,&c);
				
				//isdigit check not included
				if((x<0) || (x>9) || (c<'A') || (c>'J')){
				printf("Error,give the correct type of coordinates \n");	
				labeltsek=1;	
				}
				if (c=='A') y=0;
				if (c=='B') y=1;
				if (c=='C') y=2;
				if (c=='D') y=3;
				if (c=='E') y=4;
				if (c=='F') y=5;
				if (c=='G') y=6;
				if (c=='H') y=7;
				if (c=='I') y=8;
				if (c=='J') y=9;
				if ((screenbot[x][y]=='X') || (screenbot[x][y]=='O'))
				{
					printf("\nYou have already attacked there, Captain!!Try again");
					labeltsek=1;
				}
			}	while(labeltsek==1);	
			system("clear");
			if (theshbot[x][y]==0) 
			{
				//creating the screen
				printf("MISS\n");
				screenbot[x][y]='X';
				printf("\t 0   1   2   3   4   5   6   7   8   9\n");  
				for(j=0; j < 10 ; j++ )
				{
				c='A';
            	printf("%c",c+j);
            	printf("\t|%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c", screenbot[0][j],screenbot[1][j],screenbot[2][j],screenbot[3][j],screenbot[4][j],screenbot[5][j],screenbot[6][j],screenbot[7][j],screenbot[8][j],screenbot[9][j]);
            	printf("\n");
    	 		}				
			}
			else 
			{
				botships[theshbot[x][y]]--;
				printf("============\nITS A HIT!\n============\n");
				if (botships[5]==0)
				{
					printf("============\nAND SUNK!!!!\n============\n");
					playerwin++;
					botships[5]--;
				}
				if (botships[4]==0)
				{
					printf("============\nAND SUNK!!!!\n============\n");
					playerwin++;
					botships[4]--;
				}
				if (botships[3]==0)
				{
					printf("============\nAND SUNK!!!!\n============\n");
					playerwin++;
					botships[3]--;
				}
				if (botships[2]==0)
				{
					printf("============\nAND SUNK!!!!\n============\n");
					playerwin++;
					botships[2]--;
				}
				if (botships[1]==0)
				{
					printf("============\nAND SUNK!!!!\n============\n");
					playerwin++;
					botships[1]--;
				}
				
				//creating the screen
	 			screenbot[x][y]='O';
				printf("\t 0   1   2   3   4   5   6   7   8   9\n");  
				for(j=0; j < 10 ; j++ )
				{
				c='A';
            	printf("%c",c+j);
            	printf("\t|%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c", screenbot[0][j],screenbot[1][j],screenbot[2][j],screenbot[3][j],screenbot[4][j],screenbot[5][j],screenbot[6][j],screenbot[7][j],screenbot[8][j],screenbot[9][j]);
            	printf("\n");
    	 		}		 
			}
			//END OF PLAYER TURN
		}
		//bot hits
		else
		{
			if (hit==0) hit=1;
			times++;
			if (thesh[x][y]==5) 
			{
				thesh[x][y]=7;
				printf("=========================\nYour Aircraft has been hit!!\n=========================\n");
				ships[5]--;
			}			
			if (ships[5]==0)
			{
				printf("============\nAND SUNK!!!!\n============\n");
				botwin++;
				ships[5]--;
			}
			if (thesh[x][y]==4) 
			{
				thesh[x][y]=7;
				printf("=========================\nYour Battleship has been hit!!\n=========================\n");
				ships[4]--;
			}
			if (ships[4]==0)
			{
				printf("============\nAND SUNK!!!!\n============\n");
				botwin++;
				ships[4]--;
			}
			if (thesh[x][y]==3) 
			{
				thesh[x][y]=7;
				printf("=========================\nYour Submarine has been hit!!\n=========================\n");
				ships[3]--;
			}
			if (ships[3]==0)
			{
				printf("============\nAND SUNK!!!!\n============\n");
				botwin++;
				ships[3]--;
			}
			if (thesh[x][y]==2) 
			{
				thesh[x][y]=7;
				printf("=========================\nYour Frigate has been hit!!\n=========================\n");
				ships[2]--;
			}
			if (ships[2]==0)
			{
				printf("============\nAND SUNK!!!!\n============\n");
				botwin++;
				ships[2]--;
			}
			if (thesh[x][y]==1) 
			{
				thesh[x][y]=7;
				printf("=========================\nYour Patrol Boat has been hit!!\n=========================\n");
				ships[1]--;
			}
			if (ships[1]==0)
			{
				printf("============\nAND SUNK!!!!\n============\n");
				botwin++;
				ships[1]--;
			}
				//creating the screen
			screenplayer[x][y]='O';
			printf("\t 0   1   2   3   4   5   6   7   8   9\n");  
			for(j=0; j < 10 ; j++ )
			{
				c='A'; 
            	printf("%c",c+j);
            	printf("\t|%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c", screenplayer[0][j],screenplayer[1][j],screenplayer[2][j],screenplayer[3][j],screenplayer[4][j],screenplayer[5][j],screenplayer[6][j],screenplayer[7][j],screenplayer[8][j],screenplayer[9][j]);
            	printf("\n");
    	 	}
    	 	// THE GAME ENDS IF THERE ARE NO SHIPS FOR THE PLAYER
				if (botwin==5) 	break;
		
		
		//PLAYER TURN (IF BOT HITS)
			do
	 		{
			    printf("Give the couple of coordinates. \n");
				labeltsek=0;
				scanf("%d %c %c", &x,&temp1,&c);
				
				//isdigit check not included
				if((x<0) || (x>9) || (c<'A') || (c>'J')){
				printf("Error,give the correct type of coordinates \n");	
				labeltsek=1;	
				}
				if (c=='A') y=0;
				if (c=='B') y=1;
				if (c=='C') y=2;
				if (c=='D') y=3;
				if (c=='E') y=4;
				if (c=='F') y=5;
				if (c=='G') y=6;
				if (c=='H') y=7;
				if (c=='I') y=8;
				if (c=='J') y=9;
				if ((screenbot[x][y]=='X') || (screenbot[x][y]=='O'))
				{
					printf("\nYou have already attacked there, Captain!!Try again");
					labeltsek=1;
				}
			}	while(labeltsek==1);	
			system("clear");
			if (theshbot[x][y]==0) 
			{
				//creating the screen
				printf("MISS\n");
				screenbot[x][y]='X';
				printf("\t 0   1   2   3   4   5   6   7   8   9\n");  
				for(j=0; j < 10 ; j++ )
				{
				c='A';
            	printf("%c",c+j);
            	printf("\t|%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c", screenbot[0][j],screenbot[1][j],screenbot[2][j],screenbot[3][j],screenbot[4][j],screenbot[5][j],screenbot[6][j],screenbot[7][j],screenbot[8][j],screenbot[9][j]);
            	printf("\n");
    	 		}				
			}
			else 
			{
				botships[theshbot[x][y]]--;	
				printf(ANSI_COLOR_GREEN   "============\nITS A HIT!\n============\n"  ANSI_COLOR_RESET);
				if (botships[5]==0)
				{
					printf("============\nAND SUNK!!!!\n============\n");
					playerwin++;
					botships[5]--;
				}
				if (botships[4]==0)
				{
					printf("============\nAND SUNK!!!!\n============\n");
					playerwin++;
					botships[4]--;
				}
				if (botships[3]==0)
				{
					printf("============\nAND SUNK!!!!\n============\n");
					playerwin++;
					botships[3]--;
				}
				if (botships[2]==0)
				{
					printf("============\nAND SUNK!!!!\n============\n");
					playerwin++;
					botships[2]--;
				}
				if (botships[1]==0)
				{
					printf("============\nAND SUNK!!!!\n============\n");
					playerwin++;
					botships[1]--;
				}
				
				//creating the screen
	 			screenbot[x][y]='O';
				printf("\t 0   1   2   3   4   5   6   7   8   9\n");  
				for(j=0; j < 10 ; j++ )
				{
				c='A';
            	printf("%c",c+j);
            	printf("\t|%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c  |%c", screenbot[0][j],screenbot[1][j],screenbot[2][j],screenbot[3][j],screenbot[4][j],screenbot[5][j],screenbot[6][j],screenbot[7][j],screenbot[8][j],screenbot[9][j]);
            	printf("\n");
    	 		}		 
			}
			//END OF PLAYER TURN(IF BOT HITS)
		}
	}	while ((playerwin!=5)&&(botwin!=5));
	//Deciding the winner
	if (botwin==5)	printf("#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#\nYou are not ready to become a captain yet\n#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#\n");
	else printf("#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#\nCongratulations!!!!!!\nYou won!!\n#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#\n");
	
	
	
	
	
/////////////////////////////////////////////////////////////////////////////////////	
	

	//player

 }
     if (ari8mos==3){
		system("clear");
     }


}
