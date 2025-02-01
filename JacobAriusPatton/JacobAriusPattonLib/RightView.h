/**
 * @file RightView.h
 * @author Jacob Patton
 *
 *
 */
 
#ifndef RIGHTVIEW_H
#define RIGHTVIEW_H



class RightView : public wxWindow{
private:

public:
    void Initialize(wxFrame* parent);
    void OnPaint(wxPaintEvent& event);
};



#endif //RIGHTVIEW_H
