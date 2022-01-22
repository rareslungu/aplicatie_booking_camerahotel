#include <iostream>


#include "hotel.h"
#include "cameraDubla.h"
#include "cameraApartament.h"
#include "cameraView.h"
#include "clientHotel.h"
#include "clientHotelNationalitate.h"


int main() {
    hotel hotel1 = hotel ("Marriott", 5);

    cameraApartament camera1 = cameraApartament("5", 2, false, 6, 650, "inex", 3);
    cameraDubla camera2 = cameraDubla("2", 1, true, 2, 200, "inex", false);
    cameraView camera3 = cameraView("4", 3, false, 2, 350, "inex", true);
    cameraDubla camera4 = cameraDubla("28", 1, false, 2, 200, "inex", true);
    cameraApartament camera5 = cameraApartament("34", 2, false, 4, 51, "inex", 2); //


    clientHotelNationalitate client1 = clientHotelNationalitate("Stone", "Jack", 54, 2, "BRITANIC");
    clientHotelNationalitate client2 = clientHotelNationalitate("Lungu", "Rares", 53, 3, "ROMAN");
    clientHotelNationalitate client3 = clientHotelNationalitate("Anderson", "Andres", 4621, 1, "PORTUGHEZ");

    hotel1.adauga_client(client1);
    hotel1.adauga_client(client2);
    hotel1.adauga_client(client3);

    hotel1.adauga_camera(camera1);
    hotel1.adauga_camera(camera2);
    hotel1.adauga_camera(camera3);
    hotel1.adauga_camera(camera4);
    hotel1.adauga_camera(camera5);

    std::cout<<hotel1;

    hotel hotel2 = hotel ("Raddison Blue", 4);
    //..

    return 0;
}
