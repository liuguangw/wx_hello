//
// Created by liuguang on 2021/12/30.
//

#include "my_frame.h"

MyFrame::MyFrame()
        : wxFrame(nullptr, wxID_ANY, "Hello World") {
    auto *menuFile = new wxMenu;
    menuFile->Append(ID_Hello, "&Hello...\tCtrl-H",
                     "Help string shown in status bar for this menu item");
    menuFile->AppendSeparator();
    menuFile->Append(wxID_EXIT);
    auto *menuHelp = new wxMenu;
    menuHelp->Append(wxID_ABOUT);
    auto *menuBar = new wxMenuBar;
    menuBar->Append(menuFile, "&File");
    menuBar->Append(menuHelp, "&Help");
    SetMenuBar(menuBar);
    CreateStatusBar();
    SetStatusText("Welcome to wxWidgets!");
    Bind(wxEVT_MENU, &MyFrame::OnHello, this, ID_Hello);
    Bind(wxEVT_MENU, &MyFrame::OnAbout, this, wxID_ABOUT);
    Bind(wxEVT_MENU, &MyFrame::OnExit, this, wxID_EXIT);
}

void MyFrame::OnExit(wxCommandEvent &event) {
    Close(true);
}

void MyFrame::OnAbout(wxCommandEvent &event) {
    wxMessageBox("This is a wxWidgets Hello World example",
                 "About Hello World", wxOK | wxICON_INFORMATION);
}

void MyFrame::OnHello(wxCommandEvent &event) {
    wxLogMessage("Hello world from wxWidgets!");
}