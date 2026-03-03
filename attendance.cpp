#include <iostream>
#include <fstream>
#include <cstdlib>  // for system()

using namespace std;

int main() {
    ofstream file("attendance.csv");

    
file << "Index Number,Name,Status\n";
file << "2025006,Priscilla Arthur,Absent\n";
file << "2025007,Michael Oppong,Late\n";
file << "2025008,Ebenezer Nyarko,Present\n";
file << "2025009,Patricia Darko,Present\n";
file << "2025010,Richard Amoah,Absent\n";
file << "2025011,Victoria Amoah,Present\n";
file << "2025012,Enoch Osei,Late\n";
file << "2025013,Gladys Mensah,Present\n";
file << "2025014,Samuel Baidoo,Absent\n";
file << "2025018,Kelvin Lamptey,Absent\n";
file << "2025019,Phoebe Quansah,Present\n";
file << "2025020,Jonathan Terkper,Late\n";
file << "\nSummary\n";
file << "Total Present,10\n";
file << "Total Absent,5\n";
file << "Total Late,5\n";
    file.close();

    // Open Excel automatically
    system("start attendance.csv");

    return 0;
}
