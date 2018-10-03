#include "intpropertywidget.h"
#include <QLabel>

IntPropertyWidget::IntPropertyWidget()
{
	setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);

	auto mainLayout = new QVBoxLayout();
	auto textLayout = new QHBoxLayout();

	displayName = new QLineEdit(this);
	auto label = new QLabel("Display Name", this);

	textLayout->addWidget(label);
	textLayout->addWidget(displayName);
	auto wid = getValueWidget();

	mainLayout->addLayout(textLayout);
	mainLayout->addWidget(wid);
	setLayout(mainLayout);
}

IntPropertyWidget::~IntPropertyWidget()
{
}

void IntPropertyWidget::setProp(IntProperty * prop)
{
	this->prop = prop;
	displayName->setText(prop->displayName);
	intSpinBox->setValue(prop->value);
	minSpinBox->setValue(prop->minValue);
	maxSpinBox->setValue(prop->maxValue);
	stepSpinBox->setValue(prop->step);
}

int IntPropertyWidget::getValue()
{
	return x;
}

void IntPropertyWidget::setPropValue(int value)
{
	prop->setValue(value);
}

QWidget * IntPropertyWidget::getValueWidget()
{
	widget = new QWidget(this);
	auto mainLayout = new QVBoxLayout;
	auto spinLayout = new QHBoxLayout();
	auto label = new QLabel("Values", this);

	spinLayout->setContentsMargins(0, 0, 0, 0);


	widget->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
	widget->setLayout(mainLayout);

	intSpinBox = new QSpinBox(this);
	maxSpinBox = new QSpinBox(this);
	minSpinBox = new QSpinBox(this);
	stepSpinBox = new QSpinBox(this);

	auto gridLayout = new QGridLayout;
	gridLayout->addWidget(minSpinBox, 0, 1);
	gridLayout->addWidget(maxSpinBox, 1, 1);
	gridLayout->addWidget(stepSpinBox, 2,1);
	gridLayout->addWidget(new QLabel("min"), 0, 0);
	gridLayout->addWidget(new QLabel("max"), 1, 0);
	gridLayout->addWidget(new QLabel("step"), 2, 0);
	
	spinLayout->addWidget(label);
	spinLayout->addWidget(intSpinBox);

	mainLayout->addLayout(spinLayout);
	mainLayout->addLayout(gridLayout);

	connect(intSpinBox, static_cast<void (QSpinBox::*)(int)>(&QSpinBox::valueChanged), [=](int val) {
		x = val;
		emit valueChanged(x);
	});
	connect(minSpinBox, static_cast<void (QSpinBox::*)(int)>(&QSpinBox::valueChanged), [=](int val) {
		intSpinBox->setMinimum(val);
	});
	connect(maxSpinBox, static_cast<void (QSpinBox::*)(int)>(&QSpinBox::valueChanged), [=](int val) {
		intSpinBox->setMaximum(val);

	});
	connect(stepSpinBox, static_cast<void (QSpinBox::*)(int)>(&QSpinBox::valueChanged), [=](int val) {
		intSpinBox->setSingleStep(val);

	});


	connect(this, &IntPropertyWidget::valueChanged, [=](int val) {
		setPropValue(val);
	});
	return widget;
}

QWidget * IntPropertyWidget::getWidget()
{
	if (widget) return widget;
	return nullptr;
}

void IntPropertyWidget::paintEvent(QPaintEvent * event)
{
	QWidget::paintEvent(event);
	QPainter painter(this);
	painter.setRenderHint(QPainter::Antialiasing);
	painter.setPen(QPen(QColor(200, 200, 200, 70), 2));
	painter.drawRect(0, 0, width(), height());
}