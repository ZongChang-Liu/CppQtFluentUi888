﻿#include "FluDialogsAndFlyoutsPage.h"

FluDialogsAndFlyoutsPage::FluDialogsAndFlyoutsPage(QWidget* parent /*= nullptr*/) : FluATitlePage(parent)
{
    m_vMainLayout->setContentsMargins(35, 35, 0, 35);
    m_titleLabel->setText(tr("Dialogs & flyouts"));

    auto contentDialogCard = new FluHCard(FluIconUtils::getPixmap(("../res/ControlImages/ContentDialog.png")), tr("ContentDialog"), tr("A dialog box that can be customized to contain any XAML content."));
    contentDialogCard->setKey("ContentDialogPage");
    getFWScrollView()->getMainLayout()->addWidget(contentDialogCard);
    connect(contentDialogCard, &FluHCard::clicked, [=](QString key) { emit clickedHCard(key); });

    auto flyoutCard = new FluHCard(FluIconUtils::getPixmap(("../res/ControlImages/Flyout.png")), tr("Flyout"), tr("Shows contextual information and enables user interaction."));
    flyoutCard->setKey("FlyoutPage");
    getFWScrollView()->getMainLayout()->addWidget(flyoutCard);
    connect(flyoutCard, &FluHCard::clicked, [=](QString key) { emit clickedHCard(key); });

    auto TeachingTipCard = new FluHCard(FluIconUtils::getPixmap(("../res/ControlImages/TeachingTip.png")), tr("TeachingTip"), tr("A content-rich flyout for guiding users and enabling teaching moments."));
    TeachingTipCard->setKey("TeacingTipPage");
    getFWScrollView()->getMainLayout()->addWidget(TeachingTipCard);
    connect(TeachingTipCard, &FluHCard::clicked, [=](QString key) { emit clickedHCard(key); });
    onThemeChanged();
}

void FluDialogsAndFlyoutsPage::onThemeChanged()
{
    FluStyleSheetUitls::setQssByFileName("FluDialogsAndFlyoutsPage.qss", this, FluThemeUtils::getUtils()->getTheme());
}
