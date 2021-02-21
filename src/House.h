#pragma once

class House {
    public:
        House(int bathroomCapacity = 2, int bedroomCapacity = 3);
        void print();
    private:
        int bathroomCapacity;
        int bedroomCapacity;
};