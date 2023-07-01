#include <iostream>
#include <string>
using namespace std;

struct Obat {
    string nama;
    int harga;
};

void infoPasien(int kondisi) {
    switch (kondisi) {
        case 1:
            cout << "Kondisi pasien: Ringan" << endl;
            break;
        case 2:
            cout << "Kondisi pasien: Sedang" << endl;
            break;
        case 3:
            cout << "Kondisi pasien: Berat" << endl;
            break;
        default:
            cout << "Kondisi pasien: Tidak diketahui" << endl;
            break;
    }
}

void infoObat(const Obat& obat) {
    cout << "Obat: " << obat.nama << endl;
    cout << "Harga: Rp " << obat.harga << endl;
}

int main() {
    int kondisi;
    string keluhan;

    cout << "Masukkan keluhan pasien: ";
    getline(cin, keluhan);

    if (keluhan == "batuk + pilek") {
        Obat obat = {"Dexamethason", 27000};
        infoPasien(1);
        infoObat(obat);
    } else if (keluhan == "deman + batuk + sakit lambung") {
        Obat obat1 = {"Omeprazol", 5000};
        Obat obat2 = {"Dexamethason", 27000};
        Obat obat3 = {"Remdesivir", 55000};
        infoPasien(2);
        infoObat(obat1);
        infoObat(obat2);
        infoObat(obat3);
    } else if (keluhan == "sesak nafas + demam + susah menelan") {
        Obat obat = {"Dexamethason", 27000};
        infoPasien(3);
        infoObat(obat);
        cout << "Segera pergi ke rumah sakit!" << endl;
    } else {
        cout << "Keluhan tidak dikenali." << endl;
    }

    return 0;
}
