#include <iostream>
#include <vector>
#include <string>
#include <memory>
#include "furniturefactories/FurnitureFactory.h"
#include "furniturefactories/ArtDecoFurnitureFactory.h"
#include "furniturefactories/ModernFurnitureFactory.h"
#include "GenericHouseBuilder.h"

using namespace std;

void start();
void chooseHouseStyle();
void buildHouse(FurnitureFactory& furnitureFactory);
void chooseAmenity(GenericHouseBuilder& houseBuilder, FurnitureFactory& furnitureFactory);

void editBathroom(shared_ptr<Bathroom>& bathroom);
void editBedroom(shared_ptr<Bedroom>& bedroom);
void editKitchen(shared_ptr<Kitchen>& kitchen);
void editLivingRoom(shared_ptr<LivingRoom>& livingRoom);
void editOffice(shared_ptr<Office>& office);
void editReadingRoom(shared_ptr<ReadingRoom>& readingRoom);

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
    GenericHouseBuilder houseBuilder;

    while (true) {
        cout << "Whaddya wanna do?" << endl;
        cout << "1. Add Amenity" << endl;
        cout << "2. Finish House" << endl;

        int response;
        cin >> response;

        cout << endl;
        if (response == 1) {
            chooseAmenity(houseBuilder, furnitureFactory);
        } else if (response == 2) {
            House* house = houseBuilder.build();
            house->print();
            cout << endl;
            break;
        }
    }

}

void chooseAmenity(GenericHouseBuilder& houseBuilder, FurnitureFactory& furnitureFactory) {
    while (true) {
        cout << "Pick one bruh" << endl;

        if (houseBuilder.hasSpaceForBathroom()) {
            cout << "1. Bathroom" << endl;
        }

        if (houseBuilder.hasSpaceForBedroom()) {
            cout << "2. Bedroom" << endl;
        }

        if (!houseBuilder.hasGarage()) {
            cout << "3. Garage" << endl;
        }

        if (!houseBuilder.hasGarden()) {
            cout << "4. Garden" << endl;
        }

        if (!houseBuilder.hasLivingRoom()) {
            cout << "5. Kitchen" << endl;
        }

        if (!houseBuilder.hasLivingRoom()) {
            cout << "6. Living Room" << endl;
        }

        if (!houseBuilder.hasOffice()) {
            cout << "7. Office" << endl;
        }

        if (!houseBuilder.hasPlayground()) {
            cout << "8. Playground" << endl;
        }

        if (!houseBuilder.hasPool()) {
            cout << "9. Pool" << endl;
        }

        if (!houseBuilder.hasReadingRoom()) {
            cout << "10. Reading Room" << endl;
        }
        
        int response;
        cin >> response;

        cout << endl;

        if (response == 1 && houseBuilder.hasSpaceForBathroom()) {
            shared_ptr<Bathroom> bathroom(new Bathroom());

            bathroom->shower = furnitureFactory.createShower();
            bathroom->sink = furnitureFactory.createSink();
            bathroom->toilet = furnitureFactory.createToilet();

            editBathroom(bathroom);

            houseBuilder.addBathroom(bathroom);

            break;
        } else if (response == 2 && houseBuilder.hasSpaceForBedroom()) {
            shared_ptr<Bedroom> bedroom(new Bedroom());

            bedroom->bed = furnitureFactory.createBed();
            bedroom->closet = furnitureFactory.createCloset();

            editBedroom(bedroom);

            houseBuilder.addBedroom(bedroom);

            break;
        } else if (response == 3 && !houseBuilder.hasGarage()) {
            houseBuilder.setGarage(make_shared<Garage>());
            break;
        } else if (response == 4 && !houseBuilder.hasGarden()) {
            houseBuilder.setGarden(make_shared<Garden>());
            break;
        } else if (response == 5 && !houseBuilder.hasKitchen()) {
            shared_ptr<Kitchen> kitchen(new Kitchen());

            kitchen->counter = furnitureFactory.createCounter();
            kitchen->oven = furnitureFactory.createOven();
            kitchen->stove = furnitureFactory.createStove();

            editKitchen(kitchen);

            houseBuilder.setKitchen(kitchen);

            break;
        } else if (response == 6 && !houseBuilder.hasLivingRoom()) {
            shared_ptr<LivingRoom> livingRoom(new LivingRoom());

            livingRoom->coffeeTable = furnitureFactory.createCoffeeTable();
            livingRoom->sofa = furnitureFactory.createSofa();
            livingRoom->TV = furnitureFactory.createTV();

            editLivingRoom(livingRoom);

            houseBuilder.setLivingRoom(livingRoom);

            break;
        } else if (response == 7 && !houseBuilder.hasOffice()) {
            shared_ptr<Office> office(new Office());

            office->desk = furnitureFactory.createDesk();
            office->officeChair = furnitureFactory.createOfficeChair();

            editOffice(office);

            houseBuilder.setOffice(office);

            break;
        } else if (response == 8 && !houseBuilder.hasPlayground()) {
            houseBuilder.setPlayground(make_shared<Playground>());
            break;
        } else if (response == 9 && !houseBuilder.hasPool()) {
            houseBuilder.setPool(make_shared<Pool>());
            break;
        } else if (response == 10 && !houseBuilder.hasReadingRoom()) {
            shared_ptr<ReadingRoom> readingRoom(new ReadingRoom());

            readingRoom->bookshelf = furnitureFactory.createBookshelf();
            readingRoom->chair = furnitureFactory.createChair();

            editReadingRoom(readingRoom);

            break;
        } 
    }
}

void editBathroom(shared_ptr<Bathroom>& bathroom) {
    while (true) {
        cout << "Bathroom:" << endl;
        cout << "Select one to change or finish if it's all good: " << endl;
        cout << "1. " << bathroom->toilet->getName() << endl;
        cout << "2. " << bathroom->shower->getName() << endl;
        cout << "3. " << bathroom->sink->getName() << endl;
        cout << "4. Finish" << endl;

        int response; 
        cin >> response;

        cout << endl;

        if (response == 1) {
            bathroom->toilet = chooseStyle()->createToilet();
        } else if (response == 2) {
            bathroom->shower = chooseStyle()->createShower();
        } else if (response == 3) {
            bathroom->sink = chooseStyle()->createSink();
        } else if (response == 4) {
            break;
        }
    }
}

void editBedroom(shared_ptr<Bedroom>& bedroom){
    while (true) {
        cout << "Bedroom: " << endl;
        cout << "Select one to change or finish it it's all good: " << endl;
        cout << "1. " << bedroom->bed->getName() << endl;
        cout << "2. " << bedroom->closet->getName() << endl;
        cout << "3. Finish" << endl;

        int response;
        cin >> response;

        cout << endl;

        if (response == 1) {
            bedroom->bed = chooseStyle()->createBed();
        } else if (response == 2) {
            bedroom->closet = chooseStyle()->createCloset();
        } else if (response == 3) {
            break;
        }
    }
}


void editKitchen(shared_ptr<Kitchen>& kitchen) {
    while (true) {
        cout << "Kitchen:" << endl;
        cout << "Select one to change or finish if it's all good: " << endl;
        cout << "1. " << kitchen->stove->getName() << endl;
        cout << "2. " << kitchen->oven->getName() << endl;
        cout << "3. " << kitchen->counter->getName() << endl;
        cout << "4. Finish" << endl;

        int response;
        cin >> response;

        cout << endl;
        
        if (response == 1) {
            cout << "Stove: " << endl;
            kitchen->stove = chooseStyle()->createStove();
        } else if (response == 2) {
            cout << "Oven: " << endl;
            kitchen->oven = chooseStyle()->createOven();
        } else if (response == 3) {
            cout << "Counter: " << endl;
            kitchen->counter = chooseStyle()->createCounter();
        } else if (response == 4) {
            break;
        }
    }
}

void editLivingRoom(shared_ptr<LivingRoom>& livingRoom) {
    while (true) {
        cout << "Living Room: " << endl;
        cout << "Select one to change or finish if it's all good: " << endl;
        cout << "1. " << livingRoom->coffeeTable->getName() << endl;
        cout << "2. " << livingRoom->sofa->getName() << endl;
        cout << "3. " << livingRoom->TV->getName() <<endl;
        cout << "4. Finish" << endl;

        int response; 
        cin >> response;

        cout << endl;

        if (response == 1) {
            livingRoom->coffeeTable = chooseStyle()->createCoffeeTable();
        } else if (response == 2) {
            livingRoom->sofa = chooseStyle()->createSofa();
        } else if (response == 3) {
            livingRoom->TV = chooseStyle()->createTV();
        } else if (response == 4) {
            break;
        }
    }
}

void editOffice(shared_ptr<Office>& office){
    while(true) {
        cout << "Living Room: " << endl;
        cout << "Select one to change or finish if it's all good: " << endl;
        cout << "1. " << office->desk->getName() << endl;
        cout << "2. " << office->officeChair->getName() << endl;
        cout << "3. Finish" << endl;

        int response;
        cin >> response;
        
        cout << endl;

        if (response == 1) {
            office->desk = chooseStyle()->createDesk();
        } else if (response == 2) {
            office->officeChair = chooseStyle()->createOfficeChair();
        } else if (response == 3) {
            break;
        }
    }
}

void editReadingRoom(shared_ptr<ReadingRoom>& readingRoom){
    while(true) {
        cout << "Reading Room: " << endl;
        cout << "Select one to change or finish if it's all good: " << endl;
        cout << "1. " << readingRoom->bookshelf->getName() << endl;
        cout << "2. " << readingRoom->chair->getName() << endl;
        cout << "3. Finish" << endl;

        int response;
        cin >> response;

        cout << endl;

        if (response == 1) {
            readingRoom->bookshelf = chooseStyle()->createBookshelf();
        } else if (response == 2) {
            readingRoom->chair = chooseStyle()->createChair();
        } else if (response == 3) {
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