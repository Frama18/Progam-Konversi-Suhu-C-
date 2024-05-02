#include <iostream>

using namespace std;

int celciustofharenheit(float celcius) {
  float fharenheit = (celcius * 9/5) + 32;
  return fharenheit;
}
int celciustoreamur(float celcius) {
  float reamur = celcius * 4/5;
  return reamur;
}
int celciustokelvin(float celcius) {
  float kelvin = celcius + 273;
  return kelvin;
}
int fharenheittocelcius(float fharenheit) {
  float celcius = (fharenheit * 5/9) - 32;
  return celcius;
}
int fharenheittoreamur(float fharenheit) {
  float reamur = (fharenheit * 4/9) - 32;
  return reamur;
}
int fharenheittokelvin(float fharenheit) {
  float kelvin = ((fharenheit * 5/9) - 32) + 273;
  return kelvin;
}
int reamurtocelcius(float reamur) {
  float celcius = reamur * 5/4;
  return celcius;
}
int reamurtofharenheit(float reamur) {
  float fharenheit = (reamur * 9/4) + 32;
  return fharenheit;
}
int reamurtokelvin(float reamur) {
  float kelvin = (reamur * 5/4) + 273;
  return kelvin;
}
int kelvintocelcius(float kelvin) {
  float celcius = kelvin - 273;
  return celcius;
}
int kelvintofharenheit(float kelvin) {
  float fharenheit = ((kelvin * 5/9) - 32) - 273;
  return fharenheit;
}
int kelvintoreamur(float kelvin) {
  float reamur = ((kelvin * 4/9) - 32) - 273;
  return reamur;
}

int main() {

  string jenis, konversi ;
  float suhu;

  cout << "==========================" << endl;
  cout << "PROGRAM KONVERSI SUHU C++\n" << "==========================\n" << "* Celcius\n" << "* Fharenheit\n" << "* Reamur\n" << "* Kelvin\n";
  cout << "==========================" << endl;
  cout << "Pilih Salah Satu: ";
  cin >> jenis;
  cout << "==========================" << endl;
  cout << "Masukkan suhu " << jenis << ": ";
  cin >> suhu;
  cout << "==========================" << endl;
  cout << "Konversi ke: ";
  cin >> konversi;
  cout << "==========================" << endl;

// apabila user memasukkan jenis suhu yang sama
  if((jenis == "celcius") && (konversi == "celcius")){
    cout << "Hasil Konversi Suhu\n" << "==========================\n" << suhu << " derajat Celcius sama dengan " << suhu << " derajat Celcius" << endl;
  } else if((jenis == "fharenheit") && (konversi == "fharenheit")){
    cout << "Hasil Konversi Suhu\n" << "==========================\n" << suhu << " derajat Fharenheit sama dengan " << suhu << " derajat Fharenheit" << endl;
  } else if((jenis == "reamur") && (konversi == "reamur")){
    cout << "Hasil Konversi Suhu\n" << "==========================\n" << suhu << " derajat Reamur sama dengan " << suhu << " derajat Reamur" << endl;
  } else if((jenis == "kelvin") && (konversi == "kelvin")){
    cout << "Hasil Konversi Suhu\n" << "==========================\n" << suhu << " derajat Kelvin sama dengan " << suhu << " derajat Kelvin" << endl;
  }  

// konversi suhu celcius
  else if((jenis == "celcius") && (konversi == "fharenheit")){
    cout << "Hasil Konversi Suhu\n" << "==========================\n" << suhu << " derajat Celcius sama dengan " << celciustofharenheit(suhu) << " derajat Fharenheit" << endl;
  } else if((jenis == "celcius") && (konversi == "reamur")){
    cout << "Hasil Konversi Suhu\n" << "==========================\n" << suhu << " derajat Celcius sama dengan " << celciustoreamur(suhu) << " derajat Reamur" << endl;
  } else if((jenis == "celcius") && (konversi == "kelvin")){
    cout << "Hasil Konversi Suhu\n" << "==========================\n" << suhu << " derajat Celcius sama dengan " << celciustokelvin(suhu) << " derajat Kelvin" << endl;
  } 

// konversi suhu fharenheit
  else if((jenis == "fharenheit") && (konversi == "celcius")){
    cout << "Hasil Konversi Suhu\n" << "==========================\n" << suhu << " derajat Fharenheit sama dengan " << fharenheittocelcius(suhu) << " derajat Celcius" << endl;
  } else if((jenis == "fharenheit") && (konversi == "reamur")){
    cout << "Hasil Konversi Suhu\n" << "==========================\n" << suhu << " derajat Fharenheit sama dengan " << fharenheittoreamur(suhu) << " derajat Reamur" << endl;
  } else if((jenis == "fharenheit") && (konversi == "kelvin")){
    cout << "Hasil Konversi Suhu\n" << "==========================\n" << suhu << " derajat Fharenheit sama dengan " << fharenheittokelvin(suhu) << " derajat Kelvin" << endl;
  } 
// konversi suhu reamur
  else if((jenis == "reamur") && (konversi == "celcius")){
    cout << "Hasil Konversi Suhu\n" << "==========================\n" << suhu << " derajat Reamur sama dengan " << reamurtocelcius(suhu) << " derajat Celcius" << endl;
  } else if((jenis == "reamur") && (konversi == "fharenheit")){
    cout << "Hasil Konversi Suhu\n" << "==========================\n" << suhu << " derajat Reamur sama dengan " << reamurtofharenheit(suhu) << " derajat Fharenheit" << endl;
  } else if((jenis == "reamur") && (konversi == "kelvin")){
    cout << "Hasil Konversi Suhu\n" << "==========================\n" << suhu << " derajat Reamur sama dengan " << reamurtokelvin(suhu) << " derajat Kelvin" << endl;
  } 
// konversi suhu kelvin
  else if((jenis == "kelvin") && (konversi == "celcius")){
    cout << "Hasil Konversi Suhu\n" << "==========================\n" << suhu << " derajat Kelvin sama dengan " << kelvintocelcius(suhu) << " derajat Celcius" << endl;
  } else if((jenis == "kelvin") && (konversi == "fharenheit")){
    cout << "Hasil Konversi Suhu\n" << "==========================\n" << suhu << " derajat Kelvin sama dengan " << kelvintofharenheit(suhu) << " derajat Fharenheit" << endl;
  } else if((jenis == "kelvin") && (konversi == "reamur")){
    cout << "Hasil Konversi Suhu\n" << "==========================\n" << suhu << " derajat Kelvin sama dengan " << kelvintoreamur(suhu) << " derajat Reamur" << endl;
  } 
  

  
  cin.get();
  return 0;
}
