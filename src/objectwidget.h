#ifndef OBJECTWIDGET_H
#define OBJECTWIDGET_H

#include <QWidget>
#include "frameplayer.h"
#include "ui_objectwidget.h"

class ObjectWidget : public QWidget, Ui::ObjectWidget
{
     Q_OBJECT;
public:
     ObjectWidget(Workspace* ws, FramePlayer* fp, QWidget* parent=0, Qt::WindowFlags f=0);
     ObjectWidget(WorkspaceObject* wo, FramePlayer* fp, QWidget* parent=0, Qt::WindowFlags f=0);
     virtual ~ObjectWidget();
     void setPlayer(FramePlayer* p);
private:
     WorkspaceObject* object;
     Workspace* wspace;
     FramePlayer* player;
     void init();
     private slots:
	  void insert();
	  void apply();
	  void imgSelect();
	  void fromUpdate();
	  void toUpdate();
	  void validate();
};

#endif