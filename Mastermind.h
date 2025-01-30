
// Valeurs par défaut 
#define NB  4 // nombre de poins dans le code secret 
#define MAX 10 // nombre d'essais maximum
#define REDONDANCE 1 // la redondance des couleurs dans le code est admises 

class Mastermind
{
    public :

    Mastermind(int redondance=0, int tailleCode=NB,  int nbEssaisMax=MAX);

    void usage();              //   aﬃche un texte informatif sur le jeu;
    void choisirSolution();    //   détermine aléatoirement la combinaison secrète et initialise une nouvelle manche;
    void saisirEssai();        //   assure la saisie d’une combinaison proposée par le joueur;
    void verifierEssai();      /*   vérifie si la combinaison proposée par le joueur correspond à la combinaison secrète
                                    et détermine le nombre de pions de la bonne couleur bien placés et mal placés;
                               */
    void afficherResultat();   /*   aﬃche l’état du tour (le numéro de tour, le nombre de tours restant et le
                                    nombre de pions de la bonne couleur bien placés et mal placés) et de la manche si elle est finie (en
                                    dévoilant la combinaison secrète en cas de défaite du joueur);
                                */
    bool estFini();            //  retourne vrai (true) si la manche est fini sinon faux (false).
 
};