#include <iostream>
#include <vector>

using namespace std;

class KarstasPatiekalas {
private:
    string pavadinimas;
    string tipas;
    double kaina;
    double kalorijuKiekisSimte;
    double svoris;
    double kalorijos;
public:
    void setPavadinimas(string a) {
        pavadinimas = a;
    }
    string getPavadinimas() {
        return pavadinimas;
    }
    void setTipas(int i) {
        if (i == 0) tipas = "Zuvis";
        if (i == 1) tipas = "Mesa";
        if (i == 2) tipas = "Vegetariska";
    }
    string getTipas() {            
        return tipas;
    }
    void setKaina(double a) {
        kaina = a;
    }
    double getKaina() {
        return kaina;
    }
    void setKaloSimt(double a) {
        kalorijuKiekisSimte = a;
    }
    double getKaloSimt() {
        return kalorijuKiekisSimte;
    }
    void setSvoris(double a) {
        svoris = a;
    }
    double getSvoris() {
        return svoris;
    }
    double getKalorijos() {
        return kalorijos;
    }

    void Kalorijos() {
        kalorijos = kalorijuKiekisSimte * svoris*10;
    }

    void getPatiekalas() {
        cout << getPavadinimas() << " " << getTipas() << " " << getKaina() << " " << getKalorijos() << " " << getSvoris() << endl;
    }

    KarstasPatiekalas(string a, int b,double c, double d, double e) {
        setPavadinimas(a);
        setTipas(b);
        setKaina(c);
        setKaloSimt(d);
        setSvoris(e);
        Kalorijos();
    }
    KarstasPatiekalas() {
        pavadinimas = "";
        tipas = "";
        kaina = 0;
        kalorijuKiekisSimte = 0;
        svoris = 0;
    }
};

class Garnyras {
private:
    string G_pavadinimas;
    string G_tipas;
    double G_kaina;
    double G_kalorijuKiekisSimte;
    double G_svoris;
    string tinkamumas;
    double G_kalorijos;
public:
    void setG_Pavadinimas(string a) {
        G_pavadinimas = a;
    }
    string getG_Pavadinimas() {
        return G_pavadinimas;
    }
    void setG_Tipas(int i) {
        if (i == 0) G_tipas = "Karsta";
        if (i == 1) G_tipas = "Salta";
    }
    string getG_Tipas() {
        return G_tipas;
    }
    void setG_Kaina(double a) {
        G_kaina = a;
    }
    double getG_Kaina() {
        return G_kaina;
    }
    void setG_KaloSimt(double a) {
        G_kalorijuKiekisSimte = a;
    }
    double getG_KaloSimt() {
        return G_kalorijuKiekisSimte;
    }
    void setG_Svoris(double a) {
        G_svoris = a;
    }
    double getG_Svoris() {
        return G_svoris;
    }
    double getG_Kalorijos() {
        return G_kalorijos;
    }

    void setTinkamumas(int i) {
        if (i == 0) tinkamumas = "Zuvis";
        if (i == 1) tinkamumas = "Mesa";
        if (i == 2) tinkamumas = "Vegetariska";
        if (i == 3) tinkamumas = "Visi";
    }
    string getTinkamumas() {
        return tinkamumas;
    }

    void G_Kalorijos() {
        G_kalorijos = G_kalorijuKiekisSimte * G_svoris*10;
    }

    void getGarnyras() {
        cout << getG_Pavadinimas() << " " << getG_Tipas() << " " << getG_Kaina() << " " << getG_Kalorijos() << " " << getG_Svoris() << " " << getTinkamumas() << endl;
    }

    Garnyras(string a, int b, double c, double d, double e,int f) {
        setG_Pavadinimas(a);
        setG_Tipas(b);
        setG_Kaina(c);
        setG_KaloSimt(d);
        setG_Svoris(e);
        setTinkamumas(f);
        G_Kalorijos();
    }
    Garnyras() {
        G_pavadinimas = "";
        G_tipas = "";
        G_kaina = 0;
        G_kalorijuKiekisSimte = 0;
        G_svoris = 0;
        tinkamumas = "";
    }

};

class komplektai{
    string karstas;
    string garnyras;
    double kaina;
public:
    komplektai(string a, string b, double c,double d) {
        karstas = a;
        garnyras = b;
        kaina = c+d;
    }
    double getKKaina() {
        return kaina;
    }
    void getKomplekta() {
        cout << karstas << " " << garnyras << " " << kaina << endl;
    }
};

class Kavine {
private:
    vector<KarstasPatiekalas> karsti;
    vector<Garnyras> garnyrai;
    vector<komplektai> kompl;
public:
    void setK_Patiekalas(KarstasPatiekalas a) {
        karsti.push_back(a);
    }
    void getK_Patiekalas(int i) {
        cout << karsti[i].getPavadinimas() << " " << karsti[i].getTipas() << " " << karsti[i].getKaina() << " " << karsti[i].getKalorijos() << " " << karsti[i].getSvoris() << endl;
    }
    void setGarnyras(Garnyras a) {
        garnyrai.push_back(a);
    }
    void getGarnyrai(int i) {
        cout << garnyrai[i].getG_Pavadinimas() << " " << garnyrai[i].getG_Tipas() << " " << garnyrai[i].getG_Kaina() << " " << garnyrai[i].getG_Kalorijos() << " " << garnyrai[i].getG_Svoris() << " " << garnyrai[i].getTinkamumas() << endl;
    }
    void padarytiKomplekta(int a,int b){
        kompl.push_back(komplektai(karsti[a].getPavadinimas(),garnyrai[b].getG_Pavadinimas(),karsti[a].getKaina(),garnyrai[b].getG_Kaina()));
    }
    void getKomplekta(int i){
        kompl[i].getKomplekta();
    }
    void pirkti(int i,double a, double b) {
        cout << "kaina "<<kompl[i].getKKaina()<<endl;
        cout << "Kaina su nuolaida "<<kompl[i].getKKaina() - (kompl[i].getKKaina()*b/100) <<endl;
        cout << "Graza " << a - (kompl[i].getKKaina() - (kompl[i].getKKaina() * b/100));
    }
};

int main()
{
    
    
    Kavine l;
    l.setK_Patiekalas(KarstasPatiekalas("Kepsnys", 1, 3.548, 120.46,0.8));//Karsta Tipas 0=zuvis, 1=Mesa, 2=Vegetariska
    l.getK_Patiekalas(0);
    l.setGarnyras(Garnyras("Bulves", 0, 1.85, 50, 0.2, 3)); //Garnyro Tipas 0=Karsta, 1=Salta
    l.getGarnyrai(0);                                       //Garnyro tinkamumas 0=zuvis, 1=Mesa, 2=Vegetariska, 3=visi
    l.padarytiKomplekta(0, 0);
    l.getKomplekta(0);
    l.pirkti(0, 20, 80);	//komplekto nr, moketa, nuolaidos %

}