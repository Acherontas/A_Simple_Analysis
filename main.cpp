/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Aionnio
 *
 * Created on 9 Αυγούστου 2023, 3:50 μ.μ.
 */

#include <cstdlib>
#include <stdio.h>
#include <iostream>
#include <unistd.h>
#include <chrono>
#include <atomic>
#include <thread>
#include <climits>
#include <limits>
#include <iomanip>
#include <vector>
#include <sstream>
#include <list>
#include <cstring>
#include <fstream>
#include <string>
#include <locale>
#include<math.h>

using namespace std;

/*
 * 
 */
int cdi;
int fl;
int m;

int pre;
int bypss;
int bypssi;
int cnar;
 long long int cd( int n){   
     //cout<<"inserting for adding digits " << mk <<"\n"; 
    m=n%10;  
    cdi+=m;
    fl=-1;
    if(n/10==0){
        fl=1;
               if(fl==1){
                   //cout<<"fl is " << fl << " with cdi " << cdi <<"\n"; 
               } //cdi=0;            
               return cdi;   //return 1;
    }
    else
    {
        cd(n/10);  //return 1 + cd(n/10);
    }   
    return cdi;
}

 int cdis(int nn)
{
    cdi=0;
         int cdl=cd(nn); 
         if(cdl>9){
             cdi=0;
             while(cdl>9){cdi=0;cdl=cd(cdl);
             if(cdl<=9){break;}
             }
         } 
         return cdl;   
}
 
int creat_th(int psize){
    int fnumber;
    if(bypssi==1){
    cout<<"creating size of " << psize <<"\n";}
  //  string m; int cnt=1;
  //  m+=to_string(fnumber);
   // for(int i=1;i<psize;i++)
   // {
   //     m+=to_string(0);
   // }
   // cout<<"the string is " << m <<"\n";
   // cout<<"going to int it\n";  
    fnumber=pow(10,psize);
   // cout<<"final number " << fnumber <<"\n";
    return fnumber;
}
//double kr;
//double fna;
int gen_number(int numb,int numbi){
    cout<<"\n";
   long double rst;
   // rst=(long double)mambi/(long double)3;
    rst=(long double)numb/(long double)numbi;
    std::stringstream mb;
    mb << std::fixed << std::setprecision(pre) << rst  ;
    if(bypssi==1){
   cout<<"result is from rst instant " << setprecision(pre) << rst <<"\n";}
  //  cout<<"result is from stream mb " << mb.str() << "\n";  
    rst=stod(mb.str());  
    if(bypssi==1){
    cout<<"result is from rst after mb " <<  rst <<" and \n"; 
    cout<<"pre as " << std::setprecision(pre) <<rst << " and " ;}
    //kr=kr+rst;
   // cout<<"kr is " <<  setprecision(9) << kr <<"\n";
//    std::stringstream mbi;
//    mbi<<std::fixed<<std::setprecision(pre)<<kr;
//    fna=stof(mbi.str());
   // cout<<"da a" << fna<<"\n";
  //  fna=stod(mbi.str());
//    cout<<"da ab " << fna <<"\n";
//    fna=stold(mbi.str());
//    cout<<"da abc " << fna <<"\n";
//    fna=stoll(mbi.str());
//    cout<<"da abcd " << fna <<"\n";      
    double rstt;
    rstt=rst*100;
   // cout<<"result for double " << rstt <<"\n";
    int r;
    r=rstt;  
    if(bypssi==1){
    cout<<"result for int is " << r<<"\n";}
    cout<<"\n";
    return r;
}
int *ptr;
int *kl; 
int arr[20];
int zr[20];
int lk;
int str_to_int(string st)
{
    char k;
  ptr = (int*) malloc(sizeof(int)*st.size());  
  for(int i=0;i<=st.size()-1;i++) 
  {    
      
      k=st.at(i);
      lk=stoi(&k);
   //   cout<<k << " and lk " << lk <<"\n";
     *(ptr+i)=stoi(&st.at(i)); 
     arr[i]=lk;
     // ptr[i] and *(ptr+i) can be used interchangeably
   //  cout<<i << " " << ptr << " " << *ptr << " " << &ptr << " " << &ptr[i] << " "  << *(ptr+i) << " " << ptr[i] << "\n";
    // cout<<"STS " << &st.at(i) << " " << st.at(i) << " " << &st <<"\n";
     m+=1;
  } 
//free(ptr);  
     return *ptr;
}

int main(int argc, char** argv) {
    cout<<"first is number, second is the number tis diairesis , tritos einai to precision ton dekadikon [default pre == 9] \n";
    cout<<"tetartos gia analisi apotelesmaton vimaton , pemptos gia emfanisi apotelesmaton dekadikon [1 :on 2:off] \n";
    cout<<" \n";
    cout<<"voyeristic behaviours and others have fun xD\n";
    int x=0; 
 //   int apotl_per[17];
    string nmb;
//    cout<<"enter the number u want \n";
//    cin>>nmb;
    nmb=argv[1];
    int mambi=str_to_int(nmb);
   // cout<<"you enter " << mambi <<" with sizeo of" << m <<"\n";
    int klmo=m;
//    int m;
//    cout<<"enter maximum number size eg 7 numbers\n";
//    cin>>m;
//    m+=1;
//    int numb;
//    for(int i=1;i<=m-1;i++)
//    {
//        cout<<"enter number\n";
//        cin>>numb;
//        arr[i]=numb;              
//    }
//    int mambi;
//    cout<<"enter the number again full  \n";
//    cin>>mambi;
    cout<<"\n";
    cout<<"|--------------------------------------------------------------------------------------------------------------------------------------|\n";
    for(int i=0;i<=m-1;i++){cout<<"| " << i << " Number " << arr[i] <<" | ";}
    cout<<"\n";
    cout<<"|--------------------------------------------------------------------------------------------------------------------------------------|\n";
     int withd;
//    cout<<"enter number to diairesi\n";
//    cin>>withd;  
     withd=stoi(argv[2]);
     pre=stoi(argv[3]);
     bypss=stoi(argv[4]);
     bypssi=stoi(argv[5]);
    cout<<"\n";
    int mg=gen_number(mambi,withd);
    double kmg=(long double)mg/(long double)100;
    cdi=0;
     int cdl=cd(mg); 
     int mld;
         if(cdl>9){
             cdi=0;
             mld=cdl;
             while(mld>9){cdi=0;mld=cd(mld);
             if(mld<=9){break;}
             }
         }
    cout<<"--> With " << mambi << " and size of " << m << " and precision of " << pre <<"\n";
    cout<<"The Result is " << mg << " and " <<   setprecision(pre) << kmg << " and sum of " << cdl << " with " << mld <<" \n";   
    int order_one,order_two,order_three;
    int r_one,r_two;   
    order_one=cdl;   
    int lm;
    //lm=m-2;
    lm=klmo-1;
//    kr=0;
    int rscdl=0;
    double rdd;
    double mgi;
    double mgki;
    double mki;
    int mggi=0;
    cout<<"\n";
    cout<<"-------------------------->      Entering the loop \n";
    if(bypss==1){
    cout<<"with lm as " << lm << " and m " << m << "\n";}
    cout<<"\n";
    int zk=klmo-1;
    for(int i=0;i<=zk;i++)
    {  if(bypss==1){
        cout<<"entering with lm " << lm <<" ";}
        int lo=creat_th(lm);    
        if(bypss==1){cout<< i << " With selected number " << arr[i] << " and " << lm <<  " created number " << lo <<" ";}
        int mo=arr[i]*lo;
        int mg=gen_number(mo,withd);
        mgi=(long double)mg/(long double)10;
        mgki=(long double)mg/(long double)100;
        rdd=rdd+mgi;   mggi=mggi+mg; mki=mki+mgki;
        if(bypss==1){
        cout<<"---------------->\n";
        cout<<"Semi Result is : " << mg <<" with float[10] : "  <<   setprecision(pre) << mgi<<" " <<" sum of float[10] : " <<   setprecision(pre) << rdd <<"\n";        
        cout<<"and float[100] : " <<   setprecision(pre) << mgki << " and sum of float[100] : " <<   setprecision(pre) << mki <<"\n" ;
        cout<<"sum of ints : " <<   setprecision(pre) << mggi << " ";        
        std::this_thread::sleep_for(std::chrono::milliseconds(300));     
        cout<<"<----------------\n";}
        int kl=cdis(mg);
        cout<<"with Result one : " << kl <<"\n";
        rscdl=rscdl+kl;
        //cout<<"the number is " << lo <<"\n";
        zr[i]=lm;
        lm-=1;
        cout<<"\n";
    }
    cout<<"\n";
    cout<<"                               Exiting the loop      <--------------------------\n";
    cout<<"\n";
   // cout<<"Mggi " << mggi <<"\n";
    cdi=0;
    int cdll=cd(mggi); 
    int mlld;
         if(cdll>9){
             cdi=0;
             mlld=cdll;
             while(mlld>9){cdi=0;mlld=cd(mlld);
             if(mlld<=9){break;}
             }
         }      
    cout<<"Sub-Part " <<   setprecision(pre) << rdd << " with full int as " << mggi << " with sum of digits " << cdll << " and full sum " << mlld << " \n";// <<" with sum of digits " << k <<"\n";   
    order_two=cdll;  
    cdi=0;
    int cdlo=cd(rscdl); 
    int mldo;
        if(cdlo>9){
             cdi=0;
             mldo=cdlo;
             while(mldo>9){cdi=0;mldo=cd(mldo);
             if(mldo<=9){break;}
             }
        }
    cout<<"Sub-Part 2 of ones "<< rscdl << " with " << cdlo << " and " << mldo <<" \n"; 
    order_three=rscdl;  
    int r_three,rf;  
    r_one=order_one-order_three;
    if(r_one<0){r_one=order_three-order_one;}
    r_two=order_three-order_two;
    if(r_two<0){r_two=order_two-order_three;}
    r_three=order_two-order_one;
    if(r_three<0){r_three=order_one-order_two;}
    rf=r_one-r_two;
    if(rf<0){rf=r_two-r_one;}
    cout<<"\n";
    cout<<"**************************RESULT****************************************************\n";
    cout<<"  |For number " << mambi << " with " << withd << " and size " << klmo << "|\n";
    cout<<"  |-> The Result is " << mg << " and " <<   setprecision(9) << kmg << " and sum of " << cdl << " with " << mld <<"|\n";
    cout<<"  |--------------------------------------------------------------|\n";
    double liop=kmg-mki;
    int lipo=mg-mggi;
    cout<<"  |with " <<   setprecision(pre) << kmg << " and sum of float[100] : " <<   setprecision(pre) <<  mki << " or (" << mggi << ")|\n"; 
    cout<<"  |and sum of float[10] | " <<setprecision(pre) << rdd <<"-------|\n"; 
    cout<<"  |--------------------------------------------------------------|\n";
    cout<<"  |---------and diafora :=~ " << liop << " or :=~ " << lipo <<"----------------|\n";
    cout<<"  |----------------------with------------------------------------|\n";
    cout<<"  |order one = " << order_one << "\n";
    cout<<"  |--------------------------------------------------------------|\n";
    cout<<"  |order two = " << order_two << "\n";
    cout<<"  |--------------------------------------------------------------|\n";
    cout<<"  |order_three  = " << order_three <<"\n";
    cout<<"  |-----------------------and------------------------------------|\n";
    cout<<"  | r one | = " << r_one << "\n";
    cout<<"  |--------------------------------------------------------------|\n";
    cout<<"  |r_two = " << r_two << "\n";
    cout<<"  |--------------------------------------------------------------|\n";
    cout<<"  |and r_three = "<< r_three << "\n";
    cout<<"  |--------------------------------------------------------------|\n";
    cout<<"  |rf = " << rf <<"\n";
    cout<<"  |--------------------------------------------------------------|\n";
    int rfi=rf;
    int rkone=r_one;
    cout<<"  |--------------------for summaries-----------------------------|\n";
    order_one=mld;order_two=mlld;order_three=cdlo;
    r_one=order_one-order_three;
    if(r_one<0){r_one=order_three-order_one;}
    r_two=order_three-order_two;
    if(r_two<0){r_two=order_two-order_three;}
    r_three=order_two-order_one;
    if(r_three<0){r_three=order_one-order_two;}
    rf;
    rf=r_one-r_two;
    if(rf<0){rf=r_two-r_one;}
    cout<<"  |--------------------------------------------------------------|\n";
    cout<<"  |order one = " << order_one << "\n";
    cout<<"  |--------------------------------------------------------------|\n";
    cout<<"  |order two = " << order_two << "\n";
    cout<<"  |--------------------------------------------------------------|\n";
    cout<<"  |order_three = " << order_three <<"\n";
    cout<<"  |--------------------------------------------------------------|\n";
    cout<<"  | r one | = " << r_one << "\n";
    cout<<"  |--------------------------------------------------------------|\n";
    cout<<"  |r_two = " << r_two << "\n";
    cout<<"  |--------------------------------------------------------------|\n";
    cout<<"  |and r_three = "<< r_three << "\n";
    cout<<"  |--------------------------------------------------------------|\n";
    cout<<"  |rf = " << rf <<"\n";
    cout<<"  |--------------------------------------------------------------|\n";
    cout<<"  |----------------------end of summaries------------------------|\n";
    cout<<"  |--------------------------------------------------------------|\n";
    cout<<"  |Sinola : " << liop <<  "-----------------------------------------|\n";
    cout<<"  |-------------------------- r_one " <<rkone <<"---------------------------|\n";
    cout<<"  |--------------------------------------------------------------|\n";
    cout<<"  |-------------------------- rf_one " <<rfi <<"--------------------------|\n";
    cout<<"  |--------------------------------------------------------------|\n";
    cout<<"  |-------------------------- rf_last " <<rf <<"--------------------------|\n";
    cout<<"  |______________________________________________________________|\n";
    cout<<"*************************END OF RESULT********************************************\n";
    cout<<"  |------------use analytics for more information----------------|\n";
    return 0;
}

