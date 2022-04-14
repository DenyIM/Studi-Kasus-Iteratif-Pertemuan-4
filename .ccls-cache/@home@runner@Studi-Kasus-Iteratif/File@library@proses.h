using namespace std;
class Proses {
public:
  void Hitung(){
    ambil_data.open("api_data.txt");
    ambil_data>>uangperbulan;
    ambil_data.close();
    totalpengeluaran = 0;
    uangsaatini = 0;
    for(int i = 1; i <= 12; i++){
      tulis_data.open("api_data.txt");
      bulanini = uangperbulan;
      cout<<" Pengeluaran bulan "<<i<<" : ";
      cin>>pengeluaranbulan;
      totalpengeluaran = totalpengeluaran + pengeluaranbulan;
      bulanini = bulanini - pengeluaranbulan;
      uangsaatini = uangsaatini + bulanini;
      tulis_data<<pengeluaranbulan<<endl;
    }
    tulis_data.close();
  }
  void toFile(){
    tulis_data.open("api_data.txt");
    tulis_data<<totalpengeluaran<<endl;
    tulis_data<<uangsaatini;
    tulis_data.close();
  }
private:
  ifstream ambil_data;
  ofstream tulis_data;
  int pengeluaranbulan;
  int uangperbulan;
  int totalpengeluaran;
  int uangsaatini;
  int bulanini; 
};