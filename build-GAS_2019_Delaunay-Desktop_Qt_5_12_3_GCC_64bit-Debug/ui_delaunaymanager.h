/********************************************************************************
** Form generated from reading UI file 'delaunaymanager.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELAUNAYMANAGER_H
#define UI_DELAUNAYMANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_DelaunayManager
{
public:
    QFrame *frame;
    QGridLayout *gridLayout;
    QPushButton *loadPointsPushButton;
    QSpacerItem *verticalSpacer;
    QCheckBox *enablePickingCheckBox;
    QPushButton *resetScenePushButton;
    QCheckBox *showBoundingTriangleCheckBox;
    QPushButton *checkTriangulationPushButton;
    QPushButton *voronoiDiagramPushButton;
    QPushButton *clearVoronoiDiagramPushButton;
    QPushButton *clearPointsPushButton;
    QLabel *timeDescriptionLabel;
    QLabel *timeLabel;
    QPushButton *generatePointsFilePushButton;

    void setupUi(QFrame *DelaunayManager)
    {
        if (DelaunayManager->objectName().isEmpty())
            DelaunayManager->setObjectName(QString::fromUtf8("DelaunayManager"));
        DelaunayManager->resize(400, 300);
        DelaunayManager->setFrameShape(QFrame::StyledPanel);
        DelaunayManager->setFrameShadow(QFrame::Raised);
        frame = new QFrame(DelaunayManager);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(10, 10, 381, 251));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        loadPointsPushButton = new QPushButton(frame);
        loadPointsPushButton->setObjectName(QString::fromUtf8("loadPointsPushButton"));

        gridLayout->addWidget(loadPointsPushButton, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 8, 0, 1, 1);

        enablePickingCheckBox = new QCheckBox(frame);
        enablePickingCheckBox->setObjectName(QString::fromUtf8("enablePickingCheckBox"));
        enablePickingCheckBox->setChecked(true);

        gridLayout->addWidget(enablePickingCheckBox, 3, 0, 1, 1);

        resetScenePushButton = new QPushButton(frame);
        resetScenePushButton->setObjectName(QString::fromUtf8("resetScenePushButton"));

        gridLayout->addWidget(resetScenePushButton, 4, 0, 1, 1);

        showBoundingTriangleCheckBox = new QCheckBox(frame);
        showBoundingTriangleCheckBox->setObjectName(QString::fromUtf8("showBoundingTriangleCheckBox"));
        showBoundingTriangleCheckBox->setChecked(false);

        gridLayout->addWidget(showBoundingTriangleCheckBox, 3, 1, 1, 1);

        checkTriangulationPushButton = new QPushButton(frame);
        checkTriangulationPushButton->setObjectName(QString::fromUtf8("checkTriangulationPushButton"));

        gridLayout->addWidget(checkTriangulationPushButton, 4, 1, 1, 1);

        voronoiDiagramPushButton = new QPushButton(frame);
        voronoiDiagramPushButton->setObjectName(QString::fromUtf8("voronoiDiagramPushButton"));

        gridLayout->addWidget(voronoiDiagramPushButton, 7, 0, 1, 1);

        clearVoronoiDiagramPushButton = new QPushButton(frame);
        clearVoronoiDiagramPushButton->setObjectName(QString::fromUtf8("clearVoronoiDiagramPushButton"));

        gridLayout->addWidget(clearVoronoiDiagramPushButton, 7, 1, 1, 1);

        clearPointsPushButton = new QPushButton(frame);
        clearPointsPushButton->setObjectName(QString::fromUtf8("clearPointsPushButton"));

        gridLayout->addWidget(clearPointsPushButton, 0, 1, 1, 1);

        timeDescriptionLabel = new QLabel(frame);
        timeDescriptionLabel->setObjectName(QString::fromUtf8("timeDescriptionLabel"));
        timeDescriptionLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(timeDescriptionLabel, 2, 0, 1, 1);

        timeLabel = new QLabel(frame);
        timeLabel->setObjectName(QString::fromUtf8("timeLabel"));

        gridLayout->addWidget(timeLabel, 2, 1, 1, 1);

        generatePointsFilePushButton = new QPushButton(frame);
        generatePointsFilePushButton->setObjectName(QString::fromUtf8("generatePointsFilePushButton"));

        gridLayout->addWidget(generatePointsFilePushButton, 6, 0, 1, 1);


        retranslateUi(DelaunayManager);

        QMetaObject::connectSlotsByName(DelaunayManager);
    } // setupUi

    void retranslateUi(QFrame *DelaunayManager)
    {
        DelaunayManager->setWindowTitle(QApplication::translate("DelaunayManager", "Frame", nullptr));
        loadPointsPushButton->setText(QApplication::translate("DelaunayManager", "Load points", nullptr));
        enablePickingCheckBox->setText(QApplication::translate("DelaunayManager", "Enable picking", nullptr));
        resetScenePushButton->setText(QApplication::translate("DelaunayManager", "Reset scene", nullptr));
        showBoundingTriangleCheckBox->setText(QApplication::translate("DelaunayManager", "Show bounding triangle", nullptr));
        checkTriangulationPushButton->setText(QApplication::translate("DelaunayManager", "Check triangulation", nullptr));
        voronoiDiagramPushButton->setText(QApplication::translate("DelaunayManager", "Voronoi diagram", nullptr));
        clearVoronoiDiagramPushButton->setText(QApplication::translate("DelaunayManager", "Clear Voronoi diagram", nullptr));
        clearPointsPushButton->setText(QApplication::translate("DelaunayManager", "Clear triangulation", nullptr));
        timeDescriptionLabel->setText(QApplication::translate("DelaunayManager", "Time:", nullptr));
        timeLabel->setText(QString());
        generatePointsFilePushButton->setText(QApplication::translate("DelaunayManager", "Generate points file", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DelaunayManager: public Ui_DelaunayManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELAUNAYMANAGER_H
