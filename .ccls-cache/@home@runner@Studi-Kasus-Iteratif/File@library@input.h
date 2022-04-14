using namespace std;

class Input {
public:
void cetak (){
  cout<<"Masukkan uang saku : Rp.";
  cin>>saku;
}

void toFile(){
			tulis_data.open("api_data.txt");
			tulis_data << saku;
			tulis_data.close();
}

private:
ofstream tulis_data;
int saku;
};