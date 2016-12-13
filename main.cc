#include <iostream>
#include "electeur.hh"
#include "media.hh"
#include "candidat.hh"
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
  srand(time(NULL));
/* PARTIE TEST MEDIA */
  // constructeur media
  cout<<"Premier media : "<<endl;
  Media M("Le Monde",9);
  // get_name()
  string nom_media = M.get_name();
  cout<<"\tNom du media : "<< nom_media << endl;
  // get_influence()
  int infuence = M.get_influence();
  cout<<"\tinfuence : "<< infuence <<endl;
  cout<<endl;

  cout<<"Debut de l'election : "<<endl;
  
/* PARTIE TEST CANDIDAT */
  cout<<endl;
  // constructeur candidat
  cout<<"Premier candidat : "<<endl;
  Candidat c("Toto","neutre",2);
  // get_nom()
  string name = c.get_nom();
  cout<<"\tNom : "<< name << endl;
  // get_personnalite()
  string smart = c.get_personnalite();
  cout<<"\tpersonnalité : "<< smart <<endl;
  // get_image()
  int image = c.get_image();
  cout<<"\tImage : "<< image << endl;

/* PARTIE TEST ELECTEUR */  
  // constructeur electeur
  cout<<endl;
  cout<<"Premier electeur : "<<endl;
  Electeur e(8);
  int fute = e.get_intelligence();
  cout<<"\tIntelligence : "<< fute << endl;
  

/* PARTIE TEST interactions */ 
  cout<<endl;
  cout<<"Premier candidat "<<name<< " se fait interviewer par "<<nom_media<<endl;
  c.interview(M);
  int image2 = c.get_image();
  cout<<"\tImage post interview : "<< image2 <<endl;
  cout<<endl;
  cout<<"Premier electeur d'intelligence "<<fute<<" consulte un article du journal "<<nom_media<<endl;
  e.TV(M);
  int fute2 = e.get_intelligence();
  cout<<"\tIntelligence post interview : "<< fute2 << endl;
  return 0;
}
