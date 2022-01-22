//
// Created by Raresssssssssss on 1/21/2022.
//

#include "clientHotel.h"
clientHotel::clientHotel() = default;

clientHotel::clientHotel(const std::string &nume, const std::string &prenume, int id, int tipCamera) : nume(nume),
                                                                                                       prenume(prenume),
                                                                                                       id(id),
                                                                                                       tipCamera(
                                                                                                               tipCamera) {}

//std::ostream &operator<<(std::ostream &os, const clientHotel &hotel) {
//    os << "nume: " << hotel.nume << " prenume: " << hotel.prenume << " id: " << hotel.id << " tipCamera: "
//       << hotel.tipCamera;
//    return os;
//}

//void clientHotel::afisare(std::ostream &out) const {
//    const auto &clientHotel = *this;
//    out<< "Clientul "<<clientHotel.nume<<" "<<clientHotel.prenume <<" cu ID-ul: "<< clientHotel.id <<" incearca sa rezerve o camera de tip "<< clientHotel.tipCamera;
//    out<<"\n";
//}

int clientHotel::getTipCamera() const {
    return tipCamera;
}

void clientHotel::afisare(std::ostream &out) const {
    const auto &clientHotel = *this;
    out<< "Clientul "<<clientHotel.nume<<" "<<clientHotel.prenume <<" cu ID-ul: "<< clientHotel.id <<" incearca sa rezerve o camera de tip "<< clientHotel.tipCamera;
}
