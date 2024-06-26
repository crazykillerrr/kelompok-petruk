#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool mencariKata(vector<string>& matriks, string data){
  int baris = matriks.size();
  int kolom = matriks[0].size();

  for (int x = 0; x < baris; ++x){
    if (matriks[x].find(kata) != string::npos){
      return true;
    }
  }

  for (int x = 0; x < kolom; ++x){
    string strKolom = "";
      for (int y = 0; y < baris; ++y){
        strKolom += matriks[y][x];
      }
      if (strKolom.find(kata) != string::npos){
        return true;
      }
  }
  for (int x = 0; x < baris; ++x) {
        for (int y = 0;  < kolom; ++y){
             string strDiagonal = "";
             for (int k = 0; x + k < baris && y + k < kolom; ++k) {
                strDiagonal += matriks[x + k][y + k];
            }
            if (strDiagonal.find(kata) != string::npos) {
                return true;
            }
        }
    } 
    return false;
} 

int main(){  
int N; 
cin >> N; 

vector<string> kata(N); 
for(int x=0; x<N; ++x){ 
cin >> kata[x]; 
} 

vector<string> matriks= { 
"aafyghkjylshagbamaysnamah", 
"Fahysnamuanlalahsnskzuhz", 
"bajyskamaranamalsjudbsmak", 

"Jsusmsjshockeyjajkaiahanajuaha", 
"Majusnsajausjsnbsbsns"
}; 

for(const auto& kata : kata) { 
if (mencariKata(matriks,kata)){ 
cout<<"Ada"<<endl; 
}else{ 
cout<<"Tidak Ada"<<endl; 
} 
} 

return 0; 
} 


    





  
  
