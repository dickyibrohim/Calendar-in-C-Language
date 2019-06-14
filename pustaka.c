#include "pustaka.h"

int hitung_Thn(int thn)
{
    int jmlhari=0,tahun;
    for(tahun=1900;tahun<thn;tahun++)
    {
            if(tahun%4==0)
              jmlhari+=366;
            else
              jmlhari+=365;
    }
    return(jmlhari);
}

int hitung_Bln(int thn,int bln)
{
    int jmlhari=0,bulan;
    for(bulan=1;bulan<bln;bulan++)
    {
            if(bulan==1||bulan==3||bulan==5||bulan==7||bulan==8||bulan==10||bulan==12)
               jmlhari+=31;
            else if(bulan==4||bulan==6||bulan==9||bulan==11)
               jmlhari+=30;
            else
            {
                if(thn%4==0)
                   jmlhari+=29;
                else
                   jmlhari+=28;
            }
    }
    return(jmlhari);
}

int cek_hari(int jmlhari)
{
     int hari=jmlhari%7;
     return(hari);
}


int hitung_Hari(int bulan,int thn)
{
    int jmlhari=0;
    if(bulan==1||bulan==3||bulan==5||bulan==7||bulan==8||bulan==10||bulan==12)
               jmlhari+=31;
    else if(bulan==4||bulan==6||bulan==9||bulan==11)
               jmlhari+=30;
    else
    {
               if(thn%4==0)
                   jmlhari+=29;
                else
                   jmlhari+=28;
    }
    return(jmlhari);
}

