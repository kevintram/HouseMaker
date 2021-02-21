#include <iostream>
#include <vector>
#include <string>
#include <memory>
#include "furniturefactories/FurnitureFactory.h"
#include "furniturefactories/ArtDecoFurnitureFactory.h"
#include "furniturefactories/ModernFurnitureFactory.h"
#include "HouseBuilder.h"

using namespace std;

void start();
void chooseHouseStyle();
void buildHouse(FurnitureFactory& furnitureFactory);
void chooseAmenity(HouseBuilder& houseBuilder, FurnitureFactory& furnitureFactory);

void editBathroom(Bathroom& bathroom, FurnitureFactory& FurnitureFactory);

shared_ptr<FurnitureFactory> chooseStyle();

int main() {
    cout << endl << "Welcome to the house builder!" << endl << endl;

    start();

    return 0;
}

void start() {
    while (true) {
        cout << "Build a house or nah?" << endl;
        cout << "1. Build House" << endl;
        cout << "2. Exit" << endl;

        int response;
        cin >> response;

        cout << endl;

        if (response == 1) {
            chooseHouseStyle();
            break;
        } else if (response == 2) {
            cout << "Bye bye" << endl;
            break;
        }
    }
    
}

void chooseHouseStyle() {
    while (true) {
        cout << "Choose a style for the house!" << endl;
        cout << "1. Art Deco" << endl;
        cout << "2. Modern" << endl;

        int response;
        cin >> response;

        cout << endl;

        if (response == 1) {
            ArtDecoFurnitureFactory artDecoFurnitureFactory;
            buildHouse(artDecoFurnitureFactory);
            break;
        } else if (response == 2) {
            ModernFurnitureFactory modernFurnitureFactory;
            buildHouse(modernFurnitureFactory);
            break;
        }
    }
    
}

void buildHouse(FurnitureFactory& furnitureFactory) {
    HouseBuilder houseBuilder;

    while (true) {
        cout << "Whaddya wanna do?" << endl;
        cout << "1. Add Amenity" << endl;
        cout << "2. Edit Amenity" << endl;
        cout << "3. Finish House" << endl;

        int response;
        cin >> response;

        cout << endl;
        if (response == 1) {
            chooseAmenity(houseBuilder, furnitureFactory);
        }
    }

}

void chooseAmenity(HouseBuilder& houseBuilder, FurnitureFactory& furnitureFactory) {
    while (true) {
        cout << "Pick one bruh" << endl;
        cout <<  "1. Bathroom" << endl;

        int response;
        cin >> response;

        cout << endl;

        if (response == 1) {
            Bathroom bathroom;

            bathroom.setShower(furnitureFactory.createShower());
            bathroom.setSink(furnitureFactory.createSink());
            bathroom.setToilet(furnitureFactory.createToilet());

            editBathroom(bathroom, furnitureFactory);

            houseBuilder.addBathroom(bathroom);

            break;
        }
    }
}

void editBathroom(Bathroom& bathroom, FurnitureFactory& FurnitureFactory) {
    while (true) {
        cout << "Bathroom:" << endl;
        cout << "Select one to change or finish if it's all good: " << endl;
        cout << "1. " << bathroom.getToilet()->getName() << endl;
        cout << "2. " << bathroom.getShower()->getName() << endl;
        cout << "3. " << bathroom.getSink()->getName() << endl;
        cout << "4. Finish" << endl;

        int response; 
        cin >> response;

        cout << endl;

        if (response == 1) {
            bathroom.setToilet(chooseStyle()->createToilet());
        } else if (response == 2) {
            bathroom.setShower(chooseStyle()->createShower());
        } else if (response == 3) {
            bathroom.setSink(chooseStyle()->createSink());
        } else if (response == 4) {
            break;
        }
    }
}

shared_ptr<FurnitureFactory> chooseStyle() {
    while (true) {
        cout << "Choose a style!" << endl;
        cout << "1. Art Deco" << endl;
        cout << "2. Modern" << endl;

        int response;
        cin >> response;

        cout << endl;

        if (response == 1) {
            return shared_ptr<ArtDecoFurnitureFactory>(new ArtDecoFurnitureFactory());
        } else if (response == 2) {
            return shared_ptr<ModernFurnitureFactory>(new ModernFurnitureFactory());
        }
    }
}
