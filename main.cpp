#include "mylib.h"
#include "funkc.h"


int main() {
    vector<Studentas> studentai, minksti;
    list<Studentas> student, minkst;
    int n, pazsk, stud; //n - stud skaicius , pazsk - pazymiu sk faile
    string m, pavadinimas;

    cout << "iveskite ('f'), jei norite nuskaityti turimus failus, \niveskite bet kokia kita raide, jei norite sugeneruoti naujus failus: "; cin >> m;

    if (m == "f") {
        while (true) {
            cout << "Iveskite failo, kuri norite nuskaityti pavadinima, arba ('0'), jei baigete darba " << endl;
            cin >> pavadinimas;
            if (pavadinimas == "0")break;
            else {
                //       VECTOR:
                nuskaitymas(studentai, stud, pavadinimas);
                sort(studentai.begin(), studentai.end(), rusiav);

                remove_if_skirstymas(studentai, minksti);
                isvedimas_i_2_failus(studentai, minksti, stud);

                //       LIST:
             //   nuskaitymas(student, stud, pavadinimas);
               // student.sort(rusiav);

             //   remove_if_skirstymas(student, minkst);
               // isvedimas_i_2_failus_list(stud, student, minkst);

            }
        }
    }
    else {
        while (true) {
            cout << "Iveskite, kiek studentu norite sugeneruoti, jei baigete darba, iveskite ('0'):  "; cin >> n;
            if (n == 0) break;
            else {
                try {
                    if (n < 0) throw 0;
                    naujasFailas(n);
                    pavadinimas = "studentai" + to_string(n) + ".txt";
                    cout << "Sukurto failo pavadinimas: " << pavadinimas << endl;

                    //       VECTOR:
                    nuskaitymas(studentai, stud, pavadinimas);
                    sort(studentai.begin(), studentai.end(), rusiav);

                    remove_if_skirstymas(studentai, minksti);
                    isvedimas_i_2_failus(studentai, minksti, stud);

                    //       LIST:
                  //  nuskaitymas(student, stud, pavadinimas);
                    //student.sort(rusiav);

                    //remove_if_skirstymas(student, minkst);
                    //isvedimas_i_2_failus_list(stud, student, minkst);

                }
                catch (int e) { cout << "Per mazas studentu kiekis \n"; }
            }
        }
    }
}