/**
 * @file RightView.cpp
 * @author Jacob Patton
 */
#include "pch.h"
#include "RightView.h"
#include <wx/dcbuffer.h>
/**
 * Initialize the aquarium view class.
 * @param parent The parent window for this class
 */
void RightView::Initialize(wxFrame* parent)
{
    Create(parent, wxID_ANY);
    SetBackgroundColour(*wxWHITE);
    Bind(wxEVT_PAINT, &RightView::OnPaint, this);
    SetBackgroundStyle(wxBG_STYLE_PAINT);
}
/**
 * Paint event, draws the window.  May contain a Superhero
 * @param event Paint event object
 */
void RightView::OnPaint(wxPaintEvent& event)
{
    wxAutoBufferedPaintDC dc(this);

    wxBrush background(*wxWHITE);
    dc.SetBackground(background);
    dc.Clear();

    // Creates Different Pens and Brushes
    wxPen blackPen(wxColour(0, 0, 0), 10);
    wxPen bluePen(wxColour(0, 0, 255), 30);
    wxPen redPen(wxColour(255, 0, 25), 10);
    wxBrush blueBrush(wxColour(0,0,255));
    wxBrush redBrush(wxColour(255,0,0));




    // Cape
    dc.SetPen(redPen);
    dc.SetBrush(redBrush);
    dc.DrawRectangle(225, 275, 300, 350);
    // Chest
    dc.SetPen(bluePen);
    dc.SetBrush(blueBrush);

    dc.DrawRectangle(225, 275, 300, 200);

    // Arms
    dc.DrawLine(225, 300, 125, 375);
    dc.DrawLine(125, 375, 200, 450);
    dc.DrawLine(525, 300, 625, 375);
    dc.DrawLine(625, 375, 550, 450);

    // Legs
    dc.DrawRectangle(250, 475, 50, 200);
    dc.DrawRectangle(450, 475, 50, 200);

    // Feet

    dc.SetBrush(redBrush);

    dc.SetPen(redPen);
    dc.DrawRectangle(440, 675, 100,50);
    dc.DrawRectangle(210, 675, 100, 50);

    // Buttons / cape
    dc.DrawRectangle(250, 258, 25,25);
    dc.DrawRectangle(475, 258, 25,25);

    // Hands
    dc.SetBrush(background);

    dc.SetPen(blackPen);
    dc.DrawRectangle(200, 435, 50, 50);
    dc.DrawRectangle(500, 435, 50, 50);

    // Neck
    dc.DrawRectangle(355, 215, 50, 50);

    // Head and hair
    dc.SetBrush(*wxTRANSPARENT_BRUSH);
    dc.DrawRectangle(300, 125, 150, 90);
    dc.DrawRectangle(300, 105, 150, 11);
    dc.DrawRectangle(300, 95, 75, 11);
    dc.DrawLine(375, 120, 390, 135);
    dc.DrawLine(390, 135, 380, 145);

    // Face
    dc.DrawRectangle(335, 155, 10, 10);
    dc.DrawRectangle(405, 155, 10, 10);
    dc.DrawLine(355, 200,385 ,200);
    dc.DrawLine(385, 200,400 ,190);

    dc.SetPen(redPen);
    // Superman Logo
    dc.DrawLine(300, 300, 450, 300);
    dc.DrawLine(450, 300, 500, 350);
    dc.DrawLine(500, 350, 375, 450);
    dc.DrawLine(375, 450, 250, 350);
    dc.DrawLine(250, 350, 300, 300);
    dc.DrawText("S", 375, 350);




}