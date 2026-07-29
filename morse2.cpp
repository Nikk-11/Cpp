#include<iostream>
using namespace std;

class morse
{
    private: 
    string A = ".-";
    string B = "-...";
    string C = "-.-.";
    string D = "-..";
    string E = ".";
    string F = "..-.";  
    string G = "--.";
    string H = "....";
    string I = "..";
    string J = ".---";
    string K = "-.-";
    string L = ".-..";
    string M = "--";
    string N = "-.";
    string O = "---";
    string P = ".--.";
    string Q = "--.-";
    string R = ".-.";
    string S = "...";
    string T = "-";
    string U = "..-";  
    string V = "...-";
    string W = ".--";
    string X = "-..-";
    string Y = "-.--";
    string Z = "--..";

    public:
    void name(){
        cout << "Welcome to Morse Code Generator App" << endl;
        string name;
        cout << "Enter your name: " << endl;
        cin >> name;
        
        for(int i = 0; i < name.length(); i++){
            char ch = name[i];

            if(ch >= 'a' && ch <= 'z') {
                ch = ch - 32;
            }
            
            switch(ch){
                case 'A': 
                cout << "A = " << A << endl; 
                break;
                case 'B':
                 cout << "B = " << B << endl;
                  break;
                case 'C':
                 cout << "C = " << C << endl;
                  break;
                case 'D': cout << "D = " << D << endl; break;
                case 'E': cout << "E = " << E << endl; break;
                case 'F': cout << "F = " << F << endl; break;
                case 'G': cout << "G = " << G << endl; break;
                case 'H': cout << "H = " << H << endl; break;
                case 'I': cout << "I = " << I << endl; break;
                case 'J': cout << "J = " << J << endl; break;
                case 'K': cout << "K = " << K << endl; break;
                case 'L': cout << "L = " << L << endl; break;
                case 'M': cout << "M = " << M << endl; break;
                case 'N': cout << "N = " << N << endl; break;
                case 'O': cout << "O = " << O << endl; break;
                case 'P': cout << "P = " << P << endl; break;
                case 'Q': cout << "Q = " << Q << endl; break;
                case 'R': cout << "R = " << R << endl; break;
                case 'S': cout << "S = " << S << endl; break;
                case 'T': cout << "T = " << T << endl; break;
                case 'U': cout << "U = " << U << endl; break;
                case 'V': cout << "V = " << V << endl; break;
                case 'W': cout << "W = " << W << endl; break;
                case 'X': cout << "X = " << X << endl; break;
                case 'Y': cout << "Y = " << Y << endl; break;
                case 'Z': cout << "Z = " << Z << endl; break;
                default:  cout << "Invalid Character" << endl; break;
            }
        }
    }
};
  
int main(){
    morse m;
    m.name();
    return 0;
}