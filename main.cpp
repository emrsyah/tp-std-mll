#include "flight.h"

int main() {
    ListJadwal L;
    int n;

    createListJadwal(L);

    // Input jumlah jadwal penerbangan
    cout << "Masukkan jumlah jadwal penerbangan: ";
    cin >> n;

    // Input jadwal penerbangan sebanyak n kali
    for (int i = 0; i < n; i++) {
        jadwalPenerbangan X;
        cout << "\nJadwal Penerbangan ke-" << i+1 << endl;
        cout << "Kode: "; cin >> X.kode;
        cout << "Jenis: "; cin >> X.jenis;
        cout << "Tanggal: "; cin >> X.tanggal;
        cout << "Waktu: "; cin >> X.waktu;
        cout << "Asal: "; cin >> X.asal;
        cout << "Tujuan: "; cin >> X.tujuan;
        cout << "Kapasitas: "; cin >> X.kapasitas;

        adr_jadwalP P = createElemenJadwal(X);
        InsertLastJ(L, P);
    }

    // Menampilkan semua jadwal
    cout << "\nDaftar Jadwal Penerbangan:" << endl;
    ShowJadwal(L);

    // Delete jadwal penerbangan pertama
    adr_jadwalP P;
    cout << "\nMenghapus jadwal penerbangan pertama..." << endl;
    DeleteFirstJ(L, P);
    cout << "Jadwal setelah penghapusan:" << endl;
    ShowJadwal(L);

    // Mencari jadwal penerbangan spesifik
    cout << "\nMencari jadwal penerbangan Surabaya-Malang tanggal 9 Desember 2022..." << endl;
    adr_jadwalP found = SearchJ(L, "Surabaya", "Malang", "9-Desember-2022");

    if (found != NULL) {
        cout << "Jadwal ditemukan:" << endl;
        cout << "Kode: " << info(found).kode << " | "
             << "Jenis: " << info(found).jenis << " | "
             << "Tanggal: " << info(found).tanggal << " | "
             << "Waktu: " << info(found).waktu << " | "
             << "Asal: " << info(found).asal << " | "
             << "Tujuan: " << info(found).tujuan << " | "
             << "Kapasitas: " << info(found).kapasitas << endl;
    } else {
        cout << "Jadwal tidak ditemukan." << endl;
    }

    return 0;
}
