/**
 * @file AquariumView.h
 * @author Jacob Patton
 *
 *
 */
#ifndef AQUARIUMVIEW_H
#define AQUARIUMVIEW_H
#include "Aquarium.h"


class AquariumView : public wxWindow {
private:
    void OnPaint(wxPaintEvent& event);

    /// An object that describes our aquarium
    Aquarium  mAquarium;
public:
    void Initialize(wxFrame* parent);

};



#endif //AQUARIUMVIEW_H
