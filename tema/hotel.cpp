//
// Created by Raresssssssssss on 1/19/2022.
//

#include "hotel.h"
#include "cameraDubla.h"
#include "cameraApartament.h"
#include "cameraView.h"

void hotel::adauga_camera(const camera &camera1) {
    camere.push_back(camera1.clone());
}

void hotel::adauga_client(const clientHotel &clientNat1) {
    clienti.push_back(clientNat1.clone());
}



//camera(camera const &camera)

//void hotel::alegere_camera(client client) {
//
//    std::cout << "\nAlege tipul camerei pe care doresti s-o inchiriezi: 1.DUBLA / 2.APARTAMENT / 3.VIEW ROOM\n";
//    int option;
//    std::cin >> option;
//    std::shared_ptr<camera> camTemp;
//
//    switch(option){
//        case 1: {
//            camTemp = std::shared_ptr<cameraDubla>();
//            break;
//        }
//        case 2: {
//            camTemp = std::shared_ptr<cameraApartament>();
//            break;
//        }
//        case 3: {
//            camTemp = std::shared_ptr<cameraView>();
//            break;
//        }
//        default:{
//            std::cout<<"Optiunea nu exista";
//            break;
//        }
//    }
//
//
//
//
//
//    int ok = 0;
//
//
//
//}

hotel::hotel(const std::string &nume, int nrStele) : nume(nume), nrStele(nrStele) {}

std::ostream &operator<<(std::ostream &os, const hotel &hotel) {
    os  << "    Hotel: " << hotel.nume << " de: " << hotel.nrStele << " stele:";
    std::cout<<"\n";
    for(int i=0;i<hotel.camere.size();i++)
        hotel.camere[i]->afisare(std::cout);
    for(int i=0;i<hotel.clienti.size();i++) {
        hotel.clienti[i]->afisare(std::cout);
        std::cout<<"\n";
//        std::cout<<hotel.clienti[i]->getTipCamera()<<" ";
        for(int k=0;k<hotel.camere.size();k++) {
//            std::cout << hotel.camere[i]->getTipCamera() << "\n";
            if (hotel.camere[i]->getTipCamera() == hotel.clienti[i]->getTipCamera() && !hotel.camere[i]->isOcupat()) {
                std::cout << "Ati rezervat o camera de tip " << hotel.camere[i]->getTipCamera()<< "!\n";
                hotel.camere[i]->setOcupat(true);
                std::cout << "\n";
                break;
            }else{
                std::cout<<"Toate camerele de tip "<<hotel.clienti[i]->getTipCamera()<<" sunt ocupate!\n";
                break;
            }
        }
    }
    std::cout<<"\n";

//    for(int i=0;i<hotel.camere.size();i++)
//        hotel.camere[i]->afisare(std::cout);
//        std::cout<<"\n";
//        std::cout<<"Alegeti tipul camerei dorit: 1.DUBLA / 2.APARTAMENT / 3.VIEWROOM";
//        std::cout<<"\n";
//        int optiune;
//        std::cin>>optiune;
    return os;
}

hotel::hotel(const hotel &copie) : nume(copie.nume), nrStele(copie.nrStele){
    for(const auto &j : copie.camere)
        camere.push_back(j->clone());

    for(const auto &j:copie.clienti)
        clienti.push_back(j->clone());
}

void hotel::swap(hotel &hotel1, hotel &hotel2) {
    using std::swap;
    swap(hotel1.camere, hotel2.camere);
    swap(hotel1.clienti, hotel2.clienti);
    swap(hotel1.nume, hotel2.nume);
    swap(hotel1.nrStele, hotel2.nrStele);
}

hotel &hotel::operator=(hotel &copie) {
    swap(*this, copie);
    return *this;
}


