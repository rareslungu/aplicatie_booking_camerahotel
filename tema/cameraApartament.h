//
// Created by Raresssssssssss on 1/19/2022.
//

#ifndef TEMA_CAMERAAPARTAMENT_H
#define TEMA_CAMERAAPARTAMENT_H


#include "camera.h"

class cameraApartament final: public camera {
private:
    int nrCamere;
public:
    cameraApartament(const std::string &nrCamera, int tipCamera, bool ocupat, int capacitatePersoane, int pret,
                     const std::string &tipCameraStr, int nrCamere);

    void afisare(std::ostream &out) const override;

    std::shared_ptr<camera> clone() const override;

    void calcPretCam() override;

};



#endif //UNTITLED_CAMERAAPARTAMENT_H
