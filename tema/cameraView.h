//
// Created by Raresssssssssss on 1/20/2022.
//

#ifndef TEMA_CAMERAVIEW_H
#define TEMA_CAMERAVIEW_H

#include "camera.h"
class cameraView final:public camera{
protected:
    bool vedereLaMare;
public:
    cameraView(const std::string &nrCamera, int tipCamera, bool ocupat, int capacitatePersoane, int pret,
               const std::string &tipCameraStr, bool vedereLaMare);

    void afisare(std::ostream &out) const override;

    std::shared_ptr<camera> clone() const override;

    void calcPretCam() override;
};


#endif //UNTITLED_CAMERAVIEW_H
