//
// Created by liuguang on 2021/12/30.
//

#include "my_app.h"
#include "my_frame.h"

bool MyApp::OnInit() {
    auto *frame = new MyFrame();
    frame->Show(true);
    return true;
}