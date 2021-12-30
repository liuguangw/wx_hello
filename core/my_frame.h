//
// Created by liuguang on 2021/12/30.
//

#ifndef WX_HELLO_MY_FRAME_H
#define WX_HELLO_MY_FRAME_H

#include "wx_inc.h"

enum {
    ID_Hello = 1
};

class MyFrame : public wxFrame {
public:
    MyFrame();

private:
    void OnHello(wxCommandEvent &event);

    void OnExit(wxCommandEvent &event);

    void OnAbout(wxCommandEvent &event);
};


#endif //WX_HELLO_MY_FRAME_H
