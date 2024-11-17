#ifndef FLIGHT_H_INCLUDED
#define FLIGHT_H_INCLUDED
#include <iostream>
#include <string>
#define first(L) L.first
#define next(p) p->next
#define info(p) p->info

using namespace std;

struct jadwalPenerbangan {
  string kode;
  string jenis;
  string tanggal;
  string waktu;
  string asal;
  string tujuan;
  int kapasitas;
};

typedef struct elemenJadwal *adr_jadwalP;

typedef jadwalPenerbangan infotype;

struct elemenJadwal {
  infotype info;
  adr_jadwalP next;
};

struct ListJadwal {
    adr_jadwalP first;
};


void createListJadwal(ListJadwal &L) ;
adr_jadwalP createElemenJadwal (infotype X);
void InsertLastJ(ListJadwal &L, adr_jadwalP P);
void ShowJadwal (ListJadwal L);
void DeleteFirstJ(ListJadwal &L,  adr_jadwalP &P);
adr_jadwalP SearchJ (ListJadwal L, string dari, string ke,  string tanggal);



#endif // FLIGHT_H_INCLUDED
