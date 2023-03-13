#include <iostream>
using namespace std;

double rerata (double a,double b){
    return (a+b)/2;
}

string status(double c){
    if (c >= 60)
        return "Lulus";
    else
        return "gagal";
}

string status2(double rata, double nil){
    if (rata >= 60 or nil >= 70)
        return "Lulus";
    else
        return "Gagal";
}

int main(){
    double nilM,nilB;
    cout << " Masukan nilai Matematika = ";
    cin >> nilM;
    cout << "Masukan nilai Bahasa Indonesia = ";
    cin >> nilB;
    cout << "Status Kelulusan = " << status(rerata(nilM,nilB));
    cout << "\nStatus Kelulusan ke 2 = " << status2(rerata(nilM,nilB),nilM);
    return 0;
}