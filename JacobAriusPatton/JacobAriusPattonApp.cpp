/**
* @file JacobAriusPattonApp.cpp
 * @author Jacob Patton
 */
#include "pch.h"
#include "JacobAriusPattonApp.h"
#include <MainFrame.h>

/**
 * Initialize the application.
 * @return
 */
bool JacobAriusPattonApp::OnInit()
{
    if (!wxApp::OnInit())
        return false;
    auto frame = new MainFrame();
    frame->Initialize();
    frame->Show(true);
    return true;
}