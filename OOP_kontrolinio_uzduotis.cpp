#include <iostream>
#include <string>
#include <vector>

using namespace std;

const double EL=0.11;

class Procesorius{
private:
    string CPUPavadinimas;
    double greitis;
    double kaina;
    string architektura;
    int branduoliuSk;
    double ElMetinisSuvartojimas;
    double metineElKaina;
public:
    void setCPUPav(string a){
        CPUPavadinimas=a;
    }
    string getCPUPav(){
        return CPUPavadinimas;
    }
    void setGreitis(double a){
        greitis=a;
    }
    double getGreitis(){
        return greitis;
    }
    void setKaina(double a){
        kaina=a;
    }
    double getKaina(){
        return kaina;
    }
    void setArchitektura(int i){
        if (i == 0) architektura = "AMD";
        if (i == 1) architektura = "Intel";
        if (i == 2) architektura = "Apple";
    }
    string getArchitektura(){
        return architektura;
    }
    void setBranduoliuSk(int a){
        branduoliuSk=a;
    }
    int getBranduoliuSk(){
        return branduoliuSk;
    }
    void setElMetinisSuvartojimas(double a){
        ElMetinisSuvartojimas=a;
    }
    double getElMetinisSuvartojimas(){
        return ElMetinisSuvartojimas;
    }
    double getmetineElKaina(){
        return metineElKaina;
    }
    Procesorius(){
        CPUPavadinimas="";
        greitis=0;
        kaina=0;
        architektura="";
        branduoliuSk=0;
        ElMetinisSuvartojimas=0;
        metineElKaina=0;
    }

    Procesorius(string a, double b, double c, int d, int e, double f){
        setCPUPav(a);
        setGreitis(b);
        setKaina(c);
        setArchitektura(d);
        setBranduoliuSk(e);
        setElMetinisSuvartojimas(f);
        metineElKaina=(f*EL);
    }

};

class VaizdoPlokste{
private:
    string GPUPavadinimas;
    double greitis;
    double kaina;
    string architektura;
    int branduoliuKiekis;
    double HashRate;
    int ram;
    double ElMetinisSuvartojimas;
    double metineElkaina;
public:
    void setGPUPav(string a){
        GPUPavadinimas=a;
    }
    string getGPUPav(){
        return GPUPavadinimas;
    }
    void setGreitis(double a){
        greitis=a;
    }
    double getGreitis(){
        return greitis;
    }
    void setKaina(double a){
        kaina=a;
    }
    double getKaina(){
        return kaina;
    }
    void setArchitektura(int i){
        if (i == 0) architektura = "AMD";
        if (i == 1) architektura = "Intel";
        if (i == 2) architektura = "Apple";
        if (i == 3) architektura = "Nvidia";
    }
    string getArchitektura(){
        return architektura;
    }
    void setBranduoliuKiekis(int a){
        branduoliuKiekis=a;
    }
    int getBranduoliuKiekis(){
        return branduoliuKiekis;
    }
    void setHashRate(double a){
        HashRate=a;
    }
    double getHashRate(){
        return HashRate;
    }
    void setRam(int a){
        ram=a;
    }
    void setElMetinisSuvartojimas(double a){
        ElMetinisSuvartojimas=a;
    }
    double getElMetinisSuvartojimas(){
        return ElMetinisSuvartojimas;
    }

    double getmetineElkaina(){
        return metineElkaina;
    }
    VaizdoPlokste(){
        GPUPavadinimas="";
        greitis=0;
        kaina=0;
        architektura="";
        branduoliuKiekis=0;
        ElMetinisSuvartojimas=0;
        metineElkaina=0;
    }
    VaizdoPlokste(string a, double b, double c, int d, int e, double f, double g){
        setGPUPav(a);
        setGreitis(b);
        setKaina(c);
        setArchitektura(d);
        setBranduoliuKiekis(e);
        setHashRate(f);
        setElMetinisSuvartojimas(g);
        metineElkaina=(g*EL);
    }
};

class Kompiuteris{
private:
    string kompPavadinimas;
    VaizdoPlokste GPU;
    Procesorius CPU;
    double kaina;
    double ElMetKaina;
public:
    void setKompPav(string a){
        kompPavadinimas=a;
    }
    string getKompPav(){
        return kompPavadinimas;
    }
    void setGPU(VaizdoPlokste a){
        GPU=a;
    }
    string getGPU(){
        return GPU.getGPUPav();
    }
    void setCPU(Procesorius a){
        CPU=a;
    }
    string getCPU(){
        return CPU.getCPUPav();
    }
    void setKaina(double a){
        kaina=GPU.getKaina()+CPU.getKaina()+a;
    }
    double getKaina(){
        return kaina;
    }
    void setElMetKaina(){
        ElMetKaina=GPU.getmetineElkaina()+CPU.getmetineElKaina();
    }
    double getElMetKaina(){
        return ElMetKaina;
    }

    Kompiuteris(){
        kompPavadinimas="";
        kaina=0;
        ElMetKaina=0;
    }
    Kompiuteris(string a,VaizdoPlokste b, Procesorius c, double d){
        setKompPav(a);
        setGPU(b);
        setCPU(c);
        setKaina(d);
        setElMetKaina();
    }

};

class Parduotuve{
private:
    vector<Kompiuteris> PC;
    vector<Procesorius> CPU;
    vector<VaizdoPlokste> GPU;
public:
    void setCPU(Procesorius a){
        CPU.push_back(a);
    }
    Procesorius getCPU(int i){
        return CPU[i];
    }
    void spausdintiCPU(){
        for(int i=0; i<CPU.size();i++)
            cout<<CPU[i].getCPUPav()<<" "<<CPU[i].getArchitektura()<<" "<<CPU[i].getBranduoliuSk()<<" "<<CPU[i].getGreitis()<<" "<<CPU[i].getKaina()<<" "<<CPU[i].getElMetinisSuvartojimas()<<" "<<CPU[i].getmetineElKaina()<<endl;
    }
    void setGPU(VaizdoPlokste a){
        GPU.push_back(a);
    }
    VaizdoPlokste getGPU(int i){
        return GPU[i];
    }
    void spausdintiGPU(){
        for(int i=0; i<GPU.size();i++)
            cout<<GPU[i].getGPUPav()<<" "<<GPU[i].getArchitektura()<<" "<<GPU[i].getGreitis()<<" "<<GPU[i].getBranduoliuKiekis()<<" "<<GPU[i].getHashRate()<<" "<<GPU[i].getKaina()<<" "<<GPU[i].getElMetinisSuvartojimas()<<" "<<GPU[i].getmetineElkaina()<<endl;
    }
    void setPC(Kompiuteris a){
        PC.push_back(a);
    }
    void spaudintiPC(){
        for(int c=0;c<PC.size();c++)
            cout<<PC[c].getKompPav()<<" "<<PC[c].getCPU()<<" "<<PC[c].getGPU()<<" "<<PC[c].getKaina()<<endl;
            }
};


void Menu_content() {
    cout << "[1] - Prideti CPU" << endl;
    cout << "[2] - Prideti GPU" << endl;
    cout << "[3] - CPU sarasas" << endl;
    cout << "[4] - GPU sarasas" << endl;
    cout << "[5] - Sukurti kompiuteri" << endl;
    cout << "[6] - Kompiuteriai" <<endl;
    cout << "[0] - Uzdaryti" << endl;
}

void Menu(int* pas) {
    char lpas;
    Menu_content();

    do
    {
        lpas = getchar();
        if ((isdigit(lpas) == false) && (lpas != '\n'))
        {
            cout << "Pasirinkimai turi buti (1, 2, 3...)" << endl;
            cout << "Prasome bandyti dar karta:" << endl;
            Menu_content();
        }

    } while (isdigit((unsigned char)lpas) == false);
    *pas = (int)lpas - '0';

}

int main(){
    Parduotuve par;
    int pas;
        do
        {
            Menu(&pas);
            switch (pas)
            {
            case 1:{
                string a;
                double b, c, f;
                int d, e;
                cout<<"Iveskite Pavadinima, greiti, kaina, architektura(0=AMD,1=Intel,2=Apple),branduoliu skiaciu, metinis elektros sunaudojimas"<<endl;
                cin>>a>>b>>c>>d>>e>>f;
                par.setCPU(Procesorius(a,b,c,d,e,f));
                break;}
            case 2:{
                string a;
                double b, c, f, g;
                int d, e;
                cout<<"Iveskite Pavadinima, greiti, kaina, architektura(0=AMD,1=Intel,2=Apple,3=Nvidia),branduoliu skiaciu,Hash Rate, metinis elektros sunaudojimas"<<endl;
                cin>>a>>b>>c>>d>>e>>f>>g;
                par.setGPU(VaizdoPlokste(a,b,c,d,e,f,g));
                break;}
            case 3:
                par.spausdintiCPU();
                break;
            case 4:
                par.spausdintiGPU();
                break;
            case 5:{
                string a;
                int b,c;
                double d;
                cout<<"Iveskite Pavadinima, GPU nr, Cpu nr, surinkimo kaina"<<endl;
                cin>>a>>b>>c>>d;
                par.setPC(Kompiuteris(a,par.getGPU(b-1),par.getCPU(c-1),d));
                break;}
            case 6:
                par.spaudintiPC();
                break;
            default:
                cout << "Pasirinktas variantas negalimas" << endl;
                break;
            }
        } while (pas != 0);
}
