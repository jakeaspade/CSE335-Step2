/**
 * @file AquariumView.h
 * @author jake_
 *
 *
 */
#ifndef AQUARIUMVIEW_H
#define AQUARIUMVIEW_H



class AquariumView : public wxWindow {
private:
    void OnPaint(wxPaintEvent& event);
public:
    void Initialize(wxFrame* parent);

};



#endif //AQUARIUMVIEW_H
