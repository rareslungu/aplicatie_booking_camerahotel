//
// Created by Raresssssssssss on 1/19/2022.
//

#ifndef TEMA_HOTEL_H
#define TEMA_HOTEL_H
#include <string>
#include <iostream>
#include <vector>
#include <string.h>
#include <memory>
#include "camera.h"
#include "clientHotel.h"


class hotel {
public:
    std::vector<std::shared_ptr<camera>>camere;
    std::vector<std::shared_ptr<clientHotel>>clienti;
    std::string nume;
    int nrStele;

public:
    hotel(hotel const &copie);

    hotel& operator=(hotel & copie);
    void swap(hotel &hotel1, hotel &hotel2);


    hotel(const std::string &nume, int nrStele);

    friend std::ostream &operator<<(std::ostream &os, const hotel &hotel);

    void adauga_camera(const class camera& camera);
    void adauga_client(const class clientHotel& client);

    void adauga_client(const class client& client); //deprecated
};


#endif //UNTITLED_HOTEL_H
