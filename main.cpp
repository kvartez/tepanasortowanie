#include <iostream>
#include <cstdlib>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;



void CubSort(int size,int section ) {

	int n = size, d = section;
	int kube[d];
	int numb[n];
	//kube 0
	for (int i = 0; i < d; i++) {
		kube[i] = 0;

	}
	//rand liczb
	for (int i = 0; i < n; i++) {
		numb[i] = rand() % d;
		cout  << numb[i]<< ",";
	}
	cout << endl << "posortowane liczby:";

	for (int i = 0; i < n; i++) {

		kube[numb[i]]++;
	}
	
	for (int i = 0; i < d; i++) {
		for (int j = 0; j < kube[i]; j++) {
			cout << i << ",";
		}
	}


cout<<endl;

}
void BubSort(int size,int section ) {

	int n = size, d = section;
	int idk;
	int numb[n];
	
	
	//rand liczb
	for (int i = 0; i < n; i++) {
		numb[i] = rand() % d;
		cout <<  numb[i]<<"," ;
	}
	cout<<endl<<"ine:";
	for(int i = 0; i<n;i++){
	    for(int j = 0; j<n-1;j++){
	        
    	    if(numb[j]>numb[j+1]){
    	        idk = numb[j];
    	        numb[j]=numb[j+1];
    	        numb[j+1]=idk;
    	        
    	    }
	    
    	}
	    
	}
for (int i = 0; i < n; i++) {
			cout << numb[i] << ",";
		}
	cout<<endl;
}
int main() {
	CubSort(10,10);
	BubSort(10,10);

	return 0;
}
