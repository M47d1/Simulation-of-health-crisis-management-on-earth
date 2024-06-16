#include <iostream>
using namespace std;

const int MAX_PASIEN = 5;
const int MAX_HP = 100;

struct Entity {
    bool pasien;
    int day;
    bool virus;
    int* hp;
    int num_pasien;
    bool obat_used;
    string names[MAX_PASIEN];
};
Entity earth;

void display() {
    cout << " _   ________  _____  _____  _____  _____   \n";
    cout << "| | / /| ___ \\|_   _|/  ___||_   _|/  ___|  \n";
    cout << "| |/ / | |_/ /  | |  \\ `--.   | |  \\ `--.   \n";
    cout << "|    \\ |    /   | |   `--. \\  | |   `--. \\  \n";
    cout << "| |\\  \\| |\\ \\  _| |_ /\\__/ / _| |_ /\\__/ /  \n";
    cout << "\\_| \\_/\\_| \\_| \\___/ \\____/  \\___/ \\____/   \n";
    cout << "______  _____  ______  _   _ ___  ___ _____\n";
    cout << "|  _  \\|_   _| | ___ \\| | | ||  \\/  ||_   _|\n";
    cout << "| | | |  | |   | |_/ /| | | || .  . |  | |\n";
    cout << "| | | |  | |   | ___ \\| | | || |\\/| |  | |\n";
    cout << "| |/ /  _| |_  | |_/ /| |_| || |  | | _| |_\n";
    cout << "|___/   \\___/  \\____/  \\___/ \\_|  |_/ \\___/\n";
    cout << endl;
    cout << "Press any key to continue........................." << endl;
}

void narasi() {
    cout << "=====================================\n";
    cout << "- - - - - - - -_____- - - - - - - \n"
                 "- - - - - ,-:` \\;',`'-, - - - - - - \n"
                 "- - - - -.'-;_,;  ':-;_,'.- - - - - \n"
                 "- - - - /;   '/    ,  _`.-\\- - - - - \n"
                 "- - - -| '`. (`     /` ` \\`|- - - - - \n"
                 "- - - -|:.  `\\`-.   \\_   / |- - - - - \n"
                 "- - - -|     (   `,  .`\\ ;'|- - - - - \n"
                 "- - - - \\     | .'     `-'/- - - - - \n"
                 "- - - - -`.   ;/        .'- - - - - \n"
                 "- - - - - -`'-._____.'- - - - - - -\n";
    cout << "=====================================\n";
    cout << "Bumi yang dulu damai dan harmonis kini terguncang oleh serangan\n"
                 "virus mematikan. Dalam kepanikan global ini, Anda, seorang\n"
                 "perawat berbakat, diberi tugas krusial: merawat lima pasien\n"
                 "penting yang memegang kunci untuk menyelamatkan dunia.\n"
                 "\n"
                 "1. Dr. Majdi - ilmuwan yang sedang mengembangkan vaksin.\n"
                 "   Tanpa perawatannya, riset vaksin bisa terhenti.\n"
                 "2. Jenderal Tegar - pemimpin militer yang mengoordinasikan\n"
                 "   upaya pengendalian virus. Kehadirannya penting untuk\n"
                 "   menjaga ketertiban dan keamanan.\n"
                 "3. Presiden Aqsha - pemimpin negara yang memberikan arahan\n"
                 "   dan harapan kepada rakyat. Stabilitas pemerintahan\n"
                 "   bergantung padanya.\n"
                 "4. Mentri Faza - seorang mentri yang berpegang teguh arahan\n"
                 "   Presiden jika jabatan tersebut diserahkan ke dirinya.\n"
                 "5. Prof. Ayu - penemu yang membantu Dr. Majdi dalam mencari\n"
                 "   obat vaksin yang berguna sebagai penyelamat bumi ini.\n"
                 "\n"
                 "Tugas Anda adalah memastikan 5 pasien tersebut tetap sehat\n"
                 "dan mampu melanjutkan misi mereka.";
}

void pause() {
    cin.get();
    cin.fail();
    cin.ignore();
}

void allocateMemory() {
    earth.hp = new int[MAX_PASIEN];
}

void deallocateMemory() {
    delete[] earth.hp;
}

void randomizeHP() {
    int base_hp[MAX_PASIEN] = {70, 50, 30, 30, 35}; // merandom Hp
    for (int i = 0; i < MAX_PASIEN; i++) {
        int rand_index = (i + 1) % MAX_PASIEN; // Using a fixed permutation instead of random
        swap(base_hp[i], base_hp[rand_index]);
    }
    for (int i = 0; i < MAX_PASIEN; i++) {
        earth.hp[i] = base_hp[i];
    }
}

void tampilkanPasien() {
    if (earth.num_pasien == 0) {
        cout << "Semua pasien telah mati." << endl;
        return;
    }
    cout<<"========================"<<endl;
    cout << "Status pasien hari ke-" << earth.day << ":" << endl;
    cout<<"========================"<<endl;
    for (int i = 0; i < earth.num_pasien; i++) { // sorting + menampilkan pasien
        for (int i = 0; i < earth.num_pasien - 1; i++) {
            for (int j = 0; j < earth.num_pasien - i - 1; j++) {
                if (earth.hp[j] > earth.hp[j + 1]) {
                    swap(earth.hp[j], earth.hp[j + 1]);
                    swap(earth.names[j], earth.names[j + 1]);
                }
            }
        }
        cout << "Pasien " << earth.names[i] << ": HP = " << earth.hp[i] << endl;
    }
}

void tampilkanKondisiBumi() {
    if (earth.num_pasien == 0) {
        cout << "Semua pasien telah mati." << endl;
        return;
    }
    tampilkanPasien();
    if (earth.day == 1) {
        cout<<"========================"<<endl;
        cout<< "  Bumi Baik Baik Saja " << endl;
        cout<<"========================"<<endl;
    } else if (earth.day == 2 || earth.day == 3) {
        cout<<"========================"<<endl;
        cout << " Bumi Terkena Virus " << endl;
        cout<<"========================"<<endl;
    } else if (earth.day >= 4) {
        cout<<"========================"<<endl;
        cout << "Cepat Sembuhkan Bumi" << endl;
        cout<<"========================"<<endl;
    }
}

void kondisi() {
    if (earth.day == 2) {
        earth.virus = true;
        randomizeHP();
    } else if (earth.day >= 4) {
        earth.pasien = false;
    }
}

void berikanObat() {
    if (earth.obat_used) {
        cout << "Obat sudah digunakan hari ini. Tunggu hari berikutnya." << endl;
        return;
    }
    if (earth.num_pasien == 0) {
        cout << "Tidak ada pasien yang bisa diberi obat." << endl;
        return;
    }
    string pasien_name;
    cout<<"===========================\n";
    cout << "Pilih pasien untuk diberi obat\n";
    cout<<"===========================\n";
    cout<<"- Dokter\n";
    cout<<"- Jendral\n";
    cout<<"- Presiden\n";
    cout<<"- Mentri\n";
    cout<<"- Professor\n";
    cout<<"Masukkan nama pasien yang akan diobati : ";
    cin >> pasien_name;
    bool valid_choice = false;
    for (int i = 0; i < earth.num_pasien; i++) {
        if (earth.names[i] == pasien_name) {
            int& hp = earth.hp[i];
            if (hp < MAX_HP) {
                hp = min(hp + 35, MAX_HP);
                cout << "Pasien " << pasien_name << " telah diberikan obat. HP sekarang = " << hp << endl;
            } else {
                cout << "Pasien " << pasien_name << " sudah memiliki HP maksimum." << endl;
            }
            earth.obat_used = true;
            valid_choice = true;
            break;
        }
    }
    if (!valid_choice) {
        cout << "Pasien tidak valid." << endl;
    }
}

void hapusPasien(int index) {
    for (int i = index; i < earth.num_pasien - 1; i++) {
        earth.hp[i] = earth.hp[i + 1];
        earth.names[i] = earth.names[i + 1];
    }
    earth.num_pasien--;
}

void day() {
    earth.day++;
    earth.obat_used = false;
    for (int i = 0; i < earth.num_pasien; i++) {
        if (earth.hp[i] > 0) {
            earth.hp[i] -= 20;
            if (earth.hp[i] <= 0) {
                cout << "Pasien " << earth.names[i] << " telah mati." << endl;
                hapusPasien(i);
                i--;
            }
        }
    }
    kondisi();
}

void day_one() {
    earth.day = 1;
    earth.pasien = true;
    earth.virus = false;
    earth.obat_used = false;
    earth.num_pasien = MAX_PASIEN;
    allocateMemory();
    string default_names[MAX_PASIEN] = {"Dokter", "Jendral", "Presiden", "Mentri", "Professor"};
    for (int i = 0; i < MAX_PASIEN; i++) {
        earth.hp[i] = MAX_HP;
        earth.names[i] = default_names[i];
    }
}

bool checkWinCondition() {
    return earth.num_pasien >= 2;
}
bool checklosecondition() {
    return earth.num_pasien < 2;
}

int main() {
    int choose;
    earth.day = 0;
    earth.pasien = true;
    earth.virus = false;

    day_one();
    system("cls");
    display();
    cin.get();
    system("cls");
    narasi();
    cin.get();
    system("cls");
    while (earth.day <= 10) {
        cout << "===============" << endl;
        cout << "   Hari ke-" << earth.day << endl;
        cout << "===============" << endl;
        cout << "1. Lihat kondisi pasien" << endl;
        cout << "2. Hari selanjutnya" << endl;
        cout << "3. Berikan obat" << endl;
        cout << "Masukkan Pilihan: ";
        cin >> choose;
        system("cls");
        switch (choose) {
            case 1:
                tampilkanKondisiBumi();
                pause();
                system("cls");
                break;
            case 2:
                day();
                break;
            case 3:
                berikanObat();
                pause();
                system("cls");
                break;
            default:
                cout << "Pilihan tidak valid. Silakan pilih lagi." << endl;
                break;
        }
        if (earth.day >= 10) {
            if (checkWinCondition()) {
                cout << "Selamat! anda menang karena telah menyelamatkan minimal 2 pasien" << endl;
            }else{
                cout << "Semua Pasien mati anda kalah!" << endl;
            }
            break;
        }
        if (checklosecondition()){
            cout<<"Anda Kalah! Karena anda tidak bisa menyelamatkan minimal 2 pasien"<<endl;
            pause();
            exit(0);
        }
        if (earth.num_pasien == 0) {
            cout << "Semua pasien telah mati. Permainan selesai." << endl;
            break;
        }
    }

    deallocateMemory();
    return 0;
}
