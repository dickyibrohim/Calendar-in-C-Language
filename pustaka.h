#ifndef PUSTAKA_H_INCLUDED
#define PUSTAKA_H_INCLUDED
#include<stdio.h>
#include<stdlib.h>
#include "string.h"
typedef struct
{
    int date;
    int month;
    int year;

}tanggal;
typedef struct
{
    char nama[50];
}namanya;
typedef struct
{	char namaKegiatan[50];
    int nomorkegiatan;
    tanggal tanggalnya;
    char waktu[10];
    char tempat[20];
    int nOrang;
    namanya orang[50];
    char cari[50];
    int terhapus; //untuk menyimpan status data. bernilai 0 jika masih ada, dan 1 jika sdh dihapus


}data;	//array of struct dengan  elemen

data datanya[100];
data tempt;

char hapus_agenda[50];
int themonth;
int theyear;

int hitung_Thn(int thn);
int hitung_Bln(int thn,int bln);
int hitung_Hari(int bln,int thn);
int cek_hari(int jmlhari);
#endif // PUSTAKA_H_INCLUDED

