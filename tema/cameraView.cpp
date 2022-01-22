//
// Created by Raresssssssssss on 1/20/2022.
//

#include "cameraView.h"


void cameraView::afisare(std::ostream &out) const {
    camera::afisare(out);
    if(vedereLaMare==0)
        out<<" fara vedere la mare ";
    else
        out<<" cu vedere la mare ";
    out<<"\n";
}

std::shared_ptr<camera> cameraView::clone() const {
    return std::make_shared<cameraView>(*this);
}

void cameraView::calcPretCam() {
    pret = 500;
    if(vedereLaMare)
        pret += 50;
    else
        pret -= 50;

}

cameraView::cameraView(const std::string &nrCamera, int tipCamera, bool ocupat, int capacitatePersoane, int pret,
                       const std::string &tipCameraStr, bool vedereLaMare) : camera(nrCamera, tipCamera, ocupat,
                                                                                    capacitatePersoane, pret,
                                                                                    tipCameraStr),
                                                                             vedereLaMare(vedereLaMare) {}


