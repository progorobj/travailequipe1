#include <iostream>

int main()
{
    double largeur ;
    int hauteur;
    double aire;
    do{
	std::cout<< "Entrer la largeur du triangle : ";
    std::cin>>largeur;
    }while(largeur<=0);
    do{
    std::cout<< "Entrer la hauteur du triangle : ";
    std::cin>>hauteur;
    }while(hauteur<=0);
    std::cout<<"largeur="<<largeur<<std::endl;
    std::cout<<"hauteur="<<hauteur<<std::endl;
    
    std::cout<<"Aire="<<(hauteur*largeur)/2<<std::endl;
    
    
}
