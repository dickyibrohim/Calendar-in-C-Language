#include "pustaka.h"
#include <string.h>
// DICKY IBROHIM & KEVIN

int main()
{   int pilih, i, j, k, loop1, ketemu, hapus,jmlhari,jumlah_hari,a,bulan,x,y,temp,maks,angka;
    int jumlahkegiatan=0;
    int dataketemu;
    char pilihan,pilihan2;

    menu:
    printf("\n\n=========================================================");
    printf("\n <<                    MENU PILIHAN                   >>");
    printf("\n=========================================================");
    printf("\n\t1. Tambah Agenda");
    printf("\n\t2. Hapus Kegiatan");
    printf("\n\t3. Tampilkan Kegiatan");
    printf("\n\t4. Cari Kegiatan");
    printf("\n\t5. Urutkan Kegiatan");
    printf("\n\t6. Selesai");
    printf("\n\n=========================================================");
    printf("\nPilih menu = "); scanf("%d",&pilih);
    printf("\n\n---------------------------------------------------------\n");
    if (pilih==1)
    {
        printf("\n=========================================================");
        printf("\n 1.                    TAMBAH AGENDA                     ");
        printf("\n=========================================================");
        tambahlagi:
        printf("\nKegiatan                                      = ");
        fflush(stdin);
        gets(datanya[jumlahkegiatan].namaKegiatan);
        printf("\tTanggal (Day<spasi>Month<spasi>Year) = ");
        scanf("%d %d %d", &datanya[jumlahkegiatan].tanggalnya.date,&datanya[jumlahkegiatan].tanggalnya.month,&datanya[jumlahkegiatan].tanggalnya.year);
        printf("\tWaktu (HH:MM-HH:MM)                  = ");
        scanf("%s",&datanya[jumlahkegiatan].waktu);
        printf("\tBanyaknya orang                      = ",i+1);
        scanf("%d",&datanya[jumlahkegiatan].nOrang);
        for(j=0;j<datanya[jumlahkegiatan].nOrang;j++)
        {
            printf("\n\t  *  Masukkan nama orang[%d]         = ",j+1);
            fflush(stdin);
            gets(datanya[jumlahkegiatan].orang[j].nama);
        }

        jumlahkegiatan++;
        datanya[i].terhapus==0;
        printf("\nTambah lagi kegiatan  ? (Y/y atau T/t)");
        scanf("%s",&pilihan2);
        if(pilihan2=='Y'||pilihan2=='y')
        {
            goto tambahlagi;
        }
        else if(pilihan2=='T'||pilihan2=='t')
        {
            goto menu;
        }
    }

    else if(pilih==2)
    {
            printf("\n=========================================================");
            printf("\n  2.                  HAPUS KEGIATAN                     ");
            printf("\n=========================================================");
        char hapuskegiatan [100][100];
    int loop1;
    printf ("\nNama kegiatan yang dihapus: ");
    fflush(stdin);
        gets (hapuskegiatan[0]);
        for (loop1=0;loop1<jumlahkegiatan;loop1++)
        {
            if (strcmp (hapuskegiatan[0], datanya[loop1].namaKegiatan) == 0 ) // JIKA SAMA, MEMBANDINGKAN STRING
            {
                datanya[loop1].terhapus==1;
                printf ("\n-------------------------------------------------------\n");
                printf ("*** Data %s terhapus", hapuskegiatan);
                printf ("\n-------------------------------------------------------\n");
                datanya[loop1].terhapus=1;
                break;
            }
            else
            {
            printf ("\n-------------------------------------------------------\n");
                printf ("tidak ada Data yang Anda ingin hapus");
            printf ("\n-------------------------------------------------------\n");

                break;
            }
        }
            printf("\n\n>> Klik ENTER untuk kembali ke menu");
            getch();
            goto menu;
    }
    else if(pilih==3)
    {
        if(jumlahkegiatan==0)
        {
            printf("\n=========================================================");
            printf("\n 3.              TAMPILKAN KEGIATAN                     ");
            printf("\n=========================================================");
            printf("\n\nBELUM ADA DAFTAR KEGIATAN\n");
            printf("\n\n>> Klik ENTER untuk kembali ke menu");
            getch();
            ///system("cls"); ///Bersihkan layar;
            goto menu;
        }
        else
        {
            printf("\n=========================================================");
            printf("\n 3.                 TAMPILKAN KEGIATAN                 ");
            printf("\n=========================================================");
            printf("\n\nDAFTAR KEGIATAN"); //menampilkan data
            for(i=0;i<jumlahkegiatan;i++)
            {   if (datanya[i].terhapus==0)
            {

                ///if (datanya[i].terhapus == 0||datanya[i].terhapus==1)
                    printf("\nKegiatan            = %s",datanya[i].namaKegiatan);
                    printf("\nTanggal (d-m-year)  = %d-%d-%d",datanya[i].tanggalnya.date,datanya[i].tanggalnya.month,datanya[i].tanggalnya.year);
                    printf("\nWaktu (hh:mm-hh:mm) = %s",datanya[i].waktu);
                    for(j=0;j<datanya[i].nOrang;j++)
                    {
                     printf("\nOrang[%d]            = %s",j+1,datanya[i].orang[j].nama);
                    }
            }
            }
            printf("\n\n>> Klik ENTER untuk kembali ke menu");
            getch();
            ///system("cls"); /// Bersihkan Layar
            goto menu;
        }
    }
    else if(pilih==4)
    {
        if(jumlahkegiatan==0)
        {
            printf("\n=========================================================");
            printf("\n 4.                   MENCARI KEGIATAN                   ");
            printf("\n=========================================================");
            printf("\n\nBelum ada daftar kegiatan\n");
            printf("\n\n>> Klik ENTER untuk kembali ke menu");
            getch();
            ///system("cls"); /// Bersihkan Layar
            goto menu;
        }
        else
        {
            printf("\n=========================================================");
            printf("\n 4.                    MENCARI KEGIATAN                  ");
            printf("\n=========================================================");
            printf("\nMasukkan Bulan<SPASI>Tahun Kegiatan = ");
            scanf("%d %d",&themonth,&theyear);
            ketemu =0; //awal pencarian data
            dataketemu=0;
            for(i=0;i<jumlahkegiatan;i++)
            {   if (datanya[i].terhapus==0)
            {
                if ((datanya[i].tanggalnya.month==themonth)&&(datanya[i].tanggalnya.year==theyear))
                {
                    ketemu=1; dataketemu++;
                }
            }

            }
        if (ketemu == 1)
        {
            printf("\nData kegiatan ketemu");

            for(i=0;i<dataketemu;i++)
            { if (datanya[i].terhapus!=1)
            {


                printf("\nKegiatan = %s",datanya[i].namaKegiatan);
                printf("\nTanggal (d-m-year) = %d-%d-%d",datanya[i].tanggalnya.date,datanya[i].tanggalnya.month,datanya[i].tanggalnya.year);
                printf("\nWaktu (hh:mm-hh:mm) = %s",datanya[i].waktu);
                for(j=0;j<datanya[i].nOrang;j++)
                {
                    printf("\nOrang[%d] = %s\n",j+1,datanya[i].orang[j].nama);
                }
             }

            }
            printf("\n\n>> Klik ENTER untuk kembali ke menu");
            getch();
            goto menu;
        }
        else
        {
            printf("\nData kegiatan tidak ditemukan\n");
            printf("\n\n>> Klik ENTER untuk kembali ke menu");
            getch();
            goto menu;
        }
        }

    }
    else if(pilih==5)
    {
        if(jumlahkegiatan==0)
        {
            printf("\n=========================================================");
            printf("\n 5.                   SORTING KEGIATAN                   ");
            printf("\n=========================================================");
            printf("\n\nTidak ada daftar kegiatan\n");
            printf("\n\n>> Klik ENTER untuk kembali ke menu");
            getch();
            goto menu;
        }
        else
        {
            printf("\n=========================================================");
            printf("\n 5.                   SORTING KEGIATAN                   ");
            printf("\n=========================================================");
            ///if (datanya[i].terhapus==0||datanya[i].terhapus==1)
            {
                for(x=0;x<jumlahkegiatan;x++)
            {
                for(y=x;y<jumlahkegiatan;y++)
                {
                    if(datanya[x].tanggalnya.year>datanya[y].tanggalnya.year)
                    {
                        tempt=datanya[x];
                        datanya[x]=datanya[y];
                        datanya[y]=tempt;
                    }
                }
            }
            for(x=0;x<jumlahkegiatan;x++)
            {
                for(y=x;y<jumlahkegiatan;y++)
                {
                    if(datanya[x].tanggalnya.month>datanya[y].tanggalnya.month)
                    {
                        tempt=datanya[x];
                        datanya[x]=datanya[y];
                        datanya[y]=tempt;
                    }
                }
            }
            for(x=0;x<jumlahkegiatan;x++)
            {
                for(y=x;y<jumlahkegiatan;y++)
                {
                    if(datanya[x].tanggalnya.date>datanya[y].tanggalnya.date)
                    {
                        tempt=datanya[x];
                        datanya[x]=datanya[y];
                        datanya[y]=tempt;
                    }
                }
            }
            printf("\n\nHasil sorting berdasarkan d-m-year:");
            for(x=0;x<jumlahkegiatan;x++)
            {
                 if (datanya[i].terhapus==0)
                 {
                printf("\n\n->> Urutan kegiatan ke-%d",x+1);
                printf("\n=========================================================");
                printf("\nKegiatan             = %s",datanya[x].namaKegiatan);
                printf("\nTanggal (d-m-year)   = %d-%d-%d",datanya[x].tanggalnya.date,datanya[x].tanggalnya.month,datanya[x].tanggalnya.year);
                printf("\nWaktu (hh:mm-hh:mm)  = %s",datanya[x].waktu);
                for(j=0;j<datanya[x].nOrang;j++)
                {
                  printf("\nOrang[%d]            = %s",j+1,datanya[x].orang[j].nama);
                }

                 }
                 else
                 {
                     printf ("\nTidak ada data\n");
                 }
            }
            printf("\n\n>> Klik ENTER untuk kembali ke menu");
            getch();
            ///system("cls"); /// Bersihkan layar;
            goto menu;
            }
        }
    }
    else if(pilih==6)
    {
        printf("\n=========================================================");
        printf("\n  ----                    S E L E S A I              ----");
        printf("\n=========================================================");
    }
    return 0;
}



