#pragma once
#include <QDialog>
#include <QLineEdit>
#include <QGroupBox>
#include <QListWidget>
#include <QPushButton>
#include "../listwidget.h"
#include <QWidget>
#include <QScrollArea>
struct nodeGraphPreset {
	QString name = "";
	QString title = "";
	QString iconPath = "";
};

class OptionSelection : public QPushButton
{
public:
	OptionSelection(nodeGraphPreset node);

	nodeGraphPreset info;
protected:
    void paintEvent(QPaintEvent *event) override;
};

class CreateNewDialog : public QDialog
{
public:
	CreateNewDialog(QList<nodeGraphPreset> list);
	~CreateNewDialog();

	void configureStylesheet();
private:
	QPushButton * cancel;
	QPushButton * confirm;
	QLineEdit * nameEdit;
	QWidget* options;
	QWidget* presets;
//	QListWidget *optionWidget;
//	QListWidget *presetWidget;
	QWidget *holder;
	QTabWidget *tabbedWidget;
	QScrollArea *optionsScroll;
	QScrollArea *presetsScroll;
    QWidget *optionsWidget;
    QWidget *presetsWidget;
    int num_of_widgets_per_row = 3;



};



