#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class file{
	ifstream plik;
	char c;

public:
	
	void otworz();
	void tablice_dwuwymiarowe();
	void czyRek();


};
void file::otworz(){
	plik.open("dane_obrazki.txt");
	if(plik.good() == true)
    {
        while(!plik.eof())
        {
            plik >>c;
        }
        plik.close();
}
}
void file::tablice_dwuwymiarowe(){
	int t[20][20];
for (int i=0; i<20; i++)
 {
    for(int j=0; j<20; j++)
{
        cout << t[i][j] << " ";
   }
   cout <<endl;
}
}
void file::czyRek(){
	int i,j,s,obrazek,RZM;
int robr[i][j]=robr[i][j+s]=robr[i+s][j]=robr[i+s][j+s];
s=RZM/2;

bool czyRek(robr){
 int s=RZM/2;
 for(int i=0; i<RZM/2; i++)
 for(int j=0; j<RZM/2; j++){
 if (robr[i][j]!=robr[i+s][j])
  return false;
 if (robr[i][j]!=robr[i][j+s])
  return false;
 if (robr[i][j]!=robr[i+s][j+s])
 return false;
 }
 return true; 

}
}
int main() {
	file plik;
	plik.otworz();
	plik.tablice_dwuwymiarowe();
	plik.czyRek();
	return 0;
}
