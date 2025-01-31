/**
 * @file Aquarium.h
 * @author jake_
 *
 *
 */
 
#ifndef AQUARIUM_H
#define AQUARIUM_H



class Aquarium {
private:
     wxBitmap *mBackground;  ///< Background image to use
public:
    void OnDraw(wxDC *dc);
    Aquarium();
};



#endif //AQUARIUM_H
