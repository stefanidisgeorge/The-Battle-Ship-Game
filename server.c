#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>
#include <time.h>




int status[8],status1[8], stats[14], buf1[1], stop_arg=-1;
//katastaseis elegxou,  katastaseis paixnidiou, buffer,


char paketo1[25], paketo2[25],targetp1[2],targetp2[2],f;
int client1[210][210],client2[210][210],i,j,ACKp1[2],ACKp2[2],secur1,secur2,sig=4;
int thesh1[210][210],thesh2[210][210],thesh3[210][210],thesh4[210][210],thesh5[210][210],thesh6[210][210],thesh7[210][210],thesh8[210][210],thesh9[210][210],thesh10[210][210];
void *p0_thread(void *socket_ret);//p1 thread
void *p1_thread(void *socket_ret);//p2 thread
struct sockaddr_in address, client_addr;
int sum = 0;
int p1_ready=0, p2_ready=0;
char otherplayer[20];


int a;





int main(int argc, char *argv[]){
system("clear");
    
    
    srand(time(NULL));
    a=rand()%2;
    if(a==0){
        status[5]=0;
        status[4]=1;
    }
    else {
        status[5]=1;
        status[4]=0;
    }
    printf("%d,%d",status[4],status[5]);
    
//dimourgia pinaka thesh....
for (i=0; i<210; i++){
		for (j=0; j<210; j++){
			thesh1[i][j]=0;	
		}
	}
	
for (i=0; i<210; i++){
		for (j=0; j<210; j++){
			thesh3[i][j]=0;	
		}
	}
	
	for (i=0; i<210; i++){
		for (j=0; j<210; j++){
			thesh4[i][j]=0;	
		}
	}
	
	for (i=0; i<210; i++){
		for (j=0; j<210; j++){
			thesh5[i][j]=0;	
		}
	}
	for (i=0; i<210; i++){
		for (j=0; j<210; j++){
			thesh6[i][j]=0;	
		}
	}
	for (i=0; i<210; i++){
		for (j=0; j<210; j++){
			thesh7[i][j]=0;	
		}
	}
	for (i=0; i<210; i++){
		for (j=0; j<210; j++){
			thesh8[i][j]=0;	
		}
	}
	for (i=0; i<210; i++){
		for (j=0; j<210; j++){
			thesh9[i][j]=0;	
		}
	}
	for (i=0; i<210; i++){
		for (j=0; j<210; j++){
			thesh10[i][j]=0;	
		}
	}
	
	
//dimourgia pinaka client1
for (i=0; i<210; i++){
		for (j=0; j<210; j++){
			client1[i][j]=0;	
		}
	}
//dimourgia pinaka thesh2
for (i=0; i<210; i++){
		for (j=0; j<210; j++){
			thesh2[i][j]=0;	
		}
	}
	
//dimourgia pinaka client2
for (i=0; i<210; i++){
		for (j=0; j<210; j++){
			client2[i][j]=0;	
		}
	}
	
//teloss

    if (argc!=3){
        printf("2 Parametres: <port>, <ip>, <$>\n");
        exit(0);
    }
    int port=atoi(argv[1]);
    int buf=strlen(argv[2]);
    char *ip=malloc(buf*sizeof(char));
    ip= argv[2];



//SOCKET
int socket_ret;
socket_ret=socket(PF_INET, SOCK_STREAM, 0);
if (socket_ret==-1) {
    perror("Socket Error");
    exit(0);
    }
else printf("Socket Created \n");

address.sin_family = PF_INET;
address.sin_addr.s_addr = htons(INADDR_ANY);
address.sin_port = htons(port);



int bind_ret;
bind_ret=bind(socket_ret, (struct sockaddr *)&address, sizeof(address));
if (bind_ret==-1) {
    perror("Bind Error");
    exit(0);
    }
else printf("Bind Created\n");



int backlog=5;//Length of Pending Connections
int listen_ret;

listen_ret=listen(socket_ret, backlog);
if (listen_ret==-1) {perror("Listen Error"); exit(0);}
else printf("Listen Created\n");


//dimiourgia thread
int pthread_create_ret[3];
pthread_t threads[3];


//thread1
pthread_create_ret[0]=pthread_create(&threads[0], NULL, &p0_thread, (void *)&socket_ret);
if (pthread_create_ret[0]!=0){
    perror("Thread No0 Error");
    exit(0);
    }
else printf("P1 Thread Created\n");

//thread2
pthread_create_ret[1]=pthread_create(&threads[1], NULL, &p1_thread, (void *)&socket_ret);
if (pthread_create_ret[1]!=0){
    perror("Thread No1 Error");
    exit(0);
    }
else printf("P2 Thread Created\n");

int i;
for (i=0;i<3;i++){
    pthread_join(threads[i],(void *) NULL);
    }
printf("Threads 0,1 & 2 Has Been Terminated\n");


    for(i=0;i<3;i++){
        pthread_exit(&pthread_create_ret[i]);
    }


//socket close
close(socket_ret);

exit(0);
}




//thread p1
void *p0_thread(void *socket_ret){
    int read_ret,write_ret;
    int sock=*(int *)socket_ret;


    //apodoxi p1
    int accept_ret,addrlen;
    addrlen=sizeof(client_addr);

    accept_ret=accept(sock, (struct sockaddr *)&client_addr, &addrlen);
    if (accept_ret==-1) {
        perror("Accept Error");
        exit(0);
        }

    
    else printf("Accept Created For P1\n");


    //name p1
    char name[25];

    read_ret=read(accept_ret, name, sizeof(name));
    if (read_ret == -1){
        perror("Read Error");
        exit(0);
        }
    else printf("P1: %s, ", name);

    //welcome to p1
    char wellcome[15];
    strcat(wellcome,"WELCOME P1");
    write_ret=write(accept_ret, wellcome, sizeof(wellcome));
    if (write_ret == -1){
        perror("Write Error");
        exit(0);
        }
    /*write_ret=write(accept_ret, buf1, sizeof(buf1));
    if (write_ret == -1){
        perror("Write Error");
        exit(0);
        }*/

    //check p2
    status[0]=1;//p1 exists
    while (status[1]!=1) continue;//loop for p2
    sleep(3);

    //sent starting
    char starting[20];
    strcat(starting,"STARTINGPLACEMENT");



    write_ret=write(accept_ret, starting, sizeof(starting));
    if (write_ret == -1){
        perror("Write Error");
        exit(0);
        }
    printf("WELCOME P1, %s\n", starting);


    //read placement p1
    read_ret=read(accept_ret, paketo1,  sizeof(paketo1));
    if (read_ret == -1){
        perror("Read Error");
        exit(0);
        }
    p1_ready=1;
    printf("%s\n",paketo1);
    //arxikopoihsh server
    i = paketo1[6] - '0';
 	j = paketo1[7]- '0';
    f = paketo1[8];
 	if ( f == 'U')
		{
			if (j >= 4)
			{
			thesh1[i][j]=1;
			thesh1[i][j-1]=1;
			thesh1[i][j-2]=1;
			thesh1[i][j-3]=1;
			thesh1[i][j-4]=1;
		
	
    	 	}
		}
	if ( f == 'D')
		{
			if (j <= 5)
			{
			thesh1[i][j]=1;
			thesh1[i][j+1]=1;
			thesh1[i][j+2]=1;
			thesh1[i][j+3]=1;
			thesh1[i][j+4]=1;
		
	
    	 	}
		}
	if ( f == 'L')
		{
			if (i >= 4)
			{
			thesh1[i][j]=1;
			thesh1[i-1][j]=1;
			thesh1[i-2][j]=1;
			thesh1[i-3][j]=1;
			thesh1[i-4][j]=1;
		
		
    	 	}
		}
	if ( f == 'R')
		{
			if (i <= 5)
			{
			thesh1[i][j]=1;
			thesh1[i+1][j]=1;
			thesh1[i+2][j]=1;
			thesh1[i+3][j]=1;
			thesh1[i+4][j]=1;
		
	
    	 	}
		}
	i = paketo1[10] - '0';
 	j = paketo1[11]- '0';
 	 f = paketo1[12];	
	if ( f == 'U')
		{
			if (j >= 3)
			{
			thesh3[i][j]=1;
			thesh3[i][j-1]=1;
			thesh3[i][j-2]=1;
			thesh3[i][j-3]=1;
		
	
    	 	}
		}
	if ( f == 'D')
		{
			if (j <= 6)
			{
			thesh3[i][j]=1;
			thesh3[i][j+1]=1;
			thesh3[i][j+2]=1;
			thesh3[i][j+3]=1;
		
	
    	 	}
		}
	if ( f == 'L')
		{
			if (i >= 3)
			{
			thesh3[i][j]=1;
			thesh3[i-1][j]=1;
			thesh3[i-2][j]=1;
			thesh3[i-3][j]=1;
		
		
    	 	}
		}
	if ( f == 'R')
		{
			if (i <= 6 )
			{
			thesh3[i][j]=1;
			thesh3[i+1][j]=1;
			thesh3[i+2][j]=1;
			thesh3[i+3][j]=1;
		
    	 	}
		}	
	i = paketo1[14] - '0';
 	j = paketo1[15]- '0';
 	 f = paketo1[16];	
	if ( f == 'U')
		{
			if (j >= 2)
			{
			thesh5[i][j]=1;
			thesh5[i][j-1]=1;
			thesh5[i][j-2]=1;
	
    	 	}
			
		}
	if ( f == 'D')
		{
			if (j <= 7 )
			{
			thesh5[i][j]=1;
			thesh5[i][j+1]=1;
			thesh5[i][j+2]=1;
		
		
    	 	}
		}
	if ( f == 'L')
		{
			if (i >= 2)
			{
			thesh5[i][j]=1;
			thesh5[i-1][j]=1;
			thesh5[i-2][j]=1;

    	 	}
		}
	if ( f == 'R')
		{
			if (i <= 7)
			{
			thesh5[i][j]=1;
			thesh5[i+1][j]=1;
			thesh5[i+2][j]=1;
		
		
    	 	}
		}
	i = paketo1[18] - '0';
 	j = paketo1[19]- '0';
    f = paketo1[20];		
	if ( f == 'U')
		{
			if (j >= 2)
			{
			thesh7[i][j]=1;
			thesh7[i][j-1]=1;
			thesh7[i][j-2]=1;
            

    	 	}
			
		}
	if ( f == 'D')
		{
			if (j <= 7)
			{
			thesh7[i][j]=1;
			thesh7[i][j+1]=1;
			thesh7[i][j+2]=1;
		

    	 	}
			
		}
	if ( f == 'L')
		{
			if (i >= 2 )
			{
			thesh7[i][j]=1;
			thesh7[i-1][j]=1;
			thesh7[i-2][j]=1;
		

    	 	}
			
		}
	if ( f == 'R')
		{
			if (i <= 7 )
			{
			thesh7[i][j]=1;
			thesh7[i+1][j]=1;
			thesh7[i+2][j]=1;
		
	
    	 	}
			
		}
	i = paketo1[22] - '0';
 	j = paketo1[23]- '0';
 	 f = paketo1[24];
	if ( f == 'U')
		{
			if (j >= 1)
			{
			thesh9[i][j]=1;
			thesh9[i][j-1]=1;
		
		
    	 	}
			
		}
	if ( f == 'D')
		{
			if (j <= 8 )
			{
			thesh9[i][j]=1;
			thesh9[i][j+1]=1;
		
		
    	 	}
	}
	if ( f == 'L')
		{
			if (i >= 1 )
			{
			thesh9[i][j]=1;
			thesh9[i-1][j]=1;
		
    	 	}
			
		}
	if ( f == 'R')
		{
			if (i <= 8)
			{
			thesh9[i][j]=1;
			thesh9[i+1][j]=1;

    	 	}
			
		}
    
    //sent otherplayer ready
    
    /*
    if(p1_ready==1){
        strcat(otherplayer,"OTHERPLAYERREADY");
        write_ret=write(accept_ret,otherplayer,sizeof(otherplayer));
        if (write_ret == -1){
            perror("Write Error");
            exit(0);
        }
    }
    else{
        strcat(otherplayer,"OTHERNOTPLAYERREADY");
        write_ret=write(accept_ret,otherplayer,sizeof(otherplayer));
        if (write_ret == -1){
            perror("Write Error");
            exit(0);
        }
        
    }*/
    
	//sent placeok
    char placeok[20];
    strcat(placeok,"PLACEOK");
    write_ret=write(accept_ret, placeok, sizeof(placeok));
    if (write_ret == -1){
        perror("Write Error");
        exit(0);
    }
  
	sleep(2);
	
   while(1){
    
   //read bombing
   /* while (status[5]==1) {
        printf("%d",status[5]);
        status[4]=0;
        status[5]=1;
        char bomb[20];
        strcat(bomb,"BOMB");
        write_ret=write(accept_ret, bomb, sizeof(bomb));
        if (write_ret == -1){
            perror("Write Error");
            exit(0);
        }
        
        sleep(2);
       
    }*/
    
            read_ret=read(accept_ret, targetp1, sizeof(targetp1));
            if (read_ret == -1){
                perror("Read Error");
                exit(0);
            }
            printf("%s\n",targetp1);
        int metavliti1 = targetp1[0] - '0';
        int metavliti2 = targetp1[1] - '0';
		client1[metavliti1][metavliti2]=1;
		ACKp1[0]=0;
		ACKp1[1]=0;
		secur1=0;
		
		if( metavliti1 == 11 && metavliti2 == 11)
		{
			ACKp1[0]=0;
			ACKp1[1]=1;
			write_ret = write(accept_ret, ACKp1 , sizeof(ACKp1));	
		}
		if (thesh2[metavliti1][metavliti2]==client1[metavliti1][metavliti2])
		{
			thesh2[metavliti1][metavliti2]=0;
			secur1=1;
			ACKp1[0]=1;
			sum=0;
			for (i = 0; i<210;i++) {
				for (j=0;j<210;j++){
					sum = sum + thesh2[i][j];
				}
			}
			if ( sum == 0 ){
				ACKp1[1]=1;
			}
			write_ret = write(accept_ret, ACKp1 , sizeof(ACKp1));	
		}
		if (thesh4[metavliti1][metavliti2]==client1[metavliti1][metavliti2])
		{
			thesh4[metavliti1][metavliti2]=0;
			secur1=1;
			ACKp1[0]=1;
			sum=0;
			for (i = 0; i<210;i++) {
				for (j=0;j<210;j++){
					sum = sum + thesh4[i][j];
				}
			}
			if ( sum == 0 ){
				ACKp1[1]=1;
			}
			write_ret = write(accept_ret, ACKp1 , sizeof(ACKp1));	
		}
		if (thesh6[metavliti1][metavliti2]==client1[metavliti1][metavliti2])
		{
			thesh6[metavliti1][metavliti2]=0;
			secur1=1;
			ACKp1[0]=1;
			sum=0;
			for (i = 0; i<210;i++) {
				for (j=0;j<210;j++){
					sum = sum + thesh6[i][j];
					
				}
			}
			
			if ( sum == 0 ){
				ACKp1[1]=1;
			}
			write_ret = write(accept_ret, ACKp1 , sizeof(ACKp1));	
		}
		if (thesh8[metavliti1][metavliti2]==client1[metavliti1][metavliti2])
		{
			thesh8[metavliti1][metavliti2]=0;
			secur1=1;
			ACKp1[0]=1;
			sum=0;
			for (i = 0; i<210;i++) {
				for (j=0;j<210;j++){
					sum = sum + thesh8[i][j];
				}
			}
			if ( sum == 0 ){
				ACKp1[1]=1;
			}
			write_ret = write(accept_ret, ACKp1 , sizeof(ACKp1));	
		}
		if (thesh10[metavliti1][metavliti2]==client1[metavliti1][metavliti2])
		{
			thesh10[metavliti1][metavliti2]=0;
			secur1=1;
			ACKp1[0]=1;
			sum=0;
			for (i = 0; i<210;i++) {
				for (j=0;j<210;j++){
					sum = sum + thesh10[i][j];
				}
			}
			if ( sum == 0 ){
				ACKp1[1]=1;
			}
			write_ret = write(accept_ret, ACKp1 , sizeof(ACKp1));	
		}
		if ( secur1 == 0 )
		{
			write_ret = write(accept_ret, ACKp2 , sizeof(ACKp2));
		}
    }
    }
    


//thread p2
void *p1_thread(void *socket_ret){
    int read_ret,write_ret;
    int sock=*(int *)socket_ret;


    //apodoxi p2
    int accept_ret,addrlen;
    addrlen=sizeof(client_addr);
    
    accept_ret=accept(sock, (struct sockaddr *)&client_addr, &addrlen);
    if (accept_ret==-1) {
        perror("Accept Error");
        exit(0);
    }
    else printf("Accept Created For P2\n");

    //name p2
    char name[25];

    read_ret=read(accept_ret, name, sizeof(name));
    if (read_ret == -1){
        perror("Read Error");
        exit(0);
    }
    else printf("P2: %s, ", name);

    //welcome to p2
    char wellcome[15];
    strcat(wellcome,"WELLCOME P2");
    write_ret=write(accept_ret, wellcome, sizeof(wellcome));
    if (write_ret == -1){
        perror("Write Error");
        exit(0);
        }
 
    //check p1
    status[1]=1;//p2 exist
    while (status[0]!=1) continue;//wait for p1
    sleep(3);

//sent starting
    char starting[20];
    char mon_buf[4];
    snprintf(mon_buf, 4, "%d", status[2]);

    strcat(starting,"STARTINGPLACEMENT");

    write_ret=write(accept_ret, starting, sizeof(starting));
    if (write_ret == -1){
        perror("Write Error");
        exit(0);
    }
    printf("WELCOME P2, %s\n", starting);


    
    //read placement p2
    read_ret=read(accept_ret, paketo2, sizeof(paketo2));
    if (read_ret == -1){
        perror("Read Error");
        exit(0);
        }
    
    printf("%s\n",paketo2);
    i = paketo2[6] - '0';
 	j = paketo2[7]- '0';
 	 f = paketo2[8];
 	if ( f == 'U')
		{
			if (j >= 4)
			{
			thesh2[i][j]=1;
			thesh2[i][j-1]=1;
			thesh2[i][j-2]=1;
			thesh2[i][j-3]=1;
			thesh2[i][j-4]=1;
		
    	 	}
		}
	if ( f == 'D')
		{
			if (j <= 5)
			{
			thesh2[i][j]=1;
			thesh2[i][j+1]=1;
			thesh2[i][j+2]=1;
			thesh2[i][j+3]=1;
			thesh2[i][j+4]=1;
		
		
    	 	}
		}
	if ( f == 'L')
		{
			if (i >= 4)
			{
			thesh2[i][j]=1;
			thesh2[i-1][j]=1;
			thesh2[i-2][j]=1;
			thesh2[i-3][j]=1;
			thesh2[i-4][j]=1;
		
		
    	 	}
		}
	if ( f == 'R')
		{
			if (i <= 5)
			{
			thesh2[i][j]=1;
			thesh2[i+1][j]=1;
			thesh2[i+2][j]=1;
			thesh2[i+3][j]=1;
			thesh2[i+4][j]=1;
		
			
    	 	}
		}
	i = paketo2[10] - '0';
 	j = paketo2[11]- '0';
 	 f = paketo2[12];	
	if ( f == 'U')
		{
			if (j >= 3)
			{
			thesh4[i][j]=1;
			thesh4[i][j-1]=1;
			thesh4[i][j-2]=1;
			thesh4[i][j-3]=1;
    	 	}
		}
	if ( f == 'D')
		{
			if (j <= 6)
			{
			thesh4[i][j]=1;
			thesh4[i][j+1]=1;
			thesh4[i][j+2]=1;
			thesh4[i][j+3]=1;
		
    	 	}
		}
	if ( f == 'L')
		{
			if (i >= 3)
			{
			thesh4[i][j]=1;
			thesh4[i-1][j]=1;
			thesh4[i-2][j]=1;
			thesh4[i-3][j]=1;
		
			
    	 	}
		}
	if ( f == 'R')
		{
			if (i <= 6 )
			{
			thesh4[i][j]=1;
			thesh4[i+1][j]=1;
			thesh4[i+2][j]=1;
			thesh4[i+3][j]=1;
		
			
    	 	}
		}	
	i = paketo2[14] - '0';
 	j = paketo2[15]- '0';
 	 f = paketo2[16];	
	if ( f == 'U')
		{
			if (j >= 2)
			{
			thesh6[i][j]=1;
			thesh6[i][j-1]=1;
			thesh6[i][j-2]=1;
		
			
    	 	}
			
		}
	if ( f == 'D')
		{
			if (j <= 7 )
			{
			thesh6[i][j]=1;
			thesh6[i][j+1]=1;
			thesh6[i][j+2]=1;
		
			
    	 	}
		}
	if ( f == 'L')
		{
			if (i >= 2)
			{
			thesh6[i][j]=1;
			thesh6[i-1][j]=1;
			thesh6[i-2][j]=1;
		
		
    	 	}
		}
	if ( f == 'R')
		{
			if (i <= 7)
			{
			thesh6[i][j]=1;
			thesh6[i+1][j]=1;
			thesh6[i+2][j]=1;
		
		
    	 	}
		}
	i = paketo2[18] - '0';
 	j = paketo2[19]- '0';
 	 f = paketo2[20];		
	if ( f == 'U')
		{
			if (j >= 2)
			{
			thesh8[i][j]=1;
			thesh8[i][j-1]=1;
			thesh8[i][j-2]=1;
            
		
    	 	}
			
		}
	if ( f == 'D')
		{
			if (j <= 7)
			{
			thesh8[i][j]=1;
			thesh8[i][j+1]=1;
			thesh8[i][j+2]=1;
		
		
    	 	}
			
		}
	if ( f == 'L')
		{
			if (i >= 2 )
			{
			thesh8[i][j]=1;
			thesh8[i-1][j]=1;
			thesh8[i-2][j]=1;
		
		
    	 	}
			
		}
	if ( f == 'R')
		{
			if (i <= 7 )
			{
			thesh8[i][j]=1;
			thesh8[i+1][j]=1;
			thesh8[i+2][j]=1;
		
		
    	 	}
			
		}
	i = paketo2[22] - '0';
 	j = paketo2[23]- '0';
 	 f = paketo2[24];
	if ( f == 'U')
		{
			if (j >= 1)
			{
			thesh10[i][j]=1;
			thesh10[i][j-1]=1;
		
		
    	 	}
			
		}
	if ( f == 'D')
		{
			if (j <= 8 )
			{
			thesh10[i][j]=1;
			thesh10[i][j+1]=1;
		
		
    	 	}
	}
	if ( f == 'L')
		{
			if (i >= 1 )
			{
			thesh10[i][j]=1;
			thesh10[i-1][j]=1;
		
		
    	 	}
			
		}
	if ( f == 'R')
		{
			if (i <= 8)
			{
			thesh10[i][j]=1;
			thesh10[i+1][j]=1;
		
		
    	 	}
			
		}	
		
	//sent otherplayer ready
    
/*
    if(p1_ready==1){
        strcat(otherplayer,"OTHERPLAYERREADY");
        write_ret=write(accept_ret,otherplayer,sizeof(otherplayer));
        if (write_ret == -1){
            perror("Write Error");
            exit(0);
        }
    }
    else{
        strcat(otherplayer,"OTHERNOTPLAYERREADY");
        write_ret=write(accept_ret,otherplayer,sizeof(otherplayer));
        if (write_ret == -1){
            perror("Write Error");
            exit(0);
        }
        
    }*/
        
    
    
    
    //sent placeok
    char placeok[20];
    strcat(placeok,"PLACEOK");
    
    
    
    write_ret=write(accept_ret, placeok, sizeof(placeok));
    if (write_ret == -1){
        perror("Write Error");
        exit(0);
    }
    sleep(2);
    //sent poios varaei
    /*
    printf("%s\n",converted_num);
    write_ret=write(accept_ret,converted_num,sizeof(converted_num));
    if (write_ret == -1){
        perror("Write Error");
        exit(0);
    }
    */
  while(1){
    //read bombing
    
        /*while (status[4]==1) {
            status[5]=1;
            status[4]=0;
            char bomb[20];
            strcat(bomb,"BOMB");
            write_ret=write(accept_ret, bomb, sizeof(bomb));
            if (write_ret == -1){
                perror("Write Error");
                exit(0);
            }
            
            sleep(2);
        }*/
    
    
        read_ret=read(accept_ret, targetp2, sizeof(targetp2));
        if (read_ret == -1){
            perror("Read Error");
            exit(0);
            }
           printf("%s\n",targetp2);
        int metavliti3 = targetp2[0] - '0';
        int metavliti4 = targetp2[1] - '0';
		client2[metavliti3][metavliti4]=1;
		ACKp2[0]=0;
		ACKp2[1]=0;
		secur2=0;
		if( metavliti3 == 11 && metavliti4 == 11)
		{
			ACKp2[0]=0;
			ACKp2[1]=1;
			write_ret = write(accept_ret, ACKp2 , sizeof(ACKp2));	
		}
		if (thesh1[metavliti3][metavliti4]==client2[metavliti3][metavliti4])
		{
			thesh1[metavliti3][metavliti4]=0;
			secur2=1;
			ACKp2[0]=1;
			sum=0;
			for (i = 0; i<210;i++) {
				for (j=0;j<210;j++){
					sum = sum + thesh1[i][j];
				}
			}
			if ( sum == 0 ){
				ACKp2[1]=1;
			}
			write_ret = write(accept_ret, ACKp2 , sizeof(ACKp2));	
		}
		if (thesh3[metavliti3][metavliti4]==client2[metavliti3][metavliti4])
		{
			thesh3[metavliti3][metavliti4]=0;
			secur2=1;
			ACKp2[0]=1;
			sum=0;
			for (i = 0; i<210;i++) {
				for (j=0;j<210;j++){
					sum = sum + thesh3[i][j];
				}
			}
			if ( sum == 0 ){
				ACKp2[1]=1;
			}
			write_ret = write(accept_ret, ACKp2 , sizeof(ACKp2));	
		}
		if (thesh5[metavliti3][metavliti4]==client2[metavliti3][metavliti4])
		{
			thesh5[metavliti3][metavliti4]=0;
			secur2=1;
			ACKp2[0]=1;
			sum=0;
			for (i = 0; i<210;i++) {
				for (j=0;j<210;j++){
					sum = sum + thesh5[i][j];
				}
			}
			if ( sum == 0 ){
				ACKp2[1]=1;
			}
			write_ret = write(accept_ret, ACKp2 , sizeof(ACKp2));	
		}
	    if (thesh7[metavliti3][metavliti4]==client2[metavliti3][metavliti4])
		{
			thesh7[metavliti3][metavliti4]=0;
			secur2=1;
			ACKp2[0]=1;
			sum=0;
			for (i = 0; i<210;i++) {
				for (j=0;j<210;j++){
					sum = sum + thesh7[i][j];
				}
			}
			if ( sum == 0 ){
				ACKp2[1]=1;
			}
			write_ret = write(accept_ret, ACKp2 , sizeof(ACKp2));	
		}
		if (thesh9[metavliti3][metavliti4]==client2[metavliti3][metavliti4])
		{
			thesh9[metavliti3][metavliti4]=0;
			secur2=1;
			ACKp2[0]=1;
			sum=0;
			for (i = 0; i<210;i++) {
				for (j=0;j<210;j++){
					sum = sum + thesh9[i][j];
				}
			}
			if ( sum == 0 ){
				ACKp2[1]=1;
			}
			write_ret = write(accept_ret, ACKp2 , sizeof(ACKp2));	
		}
		if ( secur2 == 0 )
		{
			write_ret = write(accept_ret, ACKp2 , sizeof(ACKp2));
		}
		
        }
       
    
}

