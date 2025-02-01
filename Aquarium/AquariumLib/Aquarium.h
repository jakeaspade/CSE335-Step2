/**
 * @file Aquarium.h
 * @author Jacob Patton
 *
 *
 */
 
#ifndef AQUARIUM_H
#define AQUARIUM_H
#include <memory>


class Aquarium {
private:
     std::unique_ptr<wxBitmap> mBackground;  ///< Background image to use
public:
    void OnDraw(wxDC *dc);
    Aquarium();
};



#endif //AQUARIUM_H
