#include <string>
#include <iostream>
#include <vector>
#include <string.h>

class camera {
private:
    std::string nrCamera;
    int tipCamera; // 1 pt dubla, 2 pt apartament, 3 pt view room
    int ocupat; // 1 pt ocupat, 0 pt liber
    int capacitatePersoane;
    int pret;
public:
    camera(const std::string& nrCamera, int tipCamera, int ocupat, int capacitatePersoane, int pret) : nrCamera(nrCamera), tipCamera(tipCamera), ocupat(ocupat), capacitatePersoane(capacitatePersoane), pret(pret) {}


    std::string tipCameraStr;

    static const std::string& intToString(int tipCam) {
        std::string tipCameraString;
        if (tipCam == 1)
            tipCameraString = "CAMERA DUBLA";
        else if (tipCam == 2)
            tipCameraString = "APARTAMENT";
        else tipCameraString = "VIEW ROOM";
        return tipCameraString;
    }


    camera() {}



    void setNrCamera(const std::string& nrCamera) {
        camera::nrCamera = nrCamera;
    }
    int setTipCamera(int tipCamera) {
        camera::tipCamera = tipCamera;
    }
    int setCapacitatePersoane(int capacitatePersoane) {
        camera::capacitatePersoane = capacitatePersoane;
    }
    void setPret(int pret) {
        camera::pret = pret;
    }
    int setOcupat(int ocupat) {
        camera::ocupat = ocupat;
    }


    const std::string& getNrCamera() const {
        return nrCamera;
    }
    const std::string& getTipCameraStr() const {
        return intToString(tipCamera);
    }
    int getTipCamera() const {
        return tipCamera;
    }

    int getCapacitatePersoane() const {
        return capacitatePersoane;
    }

    int getPret() const {
        return pret;
    }
    int getOcupat() const {
        return ocupat;
    }

};


class client {
private:
    std::string nume;
    std::string prenume;
    int id;
    int tipCamera;
    camera cam;

public:
    client(const std::string& nume, const std::string& prenume, int id, int tipCamera, const camera cam) : nume(nume), prenume(prenume), id(id), tipCamera(tipCamera), cam(cam) {}

    friend std::ostream& operator<<(std::ostream& os, const client& client) {
        os << "nume: " << client.nume << " prenume: " << client.prenume << " id: " << client.id
            << " tipCamera: " << client.tipCamera;
        return os;
    }



    void setNume(const std::string& nume) {
        client::nume = nume;
    }
    void setPrenume(const std::string& prenume) {
        client::prenume = prenume;
    }
    int setId(int id) {
        client::id = id;
    }
    void setTipCamera(int tipCamera) {
        client::tipCamera = tipCamera;
    }


    const std::string& getNume() const {
        return nume;
    }

    const std::string& getPrenume() const {
        return prenume;
    }

    int getId() const {
        return id;
    }

    int getTipCamera() const {
        return tipCamera;
    }
    void setCam(const camera& cam) {
        client::cam = cam;
    }

    const camera& getCam() const {
        return cam;
    }


};




class hotel {
public:
    std::vector<class client>clienti;
    std::vector<class camera>camere;

public:

    hotel(const std::vector<struct client>& clienti,
        const std::vector<struct camera>& camere) : clienti(clienti),
        camere(camere) {}

    void adauga_client(const class client& client) {
        clienti.push_back(client);
    }

    void adauga_camera(const class camera& camera) {
        camere.push_back(camera);
    }

    void setCamere(const std::vector<struct camera>& camere) {
        hotel::camere = camere;
    }



    void alegere_camera(class client client) {

        /*for (int i = 0; i < camere.size(); i++) {
            if (status_ocupat[i] == 0)
                std::cout << camere[i].getNrCamera() << " " << camere[i].getTipCamera() << " " << camere[i].getCapacitatePersoane() << " capacitate" << camere[i].getTipCamera() << "\n";
        }*/

        std::cout << "\nAlege tipul camerei pe care doresti s-o inchiriezi: 1.DUBLA / 2.APARTAMENT / 3.VIEW ROOM\n";

        int tipCam;
        int ok = 0;
        std::cin >> tipCam;

        for (int i = 0; i < camere.size(); i++) {
            if (camere[i].getTipCamera() == tipCam && camere[i].getOcupat() == 0) {
                client.setCam(camere[i]);
                ok = 1;
                break;
            }
        }
        if (ok == 0)
            std::cout << "Camera este ocupata sau nu a fost gasita.";
        else {
            std::cout << "Pretul camerei este de: " << client.getCam().getPret() << "\nnr: " << client.getCam().getNrCamera() << "\ncapacitate: " << client.getCam().getCapacitatePersoane() << "\ntip camera: ";
            if (client.getCam().getTipCamera() == 1)
                std::cout << "CAMERA DUBLA";
            else if (client.getCam().getTipCamera() == 2)
                std::cout << "APARTAMENT";
            else std::cout << "VIEW ROOM";
        }
    }
};



int main() {
    camera cameraDefault{"default", -1, -1, -1, -1};
    camera camera1{"1", 1, 0, 3, 1000};
    camera camera2{"2",1, 0, 2, 700 };
    camera camera3{"3",2, 0, 3, 1000 };
    camera camera4{"3",3, 0,5, 2000 };

    camera1.setPret(1000);


    client rares{"rares", "lungu", 1783, 1, cameraDefault}; //1 pentru camera dubla, 2 pt camera apartament, 3 pt view room
    client matei{"matei", "lungu", 1628, 3, cameraDefault};

    hotel hotel1{ {rares}, {camera1, camera2, camera3, camera4}};

    hotel1.adauga_camera(camera1);
    hotel1.adauga_camera(camera2);
    hotel1.adauga_camera(camera3);
    hotel1.adauga_camera(camera4);
    //hotel1.adauga_client(rares);

    hotel1.alegere_camera({ rares });
    hotel1.alegere_camera({ matei });
	
	return 0;
}