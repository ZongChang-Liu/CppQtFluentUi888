﻿#include "FluToggleSwitchDemo.h"

FluToggleSwitchDemo::FluToggleSwitchDemo(QWidget* parent /*= nullptr*/) : FluTemplateDemo(parent)
{
    auto toggleSwitch = new FluToggleSwitch(tr("Off"), this);
    toggleSwitch->move(50, 50);

    auto toggleSwithEx = new FluToggleSwitchEx(this);
    toggleSwithEx->move(50, 100);

    auto textToggleSwithEx = new FluTextToggleSwitchEx(this);
    // textToggleSwithEx->setText(tr("off"));
    textToggleSwithEx->move(50, 150);

    resize(600, 400);
}
