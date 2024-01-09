#include "FluAEmptyPage.h"
#include "../FluUtils/FluUtils.h"
#include <QStyleOption>
#include <QPainter>
#include "../FluControls/FluPushButton.h"
#include "../FluControls/FluIconButton.h"
#include "../FluControls/FluVScrollView.h"

FluAEmptyPage::FluAEmptyPage(QWidget* parent /*= nullptr*/) : QWidget(parent)
{
    m_mainLayout = new QVBoxLayout;
    m_mainLayout->setAlignment(Qt::AlignTop);
    setLayout(m_mainLayout);

    m_mainLayout->setContentsMargins(35, 35, 35, 35);

    auto titleWrap = new QWidget;
    titleWrap->setObjectName("titleWrap");
    m_mainLayout->addWidget(titleWrap);

    m_titleLabel = new QLabel;
    m_titleLabel->setObjectName("titleLabel");
    m_titleLabel->setText("A Temp Title Label");
    m_mainLayout->addWidget(m_titleLabel);

     m_vScrollView = new FluVScrollView;
    m_vScrollView->setObjectName("vScrollView");
     m_mainLayout->addWidget(m_vScrollView);

     m_vScrollView->getMainLayout()->setAlignment(Qt::AlignTop);

     m_infoLabel = new QLabel;
     m_infoLabel->setWordWrap(true);
     m_infoLabel->setText(
         "Type helps provide structure and hierarchy to UI. The default font for Windows is Segoe UI Variable. Best practice is to use Regular weight for most text, use Semibold for titles. The minimum values should be 12px Regular, 14px "
         "Semibold.");
     m_infoLabel->setObjectName("infoLabel");
     m_vScrollView->getMainLayout()->addWidget(m_infoLabel);
     m_vScrollView->getMainLayout()->addSpacing(20);

    FluStyleSheetUitls::setQssByFileName("../StyleSheet/light/FluAEmptyPage.qss", this);
}

void FluAEmptyPage::paintEvent(QPaintEvent* event)
{
    QStyleOption opt;
    opt.initFrom(this);
    QPainter painter(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &painter, this);
}
