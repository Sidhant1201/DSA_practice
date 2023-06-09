#include <iostream>
#include <vector>

using namespace std;

class HotelRoom {
private:
    int bedrooms_;
    int bathrooms_;
public:
    HotelRoom(int bedrooms, int bathrooms) 
    : bedrooms_(bedrooms), bathrooms_(bathrooms) {}
    
    int get_price() {
        return (50*bedrooms_ + 100*bathrooms_);
    }

};

class HotelApartment : public HotelRoom {

    
public:
    HotelApartment(int bedrooms, int bathrooms) 
    : HotelRoom(bedrooms, bathrooms) {}
    
    int get_price() {
        return HotelRoom::get_price() +100;
    }
};

int main() {
    HotelRoom rm1 = HotelRoom(3, 1);

    HotelApartment ap1(1,1);
    cout<< ap1.get_price();
    // cout<< rm1.get_price();
    return 0;
}