#include <vector>
#include <iostream>
using namespace std;

void split(string frase, vector<string> &palabras, char sep);
string smooth(string frase);

void split(string frase, vector<string> &palabras, char sep){
	frase = smooth(frase);
	cout << "$"<< frase <<"$"<<endl;
    int j=0;
    for(int i = 0; i < frase.length(); i++){
        if (frase[i] == sep){
            palabras.push_back(frase.substr(j, i-j));
			j = i+1;
        }
        else if (i == frase.length()-1){
			palabras.push_back(frase.substr(j,i-j+1));
        }
    }
}

string smooth(string frase){
	for(int i=0;i<frase.length(); i++){
		if(frase[i]=='.' || frase[i]==',' || frase[i]==':' || frase[i]==';' || frase[i]=='_' || frase[i]=='-'){
			frase.erase(i,1);
			i--;
		}
	}
	while(frase[0]==' '){
		frase.erase(0,1);
	}
	while(frase[frase.length()-1]==' '){
		frase.erase(frase.length()-1, 1);
	}
	for(int i=0;i<frase.length(); i++){
		if (i+1 < frase.length()-1){
			if(frase[i]==' ' && frase[i+1]==' '){
				frase.erase(i,1);
				i--;
			}
		}
	}
	return frase;
}
