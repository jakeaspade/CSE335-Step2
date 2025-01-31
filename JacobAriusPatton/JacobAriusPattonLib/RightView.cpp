/**
 * @file RightView.cpp
 * @author Jacob Patton
 */
 
#include "RightView.h"
/**
 * Initialize the aquarium view class.
 * @param parent The parent window for this class
 */
void RightView::Initialize(wxFrame* parent)
{
    Create(parent, wxID_ANY);
    SetBackgroundColour(*wxWHITE);
}