//
// Created by Raresssssssssss on 1/19/2022.
//

#ifndef TEMA_CAMERADUBLA_H
#define TEMA_CAMERADUBLA_H
#include "camera.h"

class cameraDubla final:public camera {
public:
    bool balcon; // poate fi la parter sau la etaj

public:
    cameraDubla(const std::string &nrCamera, int tipCamera, bool ocupat, int capacitatePersoane, int pret,
                const std::string &tipCameraStr, bool balcon);

    void afisare(std::ostream &out) const override;

    std::shared_ptr<camera> clone() const override;

    void calcPretCam() override;


};



#endif //UNTITLED_CAMERADUBLA_H
