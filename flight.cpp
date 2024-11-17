#include "flight.h"

void createListJadwal(ListJadwal &L) {
  first(L) = NULL;
}
adr_jadwalP createElemenJadwal (infotype X){
  adr_jadwalP p = new elemenJadwal;
  info(p) = X;
  next(p) = NULL;
}

void InsertLastJ(ListJadwal &L, adr_jadwalP P){
  if (first(L) == NULL){
    first(L) = P;
    return;
  }
  adr_jadwalP q = first(L);
  while (next(q) != NULL){
    q  = next(q);
  }
  next(q) = P;
}
void ShowJadwal (ListJadwal L){
  adr_jadwalP q = first(L);
  if (q == NULL){
    cout << "List Kosong" << endl;
    return;
  }
  while (q != NULL){
    cout << "Kode: " << info(q).kode << " | "  << "Jenis: " << info(q).jenis << " | "  << "Tanggal: " << info(q).tanggal << " | "  << "Waktu: " << info(q).waktu << " | "  << "Asal: " << info(q).asal << " | "  << "Tujuan: " << info(q).tujuan << " | "  << "Kapasitas: " << info(q).kapasitas<< endl;
    q = next(q);
  }
}

void DeleteFirstJ(ListJadwal &L,  adr_jadwalP &P){
    if (first(L) == NULL){
        cout << "List Kosong" << endl;
        return;
    }
    P = first(L);
   if (next(first(L)) == NULL){
    next(P) = NULL;
    first(L) == NULL;
   } else {
    first(L) = next(P);
    next(P) = NULL;
   }
}

adr_jadwalP SearchJ (ListJadwal L, string dari, string ke,  string tanggal){
    adr_jadwalP q = first(L);
    if (first(L) == NULL){
        cout << "List Kosong" << endl;
        return NULL;
    }
    while (q != NULL){
    if (info(q).asal == dari && info(q).tujuan == ke && info(q).tanggal == tanggal){
        return q;
    }
    q = next(q);
    }
    return NULL;
}
