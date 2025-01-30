
// Valeurs par défaut 
#define NB  4 // nombre de poins dans le code secret 
#define MAX 10 // nombre d'essais maximum
#define REDONDANCE 1 // la redondance des couleurs dans le code est admises 
class Mastermind
{
    public :
    Mastermind(int redondance=0, int tailleCode=NB,  int nbEssaisMax=MAX);
    void usage();
    void choisirSolution();
    void saisirEssai();
    void verifierEssai();
    void afficherResultat();
    bool estFini();

};