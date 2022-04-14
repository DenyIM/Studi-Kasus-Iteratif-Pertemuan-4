using namespace std;

class Output{
public:
  void cetak(){
    cout<<"Total Pengeluaran = Rp."<<data_file[0]<<endl;
    cout<<"Uang Tabungan Saat ini = Rp."<<data_file[1];
  }

  void getData(){
  	ambil_data.open("api_data.txt");
  	while(!ambil_data.eof()){
    	ambil_data >> data_file[index];
    	index += 1;
  	}
  	ambil_data.close();
  }

private:
  int data_file[30];
  int index = 0; 
  ifstream ambil_data;
  ofstream tulis_data;
};