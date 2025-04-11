#include <iostream>
#include <string>
using namespace std;

string Criptografar (string mensagem, int chave){
    string msg= mensagem;
    int cont=0;
    int j=0;
    while(j<mensagem.length()){
        msg[cont]=mensagem[j];
        j+=chave;
        cont++;
    }
    return msg;
}

int main(){
    string mensagem, secretMsg;
    int key;
    cout<<"Digite a mensagem"<<endl;
    getline(cin, mensagem);
    cout<<"Digite a key"<<endl;
    cin>>key;
    secretMsg=Criptografar(mensagem, key);
    cout<<secretMsg;
    return 0;
}
