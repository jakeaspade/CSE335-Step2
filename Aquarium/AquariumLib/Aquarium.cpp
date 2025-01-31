/**
 * @file Aquarium.cpp
 * @author jake_
 */

#include "pch.h"
#include "Aquarium.h"

/**
 * Draw the aquarium
 * @param dc The device context to draw on
 */
void Aquarium::OnDraw(wxDC *dc)
{
    dc->DrawBitmap(*mBackground, 0, 0);
    wxFont font(wxSize(0, 20),
            wxFONTFAMILY_SWISS,
            wxFONTSTYLE_NORMAL,
            wxFONTWEIGHT_NORMAL);
    dc->SetFont(font);
    dc->SetTextForeground(wxColour(0, 64, 0));
    dc->DrawText(L"Under the Sea!", 10, 10);
}
/**
 * Aquarium Constructor
 */
Aquarium::Aquarium()
{
    mBackground = new wxBitmap(L"images/background1.png", wxBITMAP_TYPE_ANY);

    // This was added by me to see if the handler is ok
    wxLogMessage("wxWidgets supports PNG: %d", wxImage::FindHandler(wxBITMAP_TYPE_PNG) != nullptr);
    wxLogMessage("BMP support: %d", wxImage::FindHandler(wxBITMAP_TYPE_BMP) != nullptr);
    wxLogMessage("JPEG support: %d", wxImage::FindHandler(wxBITMAP_TYPE_JPEG) != nullptr);
}