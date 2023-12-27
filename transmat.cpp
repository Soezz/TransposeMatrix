#include<iostream>
//coding by mzanuar
using namespace std;
int main(){
cout << "Transpose Matrix" << endl;
cout << endl;
int i,j,m,n;// data variabel intergar
int matr[10][10],trix[10][10];
//data array

//input m dan n untuk data dimensi matrix
cout << "Input jumlah Baris: ";
cin >> m;// data disimpan n
cout << "Input jumlah kolom: ";
cin >> n;// data disimpan n

//input data matrix
cout << "" << endl;
for ( i=0; i<m; i++)//var i kurang dari var m
{
 for( j=0; j<n; j++){
 cout << "Input Baris "<<i+1<< ", kolom " <<j+1<<"= ";
 cin >> matr[i][j]; //data m dan n disimpan di matr
 }
}
//operasi Transpose matrix
for ( i=0; i<m; i++)//var i kurang dari var m
{
 for( j=0; j<n; j++){
 trix[j][i]=matr[i][j];
 //data trix diubah ke matr
 }
}
cout << endl;
//menampilkan transpose
cout <<"Hasil Transpose: " <<endl;
cout << endl;
for ( i=0; i<m; i++)//var i kurang dari var m
{
 for( j=0; j<n; j++){
 cout<< trix[j][i] <<" " ;
 }
 cout << endl;
}
return 0;
};
