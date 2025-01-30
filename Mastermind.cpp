#include "Mastermind.h"
 class Mastermind{
    public:
    Mastermind(int redondance=0, int tailleCode=NB,  int nbEssaisMax=MAX);
    void usage();
    void choisirSolution();
    void saisirEssai();
    void verifierEssai();
    void afficherResultat();
    bool estFini();

    ~Mastermind();

    private:
    int bienPlaces();
    int malPlaces();

    private:
    int secret;
    int essai;
    int code;
    int nbBienPlaces;
    int nbMalPlaces;
    int redondance;
    int tailleCode;
    int nbEssaisMax;
    int nbEssais;
    bool fini;

 };
    Mastermind::Mastermind(int redondance=0, int tailleCode=NB,  int nbEssaisMax=MAX){}
    void Mastermind::usage(){}
    void Mastermind::choisirSolution(){}
    void Mastermind::saisirEssai(){}
    void Mastermind::verifierEssai(){}
    void Mastermind::afficherResultat(){}
    int  Mastermind::bienPlaces(){}
    int  Mastermind::malPlaces(){}
    bool Mastermind::estFini(){}

