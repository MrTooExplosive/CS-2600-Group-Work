/** meal.c **/

#include<stdio.h>
#include<string.h>

/* meal description */
void mealDetail(int a,char *b,int c,char *d,int n){
   /* local variables */
   int bn=0,ln=0,dn=0;
   int st=0,tt=0;
  
   /* convert first day time to hours */
   if(strcmp(b,"a.m.")==0){
       st=a;
   }
   if(strcmp(b,"p.m.")==0){
       if(a==12){
           a=0;
       }
       st=12+a;
   }
  
   /* convert last day time to hours */
   if(strcmp(d,"a.m.")==0){
       tt=c;
   }
   if(strcmp(d,"p.m.")==0){
       if(c==12){
           c=0;
       }
       tt=12+c;
   }
  
   /* count each meal for first day */
   if(st<7){
       bn++;
       ln++;
       dn++;
   }
  
   if(st>=7 && st<12){
       ln++;
       dn++;
   }
   if(st>=12 && st<18){
       dn++;
   }
  
  
   /* count each meal for last day */
   if(tt>8 && tt<13){
       bn++;
   }
  
   if(tt>13 && tt<19){
       bn++;
       ln++;
   }
   if(st>=19){
       dn++;      
       ln++;
       bn++;
   }
  
   /* count rest day */
   bn=bn+(n-2);
   ln=ln+(n-2);
   dn=dn+(n-2);
  
   /* display all expence */
   printf("%-15s %-6dPrice $%d\n","Total Breakbast",bn,bn*9);
   printf("%-15s %-6dPrice $%d\n","Total Lunch",ln,bn*12);
   printf("%-15s %-6dPrice $%d\n","Total Dinner",dn,bn*16);
   printf("--------------------------------------\n");
   printf("%-27s $%d\n","Total Expence",(bn*9+ln*12+dn*16));
  
  
}

void getRoundTripAirfare(){
    printf("Any round-trip airfare? (Y/N): ");
    
}